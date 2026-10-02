#include <bitset>
#include <cstdint>
#include <iostream>

using namespace std;

int main()
{
     int a1, b1;
     int temp;
     char operation;

     cout << "Enter num1 : ";
     cin >> a1;
     cout << "Enter num2 : ";
     cin >> b1;
     cout << "Choose the Bitwise Operation : &, |, ^, ~, < for LS, > for RS"
          << endl;
     cin >> operation;

     uint8_t a = static_cast<uint8_t>(a1);
     uint8_t b = static_cast<uint8_t>(b1);

     switch (operation)
     {
     case '&':
          cout << a1 << " in binary : " << bitset<8>(a) << endl;
          cout << b1 << " in binary : " << bitset<8>(b) << endl;
          cout << "Using Bitwise AND : " << bitset<8>(a & b) << endl;
          cout << "In Decimal : " << a1 << " & " << b1 << " = " << (a & b) << endl;
          break;

     case '|':
          cout << a1 << " in binary : " << bitset<8>(a) << endl;
          cout << b1 << " in binary : " << bitset<8>(b) << endl;
          cout << "Using Bitwise OR : " << bitset<8>(a | b) << endl;
          cout << "In Decimal : " << a1 << " | " << b1 << " = " << (a | b) << endl;
          break;

     case '^':
          cout << a1 << " in binary : " << bitset<8>(a) << endl;
          cout << b1 << " in binary : " << bitset<8>(b) << endl;
          cout << "Using Bitwise XOR : " << bitset<8>(a ^ b) << endl;
          cout << "In Decimal : " << a1 << " ^ " << b1 << " = " << (a ^ b) << endl;
          break;

     case '~':
          cout << a1 << " in binary : " << bitset<8>(a) << endl;
          cout << b1 << " in binary : " << bitset<8>(b) << endl;
          cout << "Using Bitwise NOT on " << bitset<8>(a) << endl;
          cout << "In Decimal : " << a1 << " : ~" << a1 << " = "
               << static_cast<int>(static_cast<uint8_t>(~a)) << endl;
          cout << "Using Bitwise NOT on " << bitset<8>(b) << endl;
          cout << "In Decimal : " << b1 << " : ~" << b1 << " = "
               << static_cast<int>(static_cast<uint8_t>(~b)) << endl;
          break;

     case '<':
          cout << "Enter the number of digits to shift by : ";
          cin >> temp;
          cout << a1 << " in binary : " << bitset<8>(a) << endl;
          cout << b1 << " in binary : " << bitset<8>(b) << endl;
          cout << "Using LEFT SHIFT : "
               << bitset<8>(static_cast<uint8_t>(a << temp)) << endl;
          cout << "In Decimal : " << a1 << " << " << temp << " = " << (a << temp)
               << endl;
          cout << "Using LEFT SHIFT : "
               << bitset<8>(static_cast<uint8_t>(b << temp)) << endl;
          cout << "In Decimal : " << b1 << " << " << temp << " = " << (b << temp)
               << endl;
          break;

     case '>':
          cout << "Enter the number of digits to shift by : ";
          cin >> temp;
          cout << a1 << " in binary : " << bitset<8>(a) << endl;
          cout << b1 << " in binary : " << bitset<8>(b) << endl;
          cout << "Using RIGHT SHIFT : "
               << bitset<8>(static_cast<uint8_t>(a >> temp)) << endl;
          cout << "In Decimal : " << a1 << " >> " << temp << " = " << (a >> temp)
               << endl;
          cout << "Using RIGHT SHIFT : "
               << bitset<8>(static_cast<uint8_t>(b >> temp)) << endl;
          cout << "In Decimal : " << b1 << " >> " << temp << " = " << (b >> temp)
               << endl;
          break;

     default:
          cout << "Wrong input, Exiting..." << endl;
          break;
     }

     return 0;
}
