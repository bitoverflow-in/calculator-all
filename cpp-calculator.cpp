#include<iostream>

using namespace std;

int main(){
	int c;
	float res, num1, num2;
	cout << "Enter\n1 for Addition\n2 for Subtraction\n3 for Multiplication\n4 for Division\n";
	cin >> c;
	
	cout << "Enter the first and second number:\n";
	cin >> num1 >> num2;
	
	switch(c){
		case 1:
			res = num1 + num2;
			cout << res;
			break;
		
		case 2:
			res = num1 - num2;
			cout << res;
			break;
		
		case 3:
			res = num1 * num2;
			cout << res;
			break;
		
		case 4:
			if(num2==0){
				cout << "Zero Division error: denominator shouldn't be zero";
			}
			else{
				res = num1 / num2;
				cout << res;
			}
			break;
		
		default:
			cout << "Input error";
			break;
	}
}
