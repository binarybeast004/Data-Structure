

//Answer No 2: 

#include<bits/stdc++.h> 
using namespace std; 
bool isOperator(char ch) { 
return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch== '^'); 
}
bool isOperand(char ch) { 
return ((ch >= '0' && ch <= '9') || (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')); 
}
int precedence(char ch) { 
int prec = 0; 
switch(ch) { 
case '+': 
case '-': 
prec = 1; 
break; 
case '*': 
case '/': 
prec = 2; 
break; 
case '^': 
prec = 3; 
break; 
default: 
prec = -1; 
break; 
}
return prec; 
}
string infixToPostfix(string exp) { 
string postfix = ""; 
stack<int> st; 
for(int i=0; i<exp.length(); i++) { 
if(isOperand(exp[i])) { 
postfix += exp[i]; 
}else if(exp[i] == '(') { 
st.push(exp[i]); 
}else if(exp[i] == ')') { 
while(!st.empty() && st.top() != '(') { 
postfix += st.top(); 
st.pop();}
st.pop(); 
}
else if(isOperator(exp[i])) { 
while(!st.empty() && precedence(exp[i]) <= precedence(st.top())) { 
postfix += st.top(); 
st.pop(); 
}
st.push(exp[i]); 
} 
}
while(!st.empty()) { 
postfix += st.top(); 
st.pop(); 
}
return postfix; 
}
int main() { 
string infix = "A^B*C-D+E/F/(G+H)"; 
string posfix = infixToPostfix(infix); 
cout << "infix\t: " << infix << "\n"; 
cout << "postfix\t: " << posfix << "\n"; 
return 0; 
}




// // Answer No 4:
// In Bubble Sort if no interchanges occurred, then the array must be sorted and no further passes are required.

#include<iostream> 
using namespace std; 
void printArray(int arr[], int size) { 
for(int i=0; i<size; i++) { 
cout << arr[i] << " "; 
}
cout << "\n"; 
}
void bubbleSort(int arr[], int size) { 
int counter = 1; 
while(counter < size) { 
bool swaped = false; 
for(int i=0; i<size-counter; i++) { 
if(arr[i] > arr[i+1]) { 
swap(arr[i], arr[i+1]); 
swaped = true; 
} 
}
if(!swaped) { 
break; 
}
counter++; 
} 
}
int main() { 
int size = 10; 
int arr[size] = { 234, 34, 348, 934, 4, 12, 49, 34798, 23, 2 }; 
cout << "initial array :\n"; 
printArray(arr, size); 
bubbleSort(arr, size); 
cout << "sorted array :\n"; 
printArray(arr, size); 
return 0; 
}

