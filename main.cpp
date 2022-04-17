#include "Queue.h"
#include <iostream>

using namespace std;

int main()
{
    Queue q1;
    int value,option;
    do{
        cout<<"Select any option number between 0 to 7 for performing the operations or select 0 to exit "<<endl;
        cout<<"1.enqueue()"<<endl;
        cout<<"2.dequeue()"<<endl;
        cout<<"3.isEmpty()"<<endl;
        cout<<"4.isFull()"<<endl;
        cout<<"5.Count()"<<endl;
        cout<<"6.display()"<<endl;
        cout<<"7.clear screen"<<endl;
        cin>>option;

        switch(option){

        case 0:
            break;
        case 1:
            cout<<"Enter a number to insert into the queue: ";
            cin>>value;
            q1.enqueue(value);
            break;

        case 2:
            cout<<"dequeue function is called, the value which is dequeued is: "<<q1.dequeue()<<endl;
            break;

        case 3:
            if (q1.isEmpty()){
            cout << "queue is Empty" << endl;}
            else{
            cout << "queue is not Empty" << endl;}
            break;

        case 4:
            if (q1.isFull()){
            cout << "queue is Full" << endl;}
            else{
            cout << "queue is not Full" << endl;}
            break;

        case 5:
            cout<<"count function is called.."<<endl;
            cout<<"Number of elements present in the queue are: "<<q1.Count()<<endl;
            break;

        case 6:
            q1.display();
            break;

        case 7:
            system("cls");
            break;

        default:
            cout<<"Select correct option number"<<endl;
        }
        }while(option!=0);



    return 0;
}
