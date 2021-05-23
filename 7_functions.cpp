#include <iostream>
using namespace std;

void sum()
{
	//without return without argument 
	int a,b;
	cout<<"Enter two numbers ";
	cin>>a>>b;
	cout<<a+b<<endl;
}
int sum(int a,int b) //call by value method
{
	//with return with argument
	return a+b;
}
void swap(int *x,int *y) //call by pointer
{
	int temp;
	temp = *x; //value of x saved in temp
	*x = *y; //value of y moved to x
	*y = temp; //saved value of x moved to y
}
void add(int &a,int &b) //call by reference
{
	a+=b; //value of a changed to a+b
}
/* THIS WILL GIVE ERROR
void sum(int a,int b) 
{	
	//example for without return and with argument
	//This function has same name,same type and same number of arguments
	//when compared with int sum(int a,int b)
	cout<<a+b<<endl;
}
int sum()
{
	//example for with return and without argument
	//This function has same name,same type and same number of arguments
	//when compared with void sum();
	int a,b;
	cout<<"Enter two numbers ";
	cin>>a>>b;
	return a+b;
}*/
int main()
{
	int x,y;
	sum();
	cout<<"Enter two numbers ";
	cin>>x>>y;
	cout<<sum(x,y)<<endl; //call by value method
	cout<<"Enter X ";
	cin>>x;
	cout<<"Enter Y ";
	cin>>y;
	swap(&x,&y); //call by pointer
	cout<<"X = "<<x<<" Y = "<<y<<endl;
	cout<<"Enter X ";
	cin>>x;
	cout<<"Enter Y ";
	cin>>y;
	add(x,y); //call by reference
	cout<<"X = "<<x<<" Y = "<<y<<endl;
	return 0;
}

