#include <iostream>
using namespace std;

int main()
{
	/*
	while loop
	
	while(condition)
	{
		code;
	}
	*/
	
	//print 1 to n numbers
	int n,a,b,c,k=1;
	cout<<"Enter the limit: ";
	cin>>n;
	while(k<=n)
	{
		cout<<k<<" ";
		k++; //iteration
	}
	cout<<endl;
	
	/*
	do while loop
	
	do
	{
		code;
	}while(condition);
	*/
	
	//Menu driven program to add and subtract
	
	do
	{
		cout<<"_*_*_MENU_*_*_"<<endl;
		cout<<"1. Addition"<<endl;
		cout<<"2. Subtraction"<<endl;
		cout<<"3. Exit"<<endl;
		cin>>c;
		switch(c)
		{
			case 1:
				cin>>a>>b;
				cout<<a<<" + "<<b<<" = "<<a+b<<endl;
				break;
			case 2:
				cin>>a>>b;
				cout<<a<<" - "<<b<<" = "<<a-b<<endl;
				break;
			case 3:
				break;
			default:
				cout<<"Enter a valid option"<<endl;
		}
	}while(c!=3);
	
	/*
	for loop
	
	for(initialization,condition,iteration)
	{
		code
	}
	
	condition - always required
	initialization & iteration optional
	*/
	
	//program to print n numbers
	cout<<"Enter the limit: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<i<<" ";
	}
	cout<<endl;
	
	//Control Statements
	
	//Break
	
	a=1;
	do{
	      	cout<<a<<" ";
	      	a++;
	      	if(a>15)
	      		break; //exit from loop
   	}while( a < 20 );
   	cout<<endl;
   	
   	//continue
   	
   	a = 0;
   	do{
   		a++; 
	      	if(a==10)
		 	continue;// skip the iteration display
		cout<<a<<" ";
	}while(a<20);
	cout<<endl;
	
	//goto
	
	a=0;
	LOOP:
	do
	{
		a++;
		if(a==19)
			goto LOOP; //again start to execute from Label LOOP
		cout<<a<<" ";
	}while(a<20);
	cout<<endl;
	
	/*
	Nested Loop
	Loop inside a loop
	eg: 
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			cout<<j+1<<" ";
		}
		cout<<endl;
	}
	*/
	
   	return 0;
}
