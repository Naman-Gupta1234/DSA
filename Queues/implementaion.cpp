#include <bits/stdc++.h> 
class Queue {
    int* arr;
    int afront;
    int rear;
    int size;
public:
    Queue() {
        // Implement the Constructor
        size=100001;
        arr=new int[size];
        afront=0;
        rear=0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        if(afront==rear)
        return true;
        else
        return false;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        if(rear==size)
        cout<<"queue is full"<<endl;
        else{
            arr[rear]=data;
            rear++;
        }
    }

    int dequeue() {
        // Implement the dequeue() function
        if(afront==rear)
        return -1;
        else{
            int ans=arr[afront];
            arr[afront]=-1;
            afront++;
            if(afront==rear)
            {
                afront=0;
                rear=0;
            }
            return ans;
        }
        
    }

    int front() {

        if(afront==rear)
        {
            return -1;
        }
        else return arr[afront];
        // Implement the front() function
    }
};