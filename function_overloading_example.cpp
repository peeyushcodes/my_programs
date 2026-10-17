// Function Overloading = defining multiple functions with the same name but
// different parameter lists
#include <iostream>
using namespace std;
int sum(int a, int b){
  return a+b;
}
int sum(int a, int b, int c){
  return a+b+c;
}
float sum(float x, float y){
  return x+y;
}
int main(){
  cout<<sum(3, 5)<<endl;
  cout<<sum(3, 5, 2)<<endl;
  cout<<sum(3.14f, 5.66f)<<endl;   //f to specify they are float type
  cout<<"\n<-------------------------------Code Complete------------------------------->\n";
  return 0;
}

