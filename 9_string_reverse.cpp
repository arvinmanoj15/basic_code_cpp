#include<iostream>
using namespace std;

int main( )
{
	char str[50],temp;
	int l;
	cout<<"Enter string: ";
	cin.getline(str, 50); //or cin>>str but data after " " will be lost
	//to find length of the string
	for(l = 0; str[l] != '\0'; l++);
	//swapping upto l/2
	for(int i=0, j=l-1; i<l/2; i++, j--)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;	
	}
	cout<<"Reverse string: "<<str<<endl;
	return 0;
}

