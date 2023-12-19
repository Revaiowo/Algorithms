#include <iostream>
using namespace std;

const int size = 10;

class Stack{
private:
    int arr[size];
    int top;
public:

    Stack(){
        top = -1;
    }

    bool isEmpty(){
        if (top == -1){
            return true;
        }
        return false;
    }
    bool isFull(){
        if (top >= size){
            return true;
        }
        return false;
    }

    void push(int value){
        if (isFull()){
            cout<<"Stack is full. Can't push!" <<endl;
            return;
        }

        arr[++top] = value;
    }

    void pop(){
        if (isEmpty()){
            cout <<"Stack is empty. Can't pop!" <<endl;
            return;
        }
        top--;
    }

    void peek(){
        if (isEmpty()){
            cout <<"Stack is empty." <<endl;
            return;
        }
        cout <<"Top: "<<arr[top]<<endl;
    }
};

int main(){
    Stack s;

    s.push(4);
    s.push(7);

    s.peek();

    s.pop();

    s.peek();

    return 0;
}