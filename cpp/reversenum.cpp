#include <iostream>
using namespace std;
int reverseNum(int num)
{
    int reverse = 0;
    while (num > 0)
    {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }
    return reverse;
}
int main()
{

    int num = reverseNum(123);
    cout << num;

    return 0;
}