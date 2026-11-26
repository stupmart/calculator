#include <iostream>
#include <vector>
#include "calculator.h"
using namespace std;

struct {
    int int_;
    float float_;
    vector <int> int_vec;
}pick,test;

int main(){
    pick.int_;
   
    cout << "1 - > xxxx feature not yet available" << endl;
    do{chosse(pick.int_);
    cout<<"pick again pick 0 is stop pick 1 is continue"<< endl;
    cin >> pick.int_;
    }while(pick.int_ == 1);
    return 0;
}