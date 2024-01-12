#include<iostream>
using namespace std;
int main()
{
	int tst,n,x,y;
	cin>>tst;
	while(tst--)
	{
		cin>>n>>x>>y;
		for(int i=x;i<n;i++)
		{
			if(i%x==0 && i%y!=0)
			{
				cout<<i<<" ";
			}
		}
		cout<<endl;
	}
	return 0;}
