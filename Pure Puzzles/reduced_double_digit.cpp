#include<iostream>
using namespace std;

int main() {
    cout<<"Enter a two-digit number: \n";
    char digitChar = cin.get();
    int overallNumber = (digitChar - 48) * 10;
    digitChar = cin.get();
    overallNumber += (digitChar - 48);
    cout<<"That number as an integer: "<<overallNumber<<"\n";
}