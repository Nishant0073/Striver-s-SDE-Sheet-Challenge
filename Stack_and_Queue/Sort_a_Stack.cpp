
void insert(stack<int> &st,int k)
{
    if(st.empty())
    {
        st.push(k);
        return;
    }
    if(st.top()>k)
    {
        int x = st.top();
        st.pop();
        insert(st,k);
        st.push(x);
    }
    else
        st.push(k);
    return;
}

void sort(stack<int> &st)
{
    if(st.empty())
        return;
    int x = st.top();
    st.pop();
    sort(st);
    insert(st,x);
    return;
}

void sortStack(stack<int> &st)
{
	// Write your code here
    if(st.empty())
        return;
    sort(st);
  
}
