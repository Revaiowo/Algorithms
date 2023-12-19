#include <iostream>
using namespace std;

const int size = 10;

class Queue{
private:
    int rear, front;
    int arr[size];
public:

    Queue(){
        rear = front = -1;
    }

    bool isEmpty(){
        if (rear == - 1 && front == -1){
            return true;
        }
        return false;
    }
    bool isFull(){
        if (rear == size-1){ //circular -> (rear+1) % size == front
            return true;
        }
        return false;
    }
    void enqueue(int value){
        if (isFull()){
            cout<<"Queue is full. Can't enqueue!"<<endl;
            return;
        }
        if (isEmpty()){
            rear = front = 0;
        }
        else{
            rear++; //circular -> rear = (rear+1) % size
        }
        arr[rear] = value;
    }
    void dequeue(){
        if (isEmpty()){
            cout<<"Queue is empty. Can't dequeue"<<endl;
            return;
        }
        if(front == rear){
            front = rear = -1;
        }
        else{
            front++; //circular front = (front+1) % size
        }
    }
    void peek(){
        if (isEmpty()){
            cout<<"Queue is empty. Can't peek"<<endl;
            return;
        }
        cout<<"Value: "<<arr[front]<<endl;

    }
};

int main(){

    Queue q;

    q.enqueue(5);
    q.enqueue(8);

    q.peek();
    q.dequeue();
    q.peek();
    q.dequeue();
    q.peek();
    
    return 0;
}