#include <iostream>
using namespace std;

int linearSearch(int arr[], int size , int target){
    for(int i=0; i<size; i++){
        if(arr[i] == target){ // we will get the index of that target if we found that .
            return i;
        }

    }
    return -1; // if not found -1 will be returned otherwise if found above return will be output & will not reach here .


}
// linear search takes max n steps and min 1 means if here we have to find 10 and that is at index 453 it will take thate much steps to find (453 steps) or by chance maybe found on 0 index step 1 .

int main(){
    int arr[] = {2, 5, 12,56, 56, 8, 15};
    int size =7;
    int target = 15;
    cout << linearSearch(arr,size,target)<< endl;
    return 0;
}
