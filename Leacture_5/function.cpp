#include <iostream>
using namespace std;

int sumOfN(int n){
    int sum = 0;
    for(int i=1; i<=n; i++){
        sum += i;
    }
    return sum;


}


int main(){
    cout << sumOfN(4) <<endl;
    cout <<sumOfN(10) <<endl;

    return 0;
}
