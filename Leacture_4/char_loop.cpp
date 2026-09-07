#include <iostream>
using namespace std;

int main(){
    int n = 8;
    //char ch = 'A'; if we use this here we will not get our square we wil get "
// ABCDEFGH
// IJKLMNOP
// QRSTUVWX
// YZ[\]^_`
// abcdefgh
// ijklmnop
// qrstuvwx
// yz{|}~� "
    for(int i = 0; i<n; i++){

        for(int j = 0; j<n; j++){ // here " A " == 65 THEN WE ARE INCREMENTING IT TO 1 UP TILL N , 66=B ...
            char ch = 'A';
            cout <<ch;
            ch =ch+ 1;
        }
        cout << endl;
    }

    return 0;
}
