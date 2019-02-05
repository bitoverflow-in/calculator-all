#include <iostream>
#include <conio.h>
using namespace std;

class Calculator
{
public:
    void Font()
	{
  cout <<"\t\t\t    .d8888b.           888                   888          888                        "<<endl;
  cout <<"\t\t\t   d88P  Y88b          888                   888          888                        "<<endl;
  cout <<"\t\t\t   888    888          888                   888          888                        "<<endl;
  cout <<"\t\t\t   888         8888b.  888  .d8888b 888  888 888  8888b.  888888 .d88b.  888d888     "<<endl;
  cout <<"\t\t\t   888             88b 888 d88P     888  888 888      88b 888   d88..88b 888P        "<<endl;
  cout <<"\t\t\t   888    888 .d888888 888 888      888  888 888 .d888888 888   888  888 888         "<<endl;
  cout <<"\t\t\t   Y88b  d88P 888  888 888 Y88b.    Y88b 888 888 888  888 888.  d88..88P 888         "<<endl;
  cout <<"\t\t\t    Y88888Y    Y888888 888  Y8888P   Y88888  888  Y888888  88888  Y88P   888         "<<endl;
	
	cout <<endl<<endl<<endl<<endl;	
	
    }               
    float Addition(float x, float y)
	{
        float ans = x + y;
        return ans;
    }       
    float Subtraction(float x, float y)
	{
        float ans = x - y;
        return ans;
    }       
    float Multiplication(float x, float y)
	{
        float ans = x * y;
        return ans;
    }       
    float Division(float x, float y)
	{
        float ans = x / y;
        return ans;
    }
};

int main()
{
int choice;
float x, y;

Calculator Calc; 
Calc.Font(); 

cout << "Which operation do you want to perform? " << endl;
cout << "\t 1 - Addition " << endl;
cout << "\t 2 - Subtraction " << endl;
cout << "\t 3 - Multiplication " << endl;
cout << "\t 4 - Division " << endl<<endl;
cout << "Choose a number accordingly :  " << endl;

cin >> choice;
cout << endl<<endl;

switch(choice)
{

    case 1: //Addition
    
        cout << "****ADDITION****" << endl << endl;
        cout << "Please enter the first number: " << endl;
        cin >> x;
        cout << "Please enter the second number: " << endl;
        cin >> y;
        cout << endl << x << " + " << y << " = "; 
        cout << Calc.Addition(x, y);
        break; 
		         
    case 2: //Subtraction
    
        cout << "****SUBTRACTION****" << endl << endl;  
        cout << "Please enter first number: " << endl;
        cin >> x;
        cout << "Please enter second number: " << endl;
        cin >> y;
        cout << endl << x << " - " << y << " = ";
        cout << Calc.Subtraction(x, y);
        break; 
		             
    case 3: //Multiplication
    
        cout << "****MULTIPLICATION****" << endl << endl;   
        cout << "Please enter first number: " << endl;
        cin >> x;
        cout << "Please enter second number: " << endl;
        cin >> y;
        cout << endl << x << " x " << y << " = ";
        cout << Calc.Multiplication(x, y);
        break;
		      
    case 4: //Division
    
        cout << "****DIVISION****" << endl; 
        cout << "Please enter first number: " << endl;
        cin >> x;
        cout << "Please enter second number: " << endl;
        cin >> y;
        
        if(y==0)
        cout << endl <<"\a Cannot divide a number by zero!" << endl;
		else
		   {        
        cout << endl << x << " / " << y << " = ";
        cout << Calc.Division(x, y);
        }
        break;
        
    default:
    	
        cout << "\a Invalid Choice!";
        break;
}
 getch();
}
