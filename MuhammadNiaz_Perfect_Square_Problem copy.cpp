#include <iostream>
using namespace std;
int main() {
    int num1, two_digit ,num2 ,num3;
    for(int i = 1; i > 0; i++){
        num1 = i * i;
        two_digit = num1 / 10;
        num2 = two_digit % 10;
        num3 = num1 % 10;
        if (num2 % 2 != 0 && num3 % 2 != 0 ){
            cout << num1;
            break;
        }
    }
}