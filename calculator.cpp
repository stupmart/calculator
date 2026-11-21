
#include <iostream>
using namespace std;

void kt(int x,int y){
    cin >> x >> y;
    int chosse ;
    cout << "nhap theo tuomg uown"<< "+-*/ theo tu 1 den 4 bam 0 de thoat" << endl;
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
        case 0:
        cout << "thoat" << endl;
        break ;
        default:
        cout << "nhap cc gi v tu 1 den 4 ma" << endl;
        break;
    }
}
int main(){
    int a,b;
   kt (a,b);
return 0;
}