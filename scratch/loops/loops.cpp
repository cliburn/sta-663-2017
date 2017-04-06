
#include <cmath>
#include <iostream>
using std::cout;
using std::endl;
        
int main() {
    double xs[] = {0,1,2,3,4,5,6,7,8,9};    
   
    // looping with an index
    for (int i=0; i<sizeof(xs)/sizeof(*xs); i++) {
        cout << pow(xs[i], 2) << " ";
    }
    cout << endl;
    
    // looping with an iterator
    for (auto it=std::begin(xs); it!=std::end(xs); it++) {
        cout << pow(*it, 2) << " ";
    }
    cout << endl;
    
    // ranged for loop
    for (auto x : xs) {
        cout << pow(x, 2) << " ";
    }
    cout << endl;
    
}