#include<iostream>
using namespace std;
int main()
{
	int n,a[10],max=0;
	cout<<"\nEnter the limit:";
	cin>>n;
	cout<<"\nEnter "<<n<<" elements:";
	for(int i=0;i<n;i++)
	    cin>>a[i];
	max=a[0];	
	for(int i=0;i<n;i++)
	{
		if(max<a[i])
		  max=a[i];
	}
	cout<<"\nMaximum element is:"<<max;
	return 0;
}
		