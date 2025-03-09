#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

// Öğrenci bilgilerini tutan struct
struct Student {
    string name;
    int grade;
    
    Student(string n, int g) : name(n), grade(g) {}
};

// Öğrenci ekleme
void addStudent(map<string, vector<Student>>& courses, const string& course, const string& studentName, int grade) {
    courses[course].push_back(Student(studentName, grade));
}

// Not güncelleme
void updateGrade(map<string, vector<Student>>& courses, const string& course, const string& studentName, int newGrade) {
    for (auto& student : courses[course]) {
        if (student.name == studentName) {
            student.grade = newGrade;
            break;
        }
    }
}

// Dersin ortalamasını hesaplama
double calculateAverageGrade(const vector<Student>& students) {
    if (students.empty()) return 0.0;
    
    double sum = 0;
    for (const auto& student : students) {
        sum += student.grade;
    }
    return sum / students.size();
}

// En yüksek notu alan öğrenciyi bulma
Student highestGradeStudent(const vector<Student>& students) {
    if (students.empty()) return {"", -1};

    auto highest = *max_element(students.begin(), students.end(), 
        [](const Student& a, const Student& b) {
            return a.grade < b.grade;
        });

    return highest;
}

// Öğrencileri notlarına göre sıralama
void printStudentsSortedByGrade(vector<Student>& students) {
    sort(students.begin(), students.end(), 
         [](const Student& a, const Student& b) {
             return a.grade > b.grade; // Notlara göre azalan sırayla sıralama
         });
    
    for (const auto& student : students) {
        cout << student.name << " - " << student.grade << endl;
    }
}

// En iyi 3 öğrenciyi göstermek
void printTop3Students(vector<Student>& students) {
    sort(students.begin(), students.end(), 
         [](const Student& a, const Student& b) {
             return a.grade > b.grade;
         });
    
    int count = min(3, (int)students.size());
    for (int i = 0; i < count; ++i) {
        cout << students[i].name << " - " << students[i].grade << endl;
    }
}

int main() {
    map<string, vector<Student>> courses;

    // Öğrencileri ekleyelim
    addStudent(courses, "Math", "Selin Yılmaz", 85);
    addStudent(courses, "Math", "Efe Kara", 90);
    addStudent(courses, "Math", "Metin Öztürk", 78);
    addStudent(courses, "Physics", "Selin Yılmaz", 88);
    addStudent(courses, "Physics", "Efe Kara", 92);
    
    // Notu güncelleme
    updateGrade(courses, "Math", "Metin Öztürk", 82);

    // Matematik dersinin not ortalamasını hesapla
    cout << "Math average grade: " << calculateAverageGrade(courses["Math"]) << endl;

    // En yüksek notu alan öğrenciyi bulma
    Student highestMathStudent = highestGradeStudent(courses["Math"]);
    cout << "Highest grade in Math: " << highestMathStudent.name << " - " << highestMathStudent.grade << endl;

    // Matematik dersindeki öğrencileri sıralama
    cout << "Students sorted by grade in Math:" << endl;
    printStudentsSortedByGrade(courses["Math"]);

    // En iyi 3 öğrenciyi yazdırma
    cout << "Top 3 students in Math:" << endl;
    printTop3Students(courses["Math"]);

    return 0;
}
