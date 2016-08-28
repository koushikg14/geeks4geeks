#include <bits/stdc++.h>

using namespace std;

int checkSparseNumber(int n)
{
	int prev=0;
	while(n>0)
	{
		if(n&1 && prev==1)
			return 0;
		prev=n&1;
		n>>=1;
	}
	return 1;
}

int main()
{
	int testcases;
	cin>>testcases;
	while(testcases)
	{
		int n;
		cin>>n;
		cout<<checkSparseNumber(n)<<endl;
		
		testcases--;
	}
	return 0;
}
