#include <iostream>
using namespace std;

int main(){
    int n = 8;

    for(int i=0; i<n; i++){ // this loop prints no of lines depend on n .

        for(int j=0; j<i+1; j++){ // this loop prints how many in one line *.
            cout <<"*" <<" ";
        }
        cout <<endl;
    }

    return 0;
}
