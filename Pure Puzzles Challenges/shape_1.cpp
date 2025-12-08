#include<iostream>
using namespace std;

int main() {
    for (int i=1; i<=4; i++) {
        for (int j=9; j>=abs(i * -2); j--) {
            cout<<"#";
        }
        cout<<"\n";
    }
}