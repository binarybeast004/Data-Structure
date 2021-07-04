// An array, 
// Mimo  [8]  =  {40,  50,  80,  65,  76,  10,  15,  90}  
// is  given.Implement anyone searching algorithm between Linear search 
// algorithmand Binary search algorithmthat will be more efficientforsearching thevalue 15in the array.
// Briefly explain and justify your choice.

#include<iostream>
using namespace std;



int main() {

    int Mimo [8] = {40, 50, 80, 65, 76, 10, 15, 90};
    int search = 15;
    for(int i=0; i<8; i++) {
        if(search == Mimo[i]) {
            cout << "The value is in index " << i << endl;
        }
    }
    
    return 0;
}
