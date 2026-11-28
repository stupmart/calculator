#include <iostream>
#include <vector>
#include <map>
#include <string>
#include "calculator.h"
using namespace std;

struct {
    int int_;
    float float_;
    vector <int> int_vec;
}pick,test;
// process
void arr_or_not(int pick_size){
    vector <float> number_float;
    float sum =0 ; float n = 0;
    for(int i = 0; i < pick_size;i++){
        cout << "input number " << i + 1 << endl; 
        cin >> n;
        number_float.push_back(n);}
    for(float i : number_float ){ 
        sum += i ;}
    cout << "you result = "<< sum << endl;
}
// chosse +-*/
void calc_if_basic(int ifpick){
  int pick_size1;
  cout << "choose size" << endl;
  cin >> pick_size1;
    arr_or_not(pick_size1);
}
//chosse calc
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
