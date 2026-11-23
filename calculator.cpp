
#include <iostream>
#include <vector>
using namespace std;

/*void kt(int x,int y){
    cin >> x >> y;
    int chosse ;
    cout << "nhap theo tu "<< "+- theo tu 1 den 4 bam 0 de thoat" << endl;
    cin >> chosse;
    switch (chosse){
        case 1:
        cout << x + y << endl;
        break;
        case 2:
        cout << x - y << endl;
        break;
        case 3:
        cout << x * y << endl;
        break;
        case 4 :
        cout << x / y << endl;
        break;
        default:
        cout << "nhap cc gi v tu 1 den 4 ma" << endl;
        break;
    }
}*/

struct number{
    int int_1;
    float float_1;
    vector <int> int_vector;
};
number test;

int main(){
    int x;
    test.int_vector;
    cout << "hello" << endl;
    for(int i = 0; i < 6;i++){
        cout << "nhap" << endl;
        cin >> x;
        test.int_vector.push_back(x);
    }
    for(int in : test.int_vector){
        cout << "{"<<""<<in<<","<<"}" ;
    }
return 0;
}