#include <iostream>
using namespace std;

void changeArr(int arr[],int size){
    for(int i=0; i<size; i++){
        arr[i] = 2*arr[i];
    }
}

int main(){
    int arr[] = {2, 3, 4};
    changeArr(arr,3);
    cout <<"in main\n";
    for(int i=0; i<3; i++){
        cout << arr[i] << " "; // here we get 4 , 6, 8 output so the orginal array is changed.
    } // no copy is transfered but the actual array is changes by passing through refrence . (pointer => will study . stores adress .)
    cout <<endl;


    return 0;
}
