#include <iostream>
using namespace std;

int main(){
    int n= 50;
    int oddSum = 0;

    for (int i=1; i<=n; i++){
        if(i% 2 != 0){
            oddSum += n;
        }
    }

    cout<< "oddsum "<< oddSum;

    return 0;
}
