#include <bits/stdc++.h>
using namespace std;

int main()
{
	stack <map<int,int> >s;
	map<int,int> m;
	m[100]=34;
	s.push(m);
	map<int,int> temp=s.top();
	temp[20]=67;
	s.pop();
	s.push(temp);
	map<int,int> temp1=s.top();
	cout<<temp1[20]<<" "<<temp1[100];


	return 0;
}