
// Stack Problem solution//

#include<iostream>
using namespace std;
class MyStack{
    int *Stack;
    int Highsize;
    int Top;
    public :
    
    MyStack(int Size) {
    Stack = new int[Size];
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
    void  push(int a) {
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
    void  Top_Element() {
        if(Empty()) {
            cout << "Empty"<<endl;
        }else {
            cout << Stack[Top] <<endl;
        }
    }

    void  Resize_Stack(int NewSize) {
        int *stack2 =new int[NewSize];
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





int main() {
    MyStack M1(5);
    M1.pop();
    M1.push(5);
    M1.push(10);
    M1.push(15);
    M1.push(22);
    M1.push(30);
    M1.push(50);
    M1.Top_Element();
    M1.Print_Stack();

    return 0;
}
