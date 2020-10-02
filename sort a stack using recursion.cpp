#include<bits/stdc++.h>
using namespace std;
void Insert(stack<int> &s,int temp)
{
	if(s.size()==0 || s.top()<=temp)
	{
		s.push(temp);
		return;
	}
	int val = s.top();
	s.pop();
	Insert(s,temp);
	s.push(val);
	return;
}
void Sort(stack<int> &s)
{
	if(s.size()==1)
	{
		return;
	}
	int temp = s.top();
	s.pop();
	Sort(s);
	Insert(s,temp);
}
int main()
{
	int n;
	cin>>n;
	stack<int> s;
	for(int i=0;i<n;i++)
	{
		s.push(n-i);
	}
	Sort(s);
	for(int i=0;i<n;i++)
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;
}
