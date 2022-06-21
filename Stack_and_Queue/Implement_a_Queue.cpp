#include<bits/stdc++.h>
class Queue {
public:
     int* arr;
    int start = -1,end=-1;
    Queue() {
        // Implement the Constructor
        arr = new int[10001];
     
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        // Implement the isEmpty() function
        return start==end;
    }

    void enqueue(int data) {
        // Implement the enqueue() function
        arr[++end] = data;
    }

    int dequeue() {
        // Implement the dequeue() function
        if(start<end)
            return arr[++start];
        else
        {
            start = -1;
            end = -1;
            return -1;
        }
    }

    int front() {
        // Implement the front() function
         if(start<end)
            return arr[start+1];
        else
            return -1;
    }
};
