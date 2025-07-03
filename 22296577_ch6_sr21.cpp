// MUHAMMED EFE KESKİN
//22296577
#include <iostream>
#include <list>

using namespace std;

template <typename T>
void rmOrderedDuplicates(list<T>& aList) {
    typename list<T>::iterator iter = aList.begin();

   
    while (iter != aList.end()) {
        typename list<T>::iterator iter2 = iter;
        ++iter2; 

       
        while (iter2 != aList.end()) {
            if (*iter == *iter2) {
                iter2 = aList.erase(iter2);  
            } else {
                ++iter2;  
            }
        }
        ++iter;  
    }
}

int main() {
    list<int> lis = {2, 2, 7, 8, 8, 8, 15, 20, 20};

    rmOrderedDuplicates(lis);
    
    
    for (const int& i : lis) {
        cout << i << " ";
    }

    return 0;
}
