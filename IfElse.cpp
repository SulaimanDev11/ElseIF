#include<iostream>
using namespace std;
int main(){
	int num1,num2,num3,num4,num5;
	cout<<"Enter number 1: ";
	cin>>num1;
	cout<<"Enter number 2: ";
	cin>>num2;
	cout<<"Enter number 3: ";
	cin>>num3;
	cout<<"Enter number 4: ";
	cin>>num4;
	cout<<"Enter number 5: ";
	cin>>num5;
	if(num1>num2 && num1>num3 && num1>num4 && num1>num5){
		cout<<"Entered number 1 is greater than all";
	}
	else if(num2>num2 && num2>num3 && num2>num4 && num2>num5){
		cout<<"\nEntered number 2 is greater than all";
	}
	else if(num3>num2 && num3>num3 && num3>num4 && num3>num5){
		cout<<"\nEntered number 3 is greater than all";
	}
	else if(num4>num2 && num4>num3 && num4>num4 && num4>num5){
		cout<<"\nEntered number 4 is greater than all";
	}
	else{
		cout<<"\nEntered number 5 is greater than all";
	}
	
	return 0;
}
