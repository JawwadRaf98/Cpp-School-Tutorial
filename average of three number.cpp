// program for average of three number ...


#include <iostream>
using namespace std ;
int main(){
//	declearing variable
	int number1, number2, number3, result;
	
//	reading values for number1 and number2

	cout<<"Please enter 1st number :: ";
	cin>>number1;
	cout<<"Please enter 2nd number :: ";
	cin>>number2;
	cout<<"Please enter 3rd number :: ";
	cin>>number3;
	
	
//	applying formula
	result = (number1 + number2 + number3)/3;
	
//	display result
	cout<<result;
	
//	terminate
	return 0;

}
