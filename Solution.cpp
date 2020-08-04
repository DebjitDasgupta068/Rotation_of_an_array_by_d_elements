#include <iostream>
using namespace std;
void rot_by_d(int a[],int n,int d)
{
	for (int i = 0; i < n; i++)
	{
		if(i+d<n)
		{
			int temp=a[i];
			a[i]=a[i+d];
			a[i+d]=temp;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout<<a[i]<<" ";
	}
}
int main()
{
	int a[30],n,t,d,i,j=1;
	cin>>t;
	do
	{
		cin>>n>>d;
		for (i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		rot_by_d(a,n,d);
		cout<<endl;
		j++;
	} while (j!=t+1);
	return 0;
}
