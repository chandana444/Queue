#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
#include <iostream>
using namespace std;

class Queue
{
    private:
        int arr2[5];
        int Front;
        int rear;

    public:
        Queue();

        bool isEmpty();

        bool isFull();

        void enqueue(int );

        int dequeue();

        int Count();

        void display();
};
#endif
