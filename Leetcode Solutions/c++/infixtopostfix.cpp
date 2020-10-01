#include <bits/stdc++.h>
using namespace std;

int prec(char c)
{
    if(c == '^')
    return 3;
    else if(c == '*' || c == '/')
    return 2;
    else if(c == '+' || c == '-')
    return 1;
    else
    return -1;
}

string inftopos(string s)
{  string ns;
  stack<char> st;
  st.push('N');
    for(int i=0;i<s.length();i++)
    {
       // cout<<s[i]<< " "<<ns<<" \n";
        if(s[i]!='^'&&s[i]!='*'&&s[i]!='+'&&s[i]!='-'&&s[i]!='/'&&s[i]!=')'&&s[i]!='(')
           ns=ns+s[i];

        else if(s[i] == '(')
          st.push('(');
        else if(s[i] == ')')
        {
            while(st.top() != 'N' && st.top() != '(')
            {
                char c = st.top();
                st.pop();
               ns += c;
            }
            if(st.top() == '(')
            {
                char c = st.top();
                st.pop();
            }
        }
         else
         {
             while(st.top()!='N'&&(prec(s[i]) <= prec(st.top())))
             { char c= st.top();
              st.pop();
              ns=ns+c;
             }
             st.push(s[i]);


         }





    }
      while(st.top()!='N')
         {
             ns=ns+st.top();
             st.pop();
         }
   // cout<<":::"<<ns;
    return ns;

}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<inftopos(s)<<"\n";
    }
    return 0;
}
