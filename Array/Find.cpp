

// 10	20	30	40	50	60	70	80	90	
// N=20
// Find 70 ?



#include<iostream>
using namespace std;

int main() {
// linear search
int n=20;
int a[n]={10, 20, 30,40,50,60,70,80,90};
int size=9;
int find=70;
int  index=-1;
for(int i=0; i<size;i++){
    if(a[i]==find){
        index=i;
        break;
    }
}
if(index!=-1){
    cout<<"Element found at index "<<index<<"\n";
}
else{
    cout<<"Element not found";
}
return 0;
}






// 10, 20, 30, 40, 50
// n = 10;
// find 50

#include<iostream>
using namespace std;

int main() {
// linear search
int n = 10;
int a[n] = { 10, 20, 30, 40, 50 };
int totalElements = 5, valueToFind = 50, index = -1;
for(int i=0; i<totalElements; i++) {
if(a[i] == valueToFind) {
index = i;
break;
}
}
if(index != -1) {
cout << "Element found at index " << index << "\n";
}else {
cout << "Element NOT FOUND!!\n";
}
return 0;
}
