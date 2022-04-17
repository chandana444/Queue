#include "Queue.h"

using namespace std;


    Queue::Queue(){
    Front=-1;
    rear=-1;
    for(int i=0;i<5;i++){
        arr2[i]=0;
    }
    }

    bool Queue::isEmpty(){
    if(Front==-1&&rear==-1){
        return true;
    }
    else{
        return false;
    }
    }

    bool Queue::isFull(){
    if(rear==4){
        return true;
    }
    else{
        return false;
    }
    }

    void Queue::enqueue(int val){
    if(isFull()){
        cout<<"Queue is Full"<<endl;
        return;
    }
    else if(isEmpty()){
        Front=0;
        rear=0;
        arr2[rear]= val;
    }
    else{
        rear++;
        arr2[rear]=val;
    }
    }

    int Queue::dequeue(){
    if(isEmpty()){
        cout<<"Queue is empty"<<endl;
        return 0;
    }
    else if(Front==rear){
        int x=arr2[Front];
        arr2[Front]=0;
        Front=-1;
        rear=-1;
        return x;
    }
    else{
        int x=arr2[Front];
        arr2[Front]=0;
        Front++;
        return x;
    }
    }

    int Queue::Count(){
    return (rear-Front+1);
    }

    void Queue::display(){
    cout<<"All the values in the Queue are:"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr2[i]<<" ";
    }
    cout<<endl;
    }


