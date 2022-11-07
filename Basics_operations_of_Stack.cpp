#include<iostream>
using namespace std;
#define n 100  // Pre declaration of the size of the array.

//  Stack is a LIFO  i.e. Last In First Out ...... type Data Structure

 class Basic_Stack
 {             
    int *arr;
    int top;

 public:
    Basic_Stack(){
        arr = new int[n];   // Creating new array of integer datatype.
        top ==-1;
    }

    void push(int x)  //Push the element at the top of the stack.
    {
        if(top==n-1){
            cout<<"Stack is full...";
            return;
        }
        else{
            top++;
            arr[top]=x;
        }
    }

    void pop()  //  Pop the top most element.
    {
        if(top==-1)
        {
            cout<<"No element to pop...";
        }
        top--;
    }

    int Top() // Return the value on top.
    {
        if(top==-1)

        {
            cout<<"No element in stack...";
        }
        return arr[top];
    }

    bool empty()
    {
        return top==-1; // Returns 1 if top value is -1.
    }

};

 int main()
 {
     Basic_Stack s;  // Creating object of class Basic_Stack.
     s.push(1);
     s.push(2);
     s.push(3);
     s.push(4);
     cout<<s.Top()<<endl;
     s.pop();
     cout<<s.empty()<<endl;
     s.pop();
     s.pop();
     s.pop();
     s.pop();
     s.pop();

     return 0;
 }

