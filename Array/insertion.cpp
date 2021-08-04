// 10	20	30	40	50	60	70	80	90	
// N=20
// Add  77 in index 5


#include<iostream>
using namespace std;
int main() {
// insertion
int n=20;
int a[n] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
for (int i=0; i<n; i++){
   cout << a[i] <<" ";
}
cout<<"\n";
int size=9; 
int position=6;
int value=77;
for(int i=size; i>position; i--){
  
    a[i]=a[i-1]  ;
}
a[position]= value;

for(int i=0;i<n; i++){
    cout<<a[i]<<" ";
}
size++;
return 0;
}



// 10, 20, 30, 40, 50
//   N=10
//   add 99 at index 1

#include<iostream>
using namespace std;
int main() {
// array declareation
int n = 10;
int a[n] = { 10, 20, 30, 40, 50 };
cout << "initial array\n";
for(int i=0; i<n; i++) {
cout << a[i] << " ";
}

//Insertion
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
