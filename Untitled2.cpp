#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

int main()
	{
		int t,n;
		cin>>t;
		vector<int> arr;
		while(t>0)
				{
					n=t%2;
					t=t/2;
					arr.push_back(n);
				}
				for (int i=arr.begin();i!arr.end();i++)
				cout<<*i;
				
				return 0;
	}
