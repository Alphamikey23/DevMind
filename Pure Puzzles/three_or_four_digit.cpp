#include<iostream>
using namespace std;

int main() {
    cout<<"Enter a three-digit or four-digit number \n";
    char digitChar = cin.get();
    int threeDigitNumber = (digitChar - 48) * 100;
    int fourDigitNumber = (digitChar - 48 ) * 1000;
    digitChar = cin.get();
    threeDigitNumber += (digitChar - 48) * 10;
    fourDigitNumber += (digitChar - 48) * 100;
    digitChar = cin.get();
    threeDigitNumber += (digitChar - 48 );
    fourDigitNumber += (digitChar - 48) * 10;
    digitChar = cin.get();
    if(digitChar == 10) {
        cout<<"Number entered: "<<threeDigitNumber<<"\n";

    } 
    else {
        fourDigitNumber += (digitChar - 48);
        cout<<"Number entered: "<<fourDigitNumber<<"\n";
    }
}