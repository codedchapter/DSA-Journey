#include <iostream>
using namespace std;

int sumOfDigits(int num){
    int sum = 0;
    while(num > 0){
        int lastDigit = num % 10;
        num/= 10;
        sum += lastDigit;
    }
    return sum;
}



int main(){
    // sum = sumOfDigits(2356);

    cout << "sum: "<< sumOfDigits(2356); // sum


    return 0;
}
