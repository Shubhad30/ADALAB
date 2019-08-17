#include<iostream>
#include<time.h>
using namespace std;
int sqrtfn(int n)
{
	int ans;
	int end=n,mid=0,beg=1;
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if((mid*mid)==n)
			{
				ans=mid;
				break;
			}
			
		else if((mid*mid)>n)
			end=mid-1;
		else if((mid*mid)<n)
            {
				beg=mid+1;
				ans=mid;
			}
	}
	return ans;
}
int main()
{
	int x,answer;
	clock_t start,end1;
	cout<<"\nEnter the number:";
	cin>>x;
	start=clock();
	answer=sqrtfn(x);
	cout<<"\nSquare root of "<<x<<" is:"<<answer<<"\n";
	end1=clock();
	double t=double(end1-start)/double(CLOCKS_PER_SEC);
	cout<<"\nTime :"<<t<<"\n";
	return 0;
}