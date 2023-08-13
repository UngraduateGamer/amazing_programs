# include<iostream>
using namespace std;
int main()
{
	int sum=0;
	int lastdigit;
	int n;
	cout<<"Enter Number";
	cin>>n;
	while(n>0)
	{
		lastdigit=n%10;  // 3 5
		sum=sum+(lastdigit*lastdigit*lastdigit); // 28 +125
		n=n/10; //15 1
	}
	cout<<sum;
	return 0;
}
