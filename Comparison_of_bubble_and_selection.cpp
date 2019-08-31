#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	int n,a[20],i,j,k,t,min;
	int c1=0,c2=0,c3=0;
	cout<<"\nEnter the limit:";
	cin>>n;
	cout<<"\nEnter "<<n<<" elements :";
	for(i=0;i<n;i++)
		cin>>a[i];
	/*cout<<"\nEnter the value for k:";
	cin>>k;	*/
	for(i=0;i<n;i++)
    {
		min=i;
		for(j=i+1;j<n;j++)
		{
			c1++;
			if(a[j]<a[min])
				{
					min=j;
					
				}
		}
		if(min!=i)
		{
			t=a[i];
			a[i]=a[min];
			a[min]=t;
		}
	}
	
	cout<<"\nSelection sort:";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<"\nComparisons time:"<<c1;
	cout<<"\nBubble sort:";
	for(i=0;i<n;i++)
    {
		c2++;
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
			
			}
		}
	}
    for(i=n-1;i>=0;i--)
		cout<<a[i]<<" ";
	cout<<"\nComparisons:"<<c2<<"\n";
	
	//cout<<"\n"<<k<<"th smallest no is:"<<a[k-1]<<"\n Time is:"<<t1<<"\n";
	return 0;	
}
