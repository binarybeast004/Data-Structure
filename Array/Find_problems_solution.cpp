/*
3.An array, rock[10]= {47, 68, 24, 34, 5, 75, 5, 11, 9, 99}is given. 
Create a function called ArraySearch(parameters).
Find5 and 11 in the array named rock. 

*/


#include<iostream>
using namespace std;

int main() {
// linear search
int rock[10] = { 47,68,24,34,5,75,5,11,9,99 };
int totalElements = 10, valueToFind = 5, index = -1;
for(int i=0; i<totalElements; i++) {
if(rock[i] == valueToFind) {
index = i;
break;
}

}
if(index != -1) {
cout <<valueToFind<< "  found at index " << index << "\n";
}else {
cout << "Element NOT FOUND!!\n";
}



totalElements = 10, valueToFind = 11, index = -1;
for(int i=0; i<totalElements; i++) {
if(rock[i] == valueToFind) {
index = i;
break;
}

}
if(index != -1) {
cout <<valueToFind<< " found at index " << index << "\n";
}else {
cout << "Element NOT FOUND!!\n";
}
return 0;
}
