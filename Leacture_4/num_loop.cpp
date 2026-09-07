#include <iostream>
using namespace std;

int main(){
    int n = 4;
    int num = 1;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            // if we define variable num here we will get result like . 1 2 3 4  in 4 lines .
            cout << num << " ";
            num++;
        }
        cout <<endl;
    }

    return 0;
}
