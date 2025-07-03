// MUHAMMED EFE KESKİN
//22296577
#include <iostream>
#include <list>
#include <vector>

using namespace std;

template <typename T>
void inList(list<T>& aList, const T& item){
    typename list<T>::iterator iter = aList.begin();
    while(iter != aList.end()){
        if(item == *iter)
            return;
        iter++;
    }
    aList.push_back(item);
}

int main(){

    list<int> intL;
    int arr[] = {5,2,4,5,7,2};
    int i = 0;
    while(i < sizeof(arr)/sizeof(int)){
        inList(intL,arr[i]);
        i++;
    }
    //a
    cout<<"After making six calls with data values : 5,2,4,5,7,2"<<endl;
    for(auto& i : intL)
        cout<<i<<" ";
    cout<<endl;
    //b
    list<char> charL;
    string mis = "mississippi";

    for(char c : mis){
        inList(charL,c);
    }
    cout<<"The resulting elements in charL are : ";
    for(auto& i : charL)
        cout<<i<<" ";









    return 0;
}
