#include <iostream>
using namespace std;

int euclid(int number1, int number2){
    int division = number1 / number2;
    int remainder = number1 - (number2 * division);

    cout << remainder << endl;
  if(division == 0){
    return 1;
  }else{
    return euclid(number2, remainder);
  }
}
int main(){
  cout << euclid(918, 252) << endl;
}
