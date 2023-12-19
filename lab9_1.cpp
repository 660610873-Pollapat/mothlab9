#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
#include<cmath>
using namespace std;

int main(){	 
	double rate,loan, I , total , payback , New;
	cout << "Enter initial loan: ";
	cin >> loan ;
	cout << "Enter interest rate per year (%): ";
	cin >> rate ;
	cout << "Enter amount you can pay per year: ";
	cin >> payback ;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	int year = 1;
	while (total > 0)
	{
		
    cout << fixed << setprecision(2);
	cout << setw(13) << left << year;
	cout << setw(13) << left << loan;
	I = loan*rate/100;
	cout << setw(13) << left << I;
	total = (loan + I);
	cout << setw(13) << left << total;
	if(payback > total){
		payback = total;
	}
	cout << setw(13) << left << payback;
	if(total > payback){
            New = total - payback;
			cout << setw(13) << left << New;
			loan = New;
		}else if(total <= payback){
			payback = loan + I ;
			New = abs(loan + I - payback);
			cout << setw(13) << left << New;
			break;
		}
	cout << "\n";	
	year++ ;
    }

	return 0;
}
