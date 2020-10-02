#include<bits/stdc++.h> 
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
void infixToPostfix(string s,int l) 
{ 
    std::stack<char> st; 
    st.push('N');  
    string ns; 
    for(int i = 0; i < l; i++) 
    {  
        if(s[i] >= 'A' && s[i] <= 'Z') 
        ns+=s[i]; 
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
        else{ 
            while(st.top() != 'N' && prec(s[i]) <= prec(st.top())) 
            { 
                char c = st.top(); 
                st.pop(); 
                ns += c; 
            } 
            st.push(s[i]); 
        } 
    } 
    while(st.top() != 'N') 
    { 
        char c = st.top(); 
        st.pop(); 
        ns += c; 
    }  
    cout << ns << endl;  
}  
int main() 
{ 
    int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		infixToPostfix(s,n);	
	}  
    return 0; 
} 
