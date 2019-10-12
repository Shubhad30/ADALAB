#include<bits/stdc++.h>
using namespace std;
int i,j,n,m,p[10],w[10],v[10][10];
int max(int x,int y)
{
if(x>y)
return x;
else
return y;
}
void knapsack()
{
int x[10],nwt=m;
for(i=0;i<=n;i++)
{
for(j=0;j<=m;j++)
{
if(i==0||j==0)
v[i][j]=0;
else if(j-w[i]<0)
v[i][j]=v[i-1][j];
else
v[i][j]=max(v[i-1][j],v[i-1][j-w[i]]+p[i]);
}
}
cout<<"\n Output is:\n";
for(i=0;i<=n;i++)
{
for(j=0;j<=m;j++)
{
cout<<v[i][j]<<"\t";
}
cout<<"\n\n";
}
cout<<"the optimal solution is:"<<v[n][m]<<"\n";
i=n;
j=m;
cout<<"Included items:\n";
while(i>=0 && j>=0)
{
	if(v[i][j]!=v[i-1][j] && nwt>0)
		{
			cout<<" "<<i<<" ";
			nwt-=w[i];
			j=nwt;
		}
	i--;
	
}
cout<<"\n";
}
int main()
{
cout<<"\nEnter the no. of items:\t";
cin>>n;
cout<<"\nEnter the weight of the each item:\n";
for(i=1;i<=n;i++)
  cin>>w[i];
cout<<"\nEnter the profit of each item:\n";
for(i=1;i<=n;i++)
 cin>>p[i];
cout<<"\nEnter the knapsack's capacity:\t";
cin>>m;
knapsack();
return 0;
}
