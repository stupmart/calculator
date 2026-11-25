
#include <iostream>
#include <vector>
using namespace std;

struct {
    int int_;
    float float_;
    vector <int> int_vec;
}pick,test;
// chosse vector

void arr_or_not(int pick_arr,vector <float> number_float1){
     float sum =0 ;
    float n = 0;
    for(int i = 0; i < pick_arr;i++){
        cin >> n;
        number_float1.push_back(n);
    }
    for(float n : number_float1 ){
            sum += n ;
        }
        cout << "you result = "<<sum;
}
void calc_if_basic(int ifpick){
  vector <float> number_float;
  int pick_arr;
  
    if(ifpick == 0){
  
  }else if(ifpick == 1){
    cout << "you pick + " << " choose number for vector "<< endl;
    cin >> pick_arr;
    arr_or_not(pick_arr,number_float);
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
    pick.int_;
    cout << "1 - > xxxx feature not yet available" << endl;
    cout << "hello im gay" << endl;
    chosse(pick.int_);
    return 0;
}