#include <iostream>
using namespace std;

int main(){
    int n = 6;
    // char ch = 'A';

    for(int i=0; i<n;){
        char ch = 'A';
        for(int j=0; j<ch+1; j++){

            cout <<ch;
            ch =ch+ 1;
        }
        cout <<endl;
    }


    return 0;
}
