// WAP to find the most repeated letter in a string
#include <iostream>
using namespace std;

int main()
{
	char str[50],t;
	int l,j=0,A[26]={0}; //initializing all elements in Array A to zero
	cout<<"Enter the string: ";
	cin.getline(str,50);
	for(l=0;str[l]!='\0';l++);
	for(int i=0;i<l;i++)
	{
		if((str[i]>='A')&&(str[i]<='Z'))
			A[str[i]-65]++; //ASCII value of A = 65
		else if((str[i]>='a')&&(str[i]<='z'))
			A[str[i]-97]++; //ASCII value of a = 97
	}
	cout<<"Most repeated letter/letters: ";
	for(int i=0;i<26;i++)
	{
		if(A[i]>j)
			j = A[i];
	}
	for(int i=0;i<26;i++)
	{
		if(A[i]==j)
		{
			t=65+i;
			cout<<t<<" ";
		}
	}
	cout<<endl;
	/*LOOP TO VERIFY THE COUNT
	for(int i=0;i<26;i++)
	{
		cout<<A[i]<<" ";
	}
	cout<<endl;*/
	return 0;
}
