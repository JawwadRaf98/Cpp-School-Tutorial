#include <iostream>
using namespace std;
int main(){
	
	cout<<"\nProgramme for calculation the Speed ";
	cout<<"\n-------------------------------------\n";
	
	float distance, time;
	
//	reading input
	cout<<"\nEnter the value of distance in (km) : ";
	cin>>distance;
	cout<<"\nEnter the value of time in (sec) : ";
	cin>>time;

// formula
	float speed = (distance/time);
	
	cout<<"\nSpeed =====> "<<speed<<" m/s \n";
	
	
	return 0;
}
