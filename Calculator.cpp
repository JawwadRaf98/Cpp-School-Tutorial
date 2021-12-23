#include <iostream>
using namespace std;
int main(){
	
	int a, b;
	
	cout<<"\n\t Calculator";
	cout<<"\n\t ----------";
	
//	read input value
	cout<<"\n Enter 1st number: ";
	cin>>a;
	cout<<"\n Enter 2nd number: ";
	cin>>b;
	
//	output

	cout<<"\n Addition of "<<a<<" & "<<b<<" is " <<(a+b);
	cout<<"\n Subtraction of "<<a<<" & "<<b<<" is " <<(a-b);
	cout<<"\n Multiplication of "<<a<<" & "<<b<<" is " <<(a*b);
	cout<<"\n Division of "<<a<<" & "<<b<<" is " <<(a/b);
	cout<<"\n Modulus of "<<a<<" & "<<b<<" is " <<(a%b);
	
	return 0;
}
