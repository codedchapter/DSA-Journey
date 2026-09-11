#include <iostream>
using namespace std;

int main(){
    int nums[6] = {77,14, 64, -16, 24, 89};
    int size = 6;
    int smallest = INT_MAX; // infinite positive .
    // int largest = INT_MIN;

    for(int i=0; i<size; i++){
        if(nums[i]<smallest){
            smallest = nums[i];
        // largest = max(nums[i], largest);
        // if(nums[i]>largest){
        //     largest = nums[i];


        // smallest = min(nums[i], smallest); equivalent to if statement above .
        }
    }
    cout <<"smallest: " << smallest <<endl;
    // cout <<"largest: " << largest <<endl;

    return 0;
}
