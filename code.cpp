#include <iostream>
using namespace std;

int euclid(int number1, int number2){
    int division = number1 / number2;
    int times_division = number1 - (number2 * division);
    cout << times_division << endl;
  if(division == 0){
    return 1;
  }else{
    return euclid(number2, times_division);
  }
}
int main(){
  cout << euclid(918, 252) << endl;
}
