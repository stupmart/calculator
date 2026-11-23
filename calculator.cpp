
#include <iostream>
#include <vector>
using namespace std;

void calcp(int ifpick){
    
    int a1;int a2;int c1;
    cout << "nhap xong if pick r" << endl;
    if(ifpick = 1){
        cout << "nhap em owi" << endl;
        cin >> a1 >> a2;

        c1 = a1 + a2;
        cout << c1 << endl;
    }else{
       
    }
}
void calc(int sw_cs){
    cin >> sw_cs;
    
    int pick;
    cout << "nhap pick di em trai" << endl;
    cin >> pick;
    switch(sw_cs){
        case 1:
        calcp(pick);
        break;
        default:
        break;
    }
}
int main(){
    int sw;
    calc(sw);
    return 0;
}