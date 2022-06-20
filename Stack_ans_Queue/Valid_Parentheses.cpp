
bool isValidParenthesis(string str)
{
    // Write your code here.
    stack<char>st;
  
    for(int i=0;i<str.size();i++)
    {
        char ch = str[i];
        if(st.size()==0)
        {
            if(ch=='{' || ch=='[' || ch=='(')
                st.push(ch);
            else
                return false;
        }
        else
        {
            if(ch=='{' || ch=='[' || ch=='(')
            {
                  st.push(ch); 
            }
            else
            {
                char x = st.top();
                if((ch=='}' && x=='{') ||(ch==']' && x=='[') || (ch==')' && x=='(') )
                    st.pop();
                else
                    return false;
            }
        }
    }
    if(st.size()!=0)
        return false;
    return true;
}
