#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> arrayVector;
    // cout << arrayVector <<endl;

    arrayVector.push_back(1);
    arrayVector.push_back(2);
    arrayVector.push_back(3);
    arrayVector.push_back(4);
    arrayVector.pop_back(2)

    // arrayVector << arrayVector[0] <<endl;
    arrayVector << arrayVector[3] <<endl;
    arrayVector << arrayVector <<endl;




    return 0;
}
