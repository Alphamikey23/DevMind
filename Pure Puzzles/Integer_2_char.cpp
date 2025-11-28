#include<iostream>
using namespace std;

int main() {
    cout<<"Enter a number 1 - 26: \n";
    int number;
    cin>>number;
    char outputCharacter;
    outputCharacter = number + 'A' - 1;
    cout<<"Equivalent symbol : "<<outputCharacter<<"\n";

}