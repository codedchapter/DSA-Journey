#include <iostream>
using namespace std;

int main(){
    int nums[6] = {77, 99, 64, -16, 24, 89};
    int size = 6;
    int largest = INT_MIN; // iinfinite negative

    for(int i=0; i<size; i++){
        largest = max(nums[i], largest);
        // if(nums[i]>largest){
        //     largest = nums[i];


    }
    cout <<"largest: " << largest <<endl;
    // cout <<"smallest: " << smallest <<endl;
    // cout <<"largest: " << largest <<endl;

    return 0;
}
