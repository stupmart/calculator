
#include <iostream>
#include <vector>
using namespace std;

struct nb{
    int int_a1;
    float fl_a1;
};
void calc_if_basic(int ifpick){
  
    int a1;int a2;
    int c1;
    if(ifpick == 0){
        cout << "after update 0.1.0" << endl;
    }else if(ifpick == 1){
        cout << "you pick 1" << endl;
        cin >> a1 >> a2;
        c1 = a1 + a2;
        cout << c1 << endl;
    }else if(ifpick == 2){
        cout << "you pick 2" << endl;
        cin >> a1 >> a2;
        c1 = a1 - a2 ;
        cout << a1 << " - "<< a2 <<" = " << c1 << endl;
    }else if(ifpick == 3){
        cout << "you pick 3" << endl;
        cin >> a1 >> a2;
        c1 = a1 * a2 ;
        cout << a1 << " x "<< a2 <<" = " << c1 << endl;
    }else if(ifpick == 4){
        cout << "you pick 4" << endl;
        cin >> a1 >> a2;
        c1 = a1 / a2 ;
        cout << a1 << " / "<< a2 <<" = " << c1 << endl;
    }
    else{}
}
void chosse(int x){
    cin >> x;
    int pick;
    switch(x){
        case 1:// + - * /
        cout << "pick pls 1 to 4 +-*/" << endl;
        cin >> pick;
        calc_if_basic(pick);
        break;
        default:
        break;
    }
}
int main(){
    nb ttt;
    ttt.int_a1;
    cout << "1 - > xxxx feature not yet available" << endl;
    chosse(ttt.int_a1);
    return 0;
}