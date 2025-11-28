#include<iostream>

using namespace std;

int main() {
    char digitChar;
    do {
    int number = (digitChar - 48);
    digitChar = cin.get();
    while((digitChar != 10) && (digitChar != ',')) {
        number = number * 10 + (digitChar - 48);
        digitChar = cin.get();
    }
    cout<<"numbered entered: "<<number<<endl;

}while (digitChar !=10);

}