#include <iostream>
using namespace std;
int main(){
	
//	Logical Operation and/&& or || , not/!

	int age = 17;
	float height = 4.5;
	
//	if(age < 30 && height > 5){
//		cout<<"You are eligible for ARMY!";
//	}
//	else{
//		cout<<"You are not eligible for ARMY!";
//	}

//	if(age < 18 || height > 5){
//		cout<<"You are eligible for football team!";
//	}
//	else{
//		cout<<"You are not eligible for football team!";
//	}


	if( !(age>18) ){
		cout<<"You are not eligible for NIC!";
	}
	else{
		cout<<"You are eligible for NIC!";
	}
	return 0;
}
