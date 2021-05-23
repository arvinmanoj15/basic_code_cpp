#include <iostream>
using namespace std;

int main()
{
	int a=10,b=15,c;
	cout<<"a= "<<a<<" b= "<<b<<endl;
	
	//Arithmetic operators
	c = a+b;
	cout<<"a+b= "<<c<<endl;
	c = a-b;
	cout<<"a-b= "<<c<<endl;
	c = a*b;
	cout<<"axb= "<<c<<endl;
	c = b/a;
	cout<<"b/a= "<<c<<endl;
	float d; //since we are missing decimal part in the answer
	d =b/(float)a;
	cout<<"b/a= "<<d<<endl;
	c = b%a;
	cout<<"b%a= "<<c<<endl;
	a--;
	cout<<"a--= "<<a<<endl;
	a++;
	cout<<"a++= "<<a<<endl;
	
	//Relational Operators
	//Logical Operators
	
	//Bitwise Operators
	/* 
	A = 60 = 0011 1100
	B = 13 = 0000 1101
	
	A&B = 0000 1100 = 12
	A|B = 0011 1101 = 61
	A^B = 0011 0001 = 49
	~A  = 1100 0011 = -61(in 2's complement form)
	A<<2= 1111 0000 = 240
	A>>2= 0000 1111 = 15
	*/
	
	//Assignment Operators
	// = += -= *= /= %= <<= >>= &= ^= |=
	
	a+=b; //a = a+b
	cout<<"a+=b = "<<a<<endl;
	
	//misc operators
	// sizeof, condition?X:Y, .(class),->(class), &(pointer), *(pointer)
	return 0;
}
