#include<iostream>

using namespace std;

class Queue {
    public:
    int front, rear,size;
    int capacity;
    int *arr;
};
Queue* create_a_q(int capacityy){
    Queue *queue = new Queue();
    queue->front = 0;
    queue->capacity = capacityy;
    queue->size = 0;
    queue->rear = capacityy - 1;
    queue->arr = new int[queue->capacity];

    return queue;
}

void addnew(Queue *queue,int element){
    if(queue->size==queue->capacity){
        cout << "\n fulll"<<endl;
        return;
    }
    else{
        queue->rear = ((queue->rear + 1) % (queue->capacity));
        queue->arr[queue->rear] = element;
        queue->size=queue->size+1;
        cout << "\n item added is " << queue->arr[queue->rear] << endl;

    }
}
void delete_element(Queue *queue){
    if(queue->size==0){
        cout << "\n is empty " << endl;
        return;
    }
    else{
        int deletedel = queue->arr[queue->front];
        queue->front = ((queue->front + 1) % (queue->capacity));
        queue->size = queue->size - 1;
        cout << "\n deleted element from queue is " << deletedel << endl;

    }
}
int main(){
    int capacity;

    cout << "\n creating a queue with capacity 10" << endl;
    capacity = 10;
    Queue *queue = create_a_q(10);

    addnew(queue,8);
    addnew(queue,10);
    addnew(queue,13);
    addnew(queue,17);
    addnew(queue,15);

    delete_element(queue);
    
    delete_element(queue);

    delete_element(queue);
    
    delete_element(queue);

    delete_element(queue);

    delete_element(queue);

     addnew(queue,111);
     addnew(queue,171);
     addnew(queue,151);
     addnew(queue,111);
     addnew(queue,171);
     addnew(queue,151);
     addnew(queue,111);
     addnew(queue,171);
     addnew(queue,151);
     addnew(queue,151);
     addnew(queue,151);

     delete_element(queue);
    
    delete_element(queue);

    delete_element(queue);
    


    return 0;
}