# include<iostream>
using namespace std;
void fb(int n)
{
	int f1=0;
	int f2=1;
	int nt;
	for (int i=1;i<=n;i++) // 1 2 3 4 5
	{
		cout<<f1<<endl; //0 1 1 2 3
		nt=f1+f2;	// 1 2 3 5
		f1=f2; // 1 1 2 3
		f2=nt; // 1 2 3 5
		
	}
}
int main()
{	fb(5);
	return 0;
}
