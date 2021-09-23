// program finfing volume ...


#include <iostream>
using namespace std ;
int main(){
//	declearing variable
	int length, height, width, volume;
	
//	reading values for number1 and number2

	cout<<"Please enter the value of length :: ";
	cin>>length;
	cout<<"Please enter the value of height :: ";
	cin>>height;
	cout<<"Please enter the value of width :: ";
	cin>>width;	
	
//	applying formula
	volume = height * length * width;
	
//	display result
	cout<<volume;
	
//	terminate
	return 0;

}
