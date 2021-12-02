class Solution {
public:
    bool isValid(string s) {
        int flag = 1;
        stack<char> stk;
       
     	for(int i = 0;i < s.length();i++)
     	{
     		if(s[i] == '(' || s[i] == '[' || s[i] == '{')
     		{
     			stk.push(s[i]);
     		}
     		if(s.length() == 1)
     		{
     			return false;
                break;
     		}
     		if(stk.empty())
     		{
     			return false;
                break;
     		}
     	    else if(s[i] == ')' || s[i] == ']' || s[i] == '}')
     		{
     			if(stk.top() == '(' && s[i] == ')')
     			{
     				    stk.pop();
     			}
     			else if(stk.top() == '{' && s[i] == '}')
     			{
     				stk.pop();
     			}
     			else if(stk.top() == '[' && s[i] == ']')
     			{
     			       stk.pop();
     			}
                else
                {
                    return false;
                    break;
                }
     			
     		}
            
     	}
     	if(flag && stk.empty())
     	{
     		return true;
     	}
     	else
     	{
     		return false;
     	}
     }
    
};
