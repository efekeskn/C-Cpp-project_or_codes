#include <iostream>
#include <stack>
#include <list>
#include <vector>
#include <queue>
#include "d_util.h"
#include "d_sort.h"

using namespace std;

class Kitap{
    public:
    string name;
    int no;

    Kitap(string a,int b):name(a),no(b){}
    Kitap();

};



int main(){

    vector<Kitap> kitap={("mat", 8),( "tarih", 7),( "fen", 6)};
    queue<string> ogr;
    writeVector(kitap);

    ogr.push("selin");
    ogr.push("efe");
    ogr.push("metin");
    selectionSort(kitap);
    writeVector(kitap);

    return 0;
}
