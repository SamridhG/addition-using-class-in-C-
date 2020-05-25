#include<bits/stdc++.h>
using namespace std;
class Add{
	int a,b;
	public:
	void pass(int x=0,int y=0)
	{
		a=x;
		b=y;	

	}
	void display()
	{
		cout<<a<<"+"<<b<<"i"<<endl;
	}
	Add sum(Add G)
	{
		Add temp;
		temp.a=a+G.a;
		temp.b=b+G.b;
		return temp;
	}
};
int main()
{   Add c;
	int i,j,n,k;
	cout<<"number of Element you want to enter:";
	cin>>n;
	Add a[n];
	cout<<"Enter your complex numbers\n";
	for(i=0;i<n;i++)
	{
		cout<<"enter "<<i+1<<" real Number:";
		cin>>k;
		cout<<"there Imaginary number:";
		cin>>j;
		a[i].pass(k,j);
	}
	cout<<"Your complex number are:\n";
		for(i=0;i<n;i++)
	{

		a[i].display();
	}
	c.pass(0,0);
	cout<<"\nsum of complex are:";
	for(i=0;i<n;i++)
	{
	c=c.sum(a[i]);
    }
	c.display();
	return 0;
}
