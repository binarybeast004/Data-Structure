
#include<iostream>
using namespace std;
int main() {
// deletion
int n = 10;
int a[n] = { 10, 20, 30, 40, 50 };
cout << "initial array\n";
for(int i=0; i<n; i++) {
cout << a[i] << " ";
}
cout << "\n";
int sz = 5, pos = 2;
for(int i=pos; i<sz-1; i++) {
// 2 3
// 3 4
a[i] = a[i+1];
}
a[sz] = 0;
sz--;
cout << "current array\n";
for(int i=0; i<sz; i++) {
cout << a[i] << " ";
}
return 0;
}

