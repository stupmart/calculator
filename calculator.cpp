#include <iostream>
#include <vector>
#include "calculator.h"
using namespace std;

struct {
    int int_;
    float float_;
    vector <int> int_vec;
}pick,test;
// chosse vector

void arr_or_not(int pick_size,vector <float> number_float){
    float sum =0 ; float n = 0;
    for(int i = 0; i < pick_size;i++){
        cin >> n;
        number_float.push_back(n);}
    for(float i : number_float ){
            sum += n ;}
        cout << "you result = "<<sum;
}
void calc_if_basic(int ifpick){
  vector <float> number_float_calc_if_basic;
  int pick_size1;
  
    if(ifpick == 0){}
    else if(ifpick == 1){
    cout << "you pick + " << " choose number for vector "<< endl;
    cin >> pick_size1;
    arr_or_not(pick_size1,number_float_calc_if_basic);
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
