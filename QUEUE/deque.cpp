#include<iostream>

class dq{
      public:
      int arr[20];
      int front, rear;
      dq(){
          front = -1;
          rear = -1;
      }
      void addfront(int data){
          if(front==rear+1%20){
              cout << "\n it is full";

          }
          else if(front==-1){
              front = 0;
              rear = 0;
              arr[front] = data;
          }
          else if( front==0){
              front = 19;
              arr[front] = data;
          }
          else{
              front--;
              arr[front] = data;
          }
      }

      void addrear(int data){
         if(front==rear+1%20){
              cout << "\n it is full";

          }
          else if(rear==-1){
              rear = 0;
              front = 0;
              arr[rear] = data;
          }
          else if(rear==19){
              rear = 0;
              arr[rear] = data;
          }
          else{
              rear++;
              arr[rear] = data;
          }
      }

      void deletefront(){
          if(front==-1){
              cout << "\n is empty can't delete";
          }
          else if(front==rear){
              front = -1;
              rear = -1;

          }
          else if(front==19){
              front = 0;
          }
          else{
              front++;

          }
      }

      void deleterear(){
           if(rear==-1){
              cout << "\n is empty can't delete";
          }
          else if(front==rear){
              front = -1;
              rear = -1;

          }
          else if(rear==0){
              rear = 19;
          }
          else{
              rear--;
          }


      }
};

using namespace std;
int main(){

    return 0;
}