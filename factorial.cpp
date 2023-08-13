# include<iostream>
using namespace std;
void fact(int n)
{	int fact=1;
if(n>=0)
{
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
		cout<<fact<<"\n";
	}
}
else
{
	cout<<"Factorial finds only on positive integer";
	cout<<"\n Enter a positive integer: ";
	cin>>n;
	if(n>=0)
	{
		for(int i=1;i<=n;i++)
	{
		fact=fact*i;
		cout<<fact<<"\n";
	}
	}
	else
	{
		cout<<"You Enter Again negative Integer.";
	}
	
}
	
}
int main ()
{
	int number;
	cout<<"Enter Number: ";
	cin>>number;
	fact(number);
	return 0;
}
