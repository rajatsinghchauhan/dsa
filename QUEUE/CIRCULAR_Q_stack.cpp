#include<iostream>

using namespace std;

class stackK{
    public:
    int data;
    stackK *next;
};

class circularq{
    public:
    stackK *front;
    stackK *rear;

    circularq(){
        front=NULL;
        rear=NULL;
    }

    void insertcq(int data){
        if(rear==NULL&&front==NULL){
            stackK *temp = new stackK();
            temp->data = data;
            front = temp;
            rear = temp;
            temp->next = front;
        }
        else{
            stackK *temp = new stackK();
            temp->data = data;
            temp->next = front;

            rear->next = temp;
            rear = rear->next;
        }

    }
    void deletecq(){
        if(front==NULL&&rear==NULL){
            cout << "\n circular queue is empty " << endl;
            return;
        }
        if(front==rear){
            cout << "\n element to be deleted is " << front->data << endl;
            stackK *temp = front;
            delete temp;
            front = NULL;
            rear = NULL;
        }
        else{
            cout << "\n element to be deleted is " << front->data << endl;
            rear->next = front->next;
            stackK *temp;
            temp = front;
            front = front->next;
            delete temp;
        }
    }
    void viewcq(){
        stackK *temp;
        temp = front;
        if(front==NULL){
            cout << "\n there is nothing in the circular queue " << endl;

        }else{
            
            while(temp!=rear){
                cout << "\n " << temp->data << endl;
                temp = temp->next;
            }
            cout << "\n " << temp->data << endl;
        }
    }



};

int main(){

    circularq cq;
    cq.insertcq(10);
    cq.insertcq(15);
    cq.insertcq(18);
    cq.insertcq(21);
    cq.viewcq();
    cq.deletecq();

    cq.viewcq();
    cq.deletecq();
    cq.deletecq();
    cq.deletecq();
    cout << cq.front << "    " << cq.rear << endl;
    cq.deletecq();  
    
    //  cq.insertcq(210);
    //  cq.viewcq();

    return 0;
}