#include <iostream>
using namespace std;

int main(){
    int n = 10;
    
// nested loops.
// we have used i = 1 so " i " <= n , and if we have used i as 0 so for that we needed to use i < n or n-1.

    for(int i = 1; i<=n; i++){ // this is outer loop.

        for(int j = 1; j<=n; j++){ // this is inner loop.
            cout << j << " ";
        }
        cout << endl;
    }


    return 0;
}
