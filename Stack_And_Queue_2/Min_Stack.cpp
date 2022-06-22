// Implement class for minStack.
class minStack
{
	// Write your code here.
    stack<pair<int,int>>st;
	
	public:
		
		// Constructor
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
            if(st.size()==0)
                st.push({num,num});
            else
                st.push({num,min(st.top().second,num)});
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
            if(st.size()==0)
                return -1;
            else
            {
                int x = st.top().first;
                st.pop();
                return x;
            }
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
            if(st.size()==0)
                return -1;
            else
            {
                int x = st.top().first;
                return x;
            }
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
            if(st.size()==0)
                return -1;
            else
                return st.top().second;
		}
};
