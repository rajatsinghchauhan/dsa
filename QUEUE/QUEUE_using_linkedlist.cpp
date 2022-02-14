#include<iostream>
using namespace std;

class Queue_stack{
    public:
    int data;
    Queue_stack *next;
};


class Queue{
    public:
    Queue_stack *front, *rear;
    Queue(){
        front = rear = NULL;
    }

    void enqueue(int d){
        if(rear==NULL){
            Queue_stack *newptr = new Queue_stack();
            front = newptr;
            rear = newptr;
            newptr->data = d;
            newptr->next = NULL;
            cout << "\n element added is " << newptr->data<<endl;
        }
        else{
            Queue_stack *newptr = new Queue_stack();
            newptr->data = d;
            newptr->next = NULL;
            rear->next = newptr;
            rear = rear->next;
            cout << "\n element added is " << newptr->data<<endl;

        }
    }

    void dequeue(){
        if(front==NULL){
            cout << "\n queue is empty can't delete an item " << endl;
            return;
        }
        else{
            Queue_stack *temp;
            temp = front;
            front = front->next;
            cout << "\n deleted element is " << temp->data << endl;
            delete temp;

            if(front==NULL){
                rear = NULL;
            }

        }
    }
};


int main(){

    cout << "\n Creating the queue " <<endl;
    Queue q;
    q.enqueue(5);
    q.enqueue(51);
    q.enqueue(15);
    cout << "\n Front right now " << q.front->data << "  " << q.front << endl;
    cout << "\n Rear right now " << q.rear->data << " " << q.rear << endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout << "\n Front right now " << "  " << q.front << endl;
    cout << "\n Rear right now " << " " << q.rear << endl;

    q.dequeue();
    q.enqueue(54441);
    cout << "\n Front right now " << q.front->data << "  " << q.front << endl;
    cout << "\n Rear right now " << q.rear->data << " " << q.rear << endl;

    return 0;
}