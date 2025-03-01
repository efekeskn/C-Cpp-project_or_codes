#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <chrono>
#include "d_sort.h"
#include "d_timer.h"

using namespace std;

// Rastgele sayılarla dolu bir vektör oluştur
vector<int> generateRandomVector(int size, int minVal, int maxVal) {
    vector<int> v(size);
    for (int& elem : v) {
        elem = minVal + rand() % (maxVal - minVal + 1);
    }
    return v;
}

// Sıralama algoritmalarını ve zamanlarını test eden fonksiyon
void testSortingAlgorithms() {
    int vectorSize = 100000;
    vector<int> originalVector = generateRandomVector(vectorSize, 0, 100000);
    vector<int> v;

    timer t; // Zaman ölçümü için timer nesnesi

    cout << "Vector Size         : " << vectorSize << endl;

    // Insertion Sort
    v = originalVector;
    t.start();
    insertionSort(v);
    t.stop();
    cout << "Insertion Sort Time : " << t.time() << " seconds" << endl;

    // Quick Sort
    v = originalVector;
    t.start();
    quicksort(v, 0, v.size());

    t.stop();
    cout << "Quick Sort Time     : " << t.time() << " seconds" << endl;

    // Shell Sort
    v = originalVector;
    t.start();
    shellSort(v); // Shell sort uygulanacaksa d_sort.h'a eklenmeli
    t.stop();
    cout << "Shell Sort Time     : " << t.time() << " seconds" << endl;

    // Heap Sort
    v = originalVector;
    t.start();
    heapSort(v, less<int>());
    t.stop();
    cout << "Heap Sort Time      : " << t.time() << " seconds" << endl;

    // Radix Sort
    v = originalVector;
    t.start();
    radixSort(v, 5); // d değeri: basamak sayısı (en fazla 5 basamak)
    t.stop();
    cout << "Radix Sort Time     : " << t.time() << " seconds" << endl;

    // Merge Sort
    v = originalVector;
    t.start();
    mergeSort(v, 0, v.size());
    t.stop();
    cout << "Merge Sort Time     : " << t.time() << " seconds" << endl;

    // Selection Sort
    v = originalVector;
    t.start();
    selectionSort(v);
    t.stop();
    cout << "Selection Sort Time : " << t.time() << " seconds" << endl;

    // Bubble Sort
    v = originalVector;
    t.start();
    bubbleSort(v); // Bu fonksiyon d_sort.h'a eklenmeli
    t.stop();
    cout << "Bubble Sort Time    : " << t.time() << " seconds" << endl;
}

int main() {
    srand(time(NULL)); // Rastgele sayı üreteci tohumlanıyor
    testSortingAlgorithms();
    return 0;
}
