/*

mimo[10] = { 80, 45, 19 ,15, 65, 25, 98, 55 }
2.Create a function called ArrayDeletion(parameters). Perform the following operations :
a)Delete 19 from mimo.
b)Delete 20 from mimo.
c)Delete 80 from mimo

*/



#include<iostream>
using namespace std;
int main() {
// deletion

int mimo[10] = { 80, 45, 19 ,15, 65, 25, 98, 55 };
cout << "initial array\n";
for(int i=0; i<10; i++) {
cout << mimo[i] << " ";
}
cout << "\n";
int sz = 8, pos = 2;
for(int i=pos; i<sz-1; i++) {
// 2 3
// 3 4
mimo[i] = mimo[i+1];
}
mimo[sz] = 0;
sz--;
cout << "current array\n";
for(int i=0; i<sz; i++) {
cout << mimo[i] << " ";
}
return 0;
}
