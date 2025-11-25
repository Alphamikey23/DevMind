#include<iostream>
using namespace std;

int main() {
    cout<<"Enter a two-digit number \n";
    char digitChar1 = cin.get();
    char digitChar2 = cin.get();
    int digit1 = digitChar1 - 48;
    int digit2 = digitChar2 - 48;
    int overallNumber = digit1 * 10 + digit2;
    cout<<"The number as an integer : \n"<<overallNumber<<"\n";
}