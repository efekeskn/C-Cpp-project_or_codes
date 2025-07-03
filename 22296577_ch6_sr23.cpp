// MUHAMMED EFE KESKİN
//22296577
#include <iostream>
#include <list>

using namespace std;

template <typename T>
typename list<T>::iterator seqSearch(typename list<T>::iterator first, typename list<T>::iterator last, const T& item) {
    while (first != last) {
        if (*first == item) {
            return first;
        }
        ++first;
    }
    return last;
}

template <typename T>
int count1(const list<T>& aList, const T& item) {
    int count = 0;
    for (auto iter = aList.begin(); iter != aList.end(); iter++)
        if (*iter == item)
            count++;

    return count;
}

template <typename T>
int countOccurrences(list<T>& aList, const T& item) {
    int count = 0;
    typename list<T>::iterator first = aList.begin();
    typename list<T>::iterator last = aList.end();

    while (true) {
        first = seqSearch(first, last, item);
        if (first == last)
            break;

        ++count;
        ++first;
    }

    return count;
}

int main() {
    list<int> aList = { 1, 1, 1, 4, 5, 6, 7, 8, 9, 10 };
    int search = 1;
    int count = count1(aList, search);

    cout << "Occurrences of " << search << " is: " << count << endl;

    int search2 = 4;
    int count2 = countOccurrences(aList, search2);
    cout << "Occurrences of " << search2 << " is: " << count2 << endl;

    return 0;
}
