#ifndef KISI1_H
#define KISI1_H

#include <vector>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;  // Standart C++ kütüphanelerini kullanabilmek için ekledik

#define TASIKARDI_SINIRI 0.6f
#define BRADIKARDI_SINIRI 1.0f

class Kisi {
private:
    int kisiNo;
    vector<float> pSpikes;

public:
    // Constructor
    Kisi(int no);

    // Method to read data from file
    bool dosyalariOku();

    // Method to determine the state based on difference
    char stateFinder(float difference);

    // Method to process and write the states to files
    void cozumle();
};

Kisi::Kisi(int no) {
    kisiNo = no;
}

bool Kisi::dosyalariOku() {
    ifstream reader("person" + to_string(kisiNo) + ".txt", ios::in);
    float number;
    if (!reader)
        return false;

    reader >> number;  // Read and discard first value
    reader >> number;  // Read and discard second value

    while (true) {
        reader >> number;
        if (!reader.eof())
            pSpikes.push_back(number);
        else
            break;

        for (int i = 0; i < 5; i++)  // Skip next 5 values (presumably for some metadata)
            reader >> number;
    }

    // Info file reading and storing info could be added here, if needed

    return true;
}

char Kisi::stateFinder(float difference) {
    if (difference < TASIKARDI_SINIRI)
        return 't';  // Tasikardi
    else if (difference > BRADIKARDI_SINIRI)
        return 'b';  // Bradikardi
    else
        return 'n';  // Normal
}

void Kisi::cozumle() {
    ofstream bradikardi_stream("Kisi" + to_string(kisiNo) + "-Bradikardi.txt", ios::out);
    ofstream tasikardi_stream("Kisi" + to_string(kisiNo) + "-Tasikardi.txt", ios::out);
    ofstream normal_stream("Kisi" + to_string(kisiNo) + "-Normal.txt", ios::out);

    char state, newState;
    float ilk_sure = 0, difference;
    int i = 0;
    do {
        difference = pSpikes[i + 1] - pSpikes[i];
        newState = stateFinder(difference);
        if (i == 0)
            state = newState;
        if (state != newState) {
            // Write to appropriate file based on state
            if (state == 't')
                tasikardi_stream << ilk_sure << " - " << pSpikes[i] << endl;
            else if (state == 'b')
                bradikardi_stream << ilk_sure << " - " << pSpikes[i] << endl;
            else
                normal_stream << ilk_sure << " - " << pSpikes[i] << endl;

            // Update state and initial time
            state = newState;
            ilk_sure = pSpikes[i];
        }
        i++;
    } while (i < pSpikes.size() - 1);

    // Write the last state
    if (state == 't')
        tasikardi_stream << ilk_sure << " - 15" << endl;
    else if (state == 'b')
        bradikardi_stream << ilk_sure << " - 15" << endl;
    else
        normal_stream << ilk_sure << " - 15" << endl;

    // Close file streams
    bradikardi_stream.close();
    tasikardi_stream.close();
    normal_stream.close();
}

#endif  // KISI_H
