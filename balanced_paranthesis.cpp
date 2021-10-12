  bool check(char a,char b){
        
        if(a=='(' && b==')')return true;
        
        if(a=='{' && b=='}')return true;
        
        if(a=='[' && b==']')return true;
        
        return false;
    }
    bool ispar(string s)
    {
        stack<char>st;
        int n=s.length();
        for(int i=0;i<n;i++){
            char c=s[i];
            
            if(c=='{' || c=='[' ||c=='('){
                st.push(c);
            }
            else{
                if(!st.empty()){
                    if(!check(st.top(),c))return false;
                    st.pop();
                }
                else{
                    return false;
                }
            }   
        } 
        if(st.empty())return true; 
        return false; 
    }
/*
Valid Substring 
Easy Accuracy: 48.25% Submissions: 20202 Points: 2
Given a string S consisting only of opening and closing parenthesis 'ie '('  and ')',
find out the length of the longest valid(well-formed) parentheses substring.
NOTE: Length of smallest the valid substring ( ) is 2.

Example 1:
Input: S = "(()("
Output: 2
Explanation: The longest valid 
substring is "()". Length = 2.
*/

int findMaxLen(string f) {
        
        int n;
        n=f.length();
        int max1 = 0;
        stack <int> s;
        s.push(-1);
        for(int i=0;i<n;i++){

            if((f[i]==')'))
            {
                if((f[s.top()]=='(')) 
                {
                    s.pop();
                    if((max1<i-s.top())) max1=i-s.top();
                }
                else 
                {
                    s.pop();
                    s.push(i);
                }
            }
            else
            s.push(i);

        }
       
        
        return max1;
    }

//alternate O(1):
    int findMaxLen(string str)
    {
        int res = 0;
        
        int open = 0;
        int close = 0;
        
        for(int i = 0; i < str.size(); i++)
        {
            if(str[i] == '(')
            {
                open++;
            }
            else
            {
                close++;
            }
            
            if(open == close)
            {
                res = max(res, 2 * open);
            }
            else if(close > open)
            {
                open = close = 0;
            }
        }
        
        open = close = 0;
        
        for(int i = str.size() - 1; i >= 0; i--)
        {
            if(str[i] == '(')
            {
                open++;
            }
            else
            {
                close++;
            }
            
            if(open == close)
            {
                res = max(res, 2 * open);
            }
            else if(open > close)
            {
                open = close = 0;
            }
        }
        
        return res;
    }
