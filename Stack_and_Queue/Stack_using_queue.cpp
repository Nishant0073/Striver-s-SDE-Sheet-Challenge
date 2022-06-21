#include<bits/stdc++.h>
class Stack {
	// Define the data members.
    queue<int>q1;
    queue<int>q2;

   public:
    Stack() {
        // Implement the Constructor.
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function.
        return q1.size() ;
    }

    bool isEmpty() {
        // Implement the isEmpty() function.
        return (q1.size()==0);
    }

    void push(int element) {
        // Implement the push() function.
        q1.push(element);
    }

    int pop() {
        // Implement the pop() function.
        if(q1.empty())
            return -1;
        while(q1.size()!=1)
        {
            q2.push(q1.front());
            q1.pop();
        }
        int x = q1.front();
        q1.pop();
        queue<int> te = q1;
        q1 = q2;
        q2 = te;
        return x;
    }

    int top() {
        // Implement the top() function.
        if(q1.empty())
            return -1;
        else
        {
            while(q1.size()!=1)
            {
                q2.push(q1.front());
                q1.pop();
            }
            int x = q1.front();
            q1.pop();
            q2.push(x);
            queue<int> te = q1;
            q1 = q2;
            q2 = te;
            return x;
        }
    }
};
