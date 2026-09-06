#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;

    if(n%2 == 0){
        cout << "your entered number is even\n";

    } else{
        cout << "your entered number is odd\n";
    }
    return 0;
}
