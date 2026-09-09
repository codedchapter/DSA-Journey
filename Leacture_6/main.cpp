#include <iostream>
using namespace std;

int decToBinary(int dceNum){

    int ans = 0, pow = 1;

    while(dceNum >0){
        int rem = dceNum % 2;
        dceNum /= 2;


        ans += (rem * pow);
        pow *= 10;


    }
    return ans;
}

int main(){
    int decNum = 50;
    cout << decToBinary(decNum) <<endl;
    for(int i=1; i<=10; i++)
    cout << decToBinary(i) <<endl;

    return 0;
}
