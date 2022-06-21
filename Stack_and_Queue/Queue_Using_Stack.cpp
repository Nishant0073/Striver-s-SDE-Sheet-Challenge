#include<bits/stdc++.h>
class Queue {
    // Define the data members(if any) here.
   stack<int>s1,s2;
    
    public:
    Queue() {
        // Initialize your data structure here.
    }

    void enQueue(int val) {
        // Implement the enqueue() function.
        s1.push(val);
    }

    int deQueue() {
        // Implement the dequeue() function.
       
        int x = -1;
        if(!s2.empty())
        {
            x = s2.top();
            s2.pop();
            return x;
        }
      
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        if(s2.size()!=0)
        {
            x = s2.top();
            s2.pop();
        }
        return x;
    }

    int peek() {
        // Implement the peek() function here.
       int x = -1;
        if(!s2.empty())
        {
            x = s2.top();
            return x;
        }
      
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        if(s2.size()!=0)
            x = s2.top();
        return x;
    }

    bool isEmpty() {
        // Implement the isEmpty() function here.
        return (s1.empty() && s2.empty());
    }
};
