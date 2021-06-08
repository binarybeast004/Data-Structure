
/*

An array, mimo[10]= {45, 15, 65, 25, 55, 50, 20} is given. 
1.Createafunctioncalled ArrayInsertion(parameters). 
Perform the following operations:
a)Insert 80 at the beginningof the array.
b)Insert 19 at index 3.
c)Insert 98 at the end of the array.

*/






#include<iostream>
using namespace std;

int main() {
// insertion

int mimo[10] = { 45,15,65,25,55,50,20 };
cout << "Given Array\n";
for(int i=0; i<10; i++) {
cout << mimo[i] << " ";
}
cout << "\n";
int in = 7, pos = 0, value = 80;
for(int i=in; i>pos; i--) {
mimo[i] = mimo[i-1];
}
mimo[pos]=value;

in = 7, pos = 2, value = 19;
for(int i=in; i>pos; i--) {
mimo[i] = mimo[i-1];
}
mimo[pos]=value;
in = 7, pos = 6, value = 98;
for(int i=in; i>pos; i--) {
mimo[i] = mimo[i-1];
}

mimo[pos] = value;
cout << "Insertion Array\n";
for(int i=0; i<10; i++) {
cout << mimo[i] << " ";
}
in++;
return 0;
}
