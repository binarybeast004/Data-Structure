// 1.Develop a programto check whether an input stringis a palindromeor not using a stack.
// Briefly explain your program and your techniquesbehind the development

// Definition of palindrome: 
// A palindrome is a sequence of characters that is same backward or forward.
//  Eg. “ABA”, “MADAM”, “2002”.
 
#include<iostream>
using namespace std;
class MyStack{
    char *Stack;
    int Highsize;
    int Top;
    public :
    
    MyStack(int Size) {
    Stack = new char[Size];
    Highsize = Size;
    Top = -1;
}
    ~ MyStack() {
        delete Stack;
    }
    bool Filled() {
        if(Top == Highsize-1) {
            return true;
        }else {
            return false;
        }
    }
    bool  Empty() {
        if(Top==-1) {
            return true;
        }else {
            return false;
        }
    }
    void  push(char a) {
        if(Filled()) {
            Resize_Stack(Highsize+20);
        }
        Top++;
        Stack[Top] = a;     
    }
    void  pop() {
        if(Empty()) {
            cout << "No value found for pop"<<endl;
        }else {
            Top--;
        }
    }
    char  Top_Element() {
        if(Empty()) {
            cout << "Empty"<<endl;
            return '0';
        }else {
            return Stack[Top];
        }
    }

    void  Resize_Stack(int NewSize) {
        char *stack2 =new char[NewSize];
        for(int i=0; i<=Top; i++) {
            stack2[i] = Stack[i];
        }
        delete Stack;
        Stack = stack2;
        Highsize = NewSize;
    }

    void  Print_Stack() {
        for(int i=Top; i>=0; i--) {
            cout << Stack[i] << " ";
        }
        cout << "\n\n";
    }
    };

   bool palindrome(string k)
{
    int length = k.size();
 
    // Creating a Stack
    MyStack st(100);
 
    // Finding the mid
    int i, mid = length / 2 ;
 
    for (i = 0; i < mid; i++) {
        st.push(k[i]);
    }
 
    // Checking if the length of the string
    // is odd, if odd then neglect the
    // middle character
    if (length % 2 != 0) {
        i++;
    }
   
    char ele;
    // While not the end of the string
    while (k[i] != '\0')
    {
         ele = st.Top_Element();
         st.pop();
 
    // If the characters differ then the
    // given string is not a palindrome
    if (ele != k[i])
        return false;
        i++;
    }
 
return true;
}
 



int main() {
    string k = "2002";
    if(palindrome(k)) {
        cout << "\n\n It is a Palindorme\n\n";
    }else {
        cout << "\n\n It is not a Palindrome\n\n";
    }

    return 0;
}
