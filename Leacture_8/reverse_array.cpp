#include <iostream>
using namespace std;

void reverseArray(int arr[], int size){
    int start = 0 , end = size -1;

    while(start < end){
        swap(arr[start], arr[end]);
        start++;
        end--;

    }

}

int main(){
    int arr[] = {3, 7, 23, 9, 56, 4};
    int size = 6;
    reverseArray(arr,size);
    for(int i=0; i<size; i++){
        cout <<arr[i] << " ";
    }
    cout<<endl;


    return 0;
}


// output =>
// 4 56 9 23 7 3
