# include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter Number: ";
	cin>>n;
	int orignal;
	orignal=n;
	int rev;
	while(n>0)
	{	int ld=n%10;
		rev=rev*10+ld;
		n=n/10;
	}
	cout<<rev;
	if(rev==orignal)
	{
		cout<<"Palindrome";
	}
	else
	{
		cout<<"not";
	}
	return 0;
}
