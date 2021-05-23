#include <iostream>
using namespace std;

int main()
{
	/*
	Less than: a < b
	Less than or equal to: a <= b
	Greater than: a > b
	Greater than or equal to: a >= b
	Equal to a == b
	Not Equal to: a != b
	*/
	
	/*
	Conditional Operator
	
	ans = (condition) ? Expression1(True) : Expression2(False); 
	*/
	
	//to print 10 if the number is less than 10
	
	int a,b;
	cout<<"Enter a number ";
	cin>>a;
	b = (a<10)?10:a;
	cout<<b<<endl;
	
	/*if-else
	if(condition)
	{
		Code to execute if condition is true
	}
	else
	{
		code to execute if condition is false
	}
	*/
	
	//to check input is even or odd
	
	cout<<"Enter a number ";
	cin>>a;
	if(a%2==0)
	{
		cout<<"Input is Even"<<endl;
	}
	else
	{
		cout<<"Input is Odd"<<endl;
	}
	
	/*if-else
	if(condition1)
	{
		Code to execute if condition1 is true
	}
	else if(conditon2)
	{
		Code to execute if condition2 is true
	}
	else
	{
		code to execute if all conditions are false
	}
	*/
	
	/*Grade problem
	Mark >=90 A
	Mark >=75 B
	Mark >=55 C
	Mark >=45 P
	Mark <45  F
	*/
	cout<<"Enter Mark: ";
	cin>>a;
	if(a>=90)
		cout<<"A"<<endl;
	else if(a>=75)
		cout<<"B"<<endl;
	else if(a>=55)
		cout<<"C"<<endl;
	else if(a>=45)
		cout<<"P"<<endl;
	else
		cout<<"F"<<endl;
		
	/*
	Nested if
	
	if(condition 1)
	{
		if(condition 2)
		{
			code to be executed
		}
	}
	else
	{
		code
	}
	*/
	
	//program to check if the number is both +ve and even
	
	cout<<"Enter the number: ";
	cin>>a;
	if(a>=0)
	{
		if(a%2==0)
		{
			cout<<"Positive and Even"<<endl;
		}
	}
	else
	{
		cout<<"Failed the condition"<<endl;
	}
	
	/*
	Switch-case
	
	switch(expression/variable)
	{
		case constant1:
			code to be executed 1
			break;
		case constant2:
			code to be executed 2
			break;
		default:
			code to be executed if expression/variable doesn't match any constants
			break;
	*/
	//program to perform different arithemetic operations
	
	char ope;
    	cout<<"Enter an operator (+, -, *, /): ";
    	cin>>ope;
    	cout<<"Enter two numbers: "<< endl;
    	cin>>a>>b;

    	switch (ope) {
        	case '+':
            		cout<<a<<" + "<<b<<" = "<<a+b;
            		break;
        	case '-':
            		cout<<a<<" - "<<b<<" = "<<a-b;
            		break;
        	case '*':
            		cout<<a<<" * "<<b<<" = "<<a*b;
            		break;
        	case '/':
            		cout<<a<<" / "<<b<<" = "<<(float)a/(float)b;
            		break;
        	default:
            		// When user enters wrong option
            		cout<<"Error! The operator is not correct";
           	 	break;
    	}
	cout<<endl;
	return 0;
}
