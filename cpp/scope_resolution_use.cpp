#include <iostream>
using namespace std;
class rectangle{
  int length;
  int breadth;
  public:
  static int count;
  void set(){
    cout<<"Enter length : ";
    cin>>length;
    cout<<"Enter breadth : ";
    cin>>breadth;
    count++;
  }
  int area();
  int perimeter();
};
int rectangle :: count = 0;    // CASE 1 : To initialise a variable outside the class
int rectangle :: area(){      // CASE 2 : To define a member function outside class
  return length*breadth;
}
int rectangle :: perimeter()
{
  return 2*(length+breadth);
}

int a = 10;
int main(){
  int a = 43;
  rectangle r1,r2;
  r1.set();
  r2.set();
  cout<<"The area is "<<r1.area()<<endl;
  cout<<"The perimeter is "<<r2.perimeter()<<endl;
  cout<<"The count is "<<rectangle :: count<<endl;
  cout<<"Local variable value is "<<a<<endl;
  cout<<"global variable value is "<<::a<<endl;    //CASE 3 : To access a global variable inside a function containing same name variable as global variable
  cout<<"\n<-------------------------------Code Complete------------------------------->\n";
  return 0;
}
