// Let us assumeS1 and S2 are two empty Stacks.
// Develop a program to createtwo principal operations  of Queue,
//  Enqueueand Dequeueby using  S1  and  S2 Stacks. 
// Explain  your program and your techniquesbehind the implementation.

#include<iostream>
using namespace std;
class MyStack{
    public:
    int *Stack;
    int Highsize;
    int Top;
    
    MyStack() {

        Stack = new int[100];
        Highsize = 100;
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
    int  Top_Element() {
        if(Empty()) {
            cout << "Empty"<<endl;
            return 0;
        }else {
            return  Stack[Top];
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

class Queue {
    public:
    MyStack M1, M2;
    // Enqueue an item to the queue
    void Enqueue(int x)
    {
        // Push item into the first stack
        M1.push(x);
    }
 
    // Dequeue an item from the queue
    int Dequeue()
    {
        // if both stacks are Empty
        if (M1.Empty() && M2.Empty()) {
            cout <<"Q is Empty";
            exit(0);
        }
 
        // if M2 is Empty, move
        // elements from M1
        if (M2.Empty()) {
            while (!M1.Empty()) {
                M2.push(M1.Top_Element());
                M1.pop();
            }
        }
 
        // return the top item from M2
        int x = M2.Top_Element();
        M2.pop();
        return x;
    }
};



int main() {
    Queue C;  
    C.Enqueue(43129);
    C.Enqueue(113045);
    C.Enqueue(350);
    C.Enqueue(125);
    C.Enqueue(789);
    cout << C.Dequeue() << "\n\n";
    cout << C.Dequeue() << "\n\n";


    return 0;
}
