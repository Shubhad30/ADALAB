#include<iostream>
using namespace std;
int main()
{
	int t,i=0,a[20],n1,j=0,beg,end,mid,key;
    cin>>t;
	int op[t];
	while(i<t)
	{
		op[i]=-1;
		cin>>n1>>key;
		for(j=0;j<n1;j++)
		{
			cin>>a[j];
		}
		beg=0;
		end=n1;
		while(beg<=end)
		{
			mid=(beg+end)/2;
			if(key==a[mid])
			{
				op[i]=1;
				break;
			}
			else if(key>a[mid])
				 beg=mid+1;
			else 
                 end=mid-1;	 
		}
		i++;
	}
	for(i=0;i<t;i++)
		 cout<<"\n"<<op[i];
	return 0;
}
		