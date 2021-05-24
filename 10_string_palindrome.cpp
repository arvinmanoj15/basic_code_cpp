#include<iostream>
using namespace std;

int main( )
{
	char str[50];
	int l,flag=0; //Hold length of string
	cout<<"Enter string: ";
	cin.getline(str, 50);
	//finding length of string
	for(l = 0; str[l] != '\0'; l++);	
	//Comparing first element with last element till l/2
    	int i;
    	for(i = 0; i<l/2; i++)
    	{
    		if(str[i] != str[l - i - 1])
    		{
    			flag=1;
    			break;
    		}
    	}
	if(flag==0)
        	cout << "Palindrome";
    	else
        	cout << "Not a palindrome";
	return 0;
}
