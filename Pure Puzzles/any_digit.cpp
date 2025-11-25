#include<iostream>
using namespace std;

int main() {
    cout<<"Enter a number with as many digits as you like \n";
    char digitChar = cin.get();
    int number = (digitChar - 48);
    digitChar = cin.get();
    while(digitChar != 10) {
        number = number * 10 + (digitChar - 48);
        digitChar = cin.get();
    }
    cout<<"Number entered: "<<number<<"\n";
}