#include <iostream>
#include <fstream>
using namespade std;

#define DEBUG false

int add_numbers(int &x, int y){
	return x+=y;
}

int main(){
	
	int num1 = 5;
	int num2 = 300;
	int *ptr = &num2;
	int *ptr = &num2;
	
	cout << "value of num2 is " << num2 << endl;
	cout <<"Value of ptr is " << ptr << endl;
	num2 = 9999;
	cout << "value of num2 is " << num2 << endl;
	cout <<"Value of ptr is " << ptr << endl;
	*ptr = &num1;
	cout << "value of num2 is " << num2 << endl;
	cout <<"Value of ptr is " << ptr << endl;
	num2 = 555;
	cout << "value of num2 is " << num2 << endl;
	cout <<"Value of ptr is " << *ptr << endl;
	cou t<<"Value of ptr is " << ptr << endl;
	//add_numbers(num1,1);
	//cout << "Adding 5 to 300: " << num1 << endl;
	//add_numbers(num1,num2)
	//cout << "Adding 5 to 300: " << num1 << endl;
	//add_numbers(num1,num2)
	//cout << "Adding 5 to 300: " << num1 << endl;
	
	return 0;
}


//bool TRUE = true;
	//if(DEBUG){ cout << "Value of TRUE: " << TRUE << endl; }
	
	
	//cout << "this is something to the screen." << endl;
	//if(TRUE){
	//	cout << "....and more to the screen." << endl;
	//} else {
	//	cout << "...else less to screen." << endl;
	//}