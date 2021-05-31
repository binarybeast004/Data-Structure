#include<iostream>
using namespace std;
int main() {
// insertion
int n = 10;
int a[n] = { 10, 20, 30, 40, 50 };
cout << "initial array\n";
for(int i=0; i<n; i++) {
cout << a[i] << " ";
}
cout << "\n";
int sz = 5, pos = 2, value = 99;
for(int i=sz; i>pos; i--) {
// 5 4
// 4 3
// 3 2
a[i] = a[i-1];
}
a[pos] = value;
cout << "current array\n";
for(int i=0; i<n; i++) {
cout << a[i] << " ";
}
sz++;
return 0;
}
