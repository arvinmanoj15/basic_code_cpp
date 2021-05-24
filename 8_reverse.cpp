#include <iostream>
using namespace std;

int main()
{
	long int num,sum;
	int digit;
	//input integer number
	cout<<"Enter an integer number: ";
	cin>>num;
	//check validation
	if(num<0)
	{
		cout<<"Input positive number!!!"<<endl;
		return -1;
	}
	//Reverse number
	sum=0;
	while(num>0)
	{
		digit=num%10;	//get digit
		sum = (sum*10) + digit;
		num=num/10;
	}
	cout<<"Reverse number is: "<<sum<<endl;
	return 0;	
}
