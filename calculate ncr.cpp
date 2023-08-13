//ncr=n!/r!*(n-r)!
# include<iostream>
using namespace std;
int fact(int n)
{
	int f=1;
	for(int i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
int main ()
{	int n,r,ncr,nr;
cout<<"Enter the value of n and r: ";
cin>>n>>r;
	nr=n-r;
	nr=fact(n-r);
	n=fact(n);
	r=fact(r);
	ncr=n/(r*nr);
	cout<<ncr;
	return 0;
}
