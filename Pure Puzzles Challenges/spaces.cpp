#include<iostream>
using namespace std;



int main() {
    int j = 8;
    for (int i=0; i<=3; i++) {
        cout<<string(i,' ')<<string(j,'#')<<string(i,' ');
        j = j-2;
        cout<<"\n";
    }
}