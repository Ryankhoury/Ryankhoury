#include<iostream>
using namespace std;

void main() {
	cout << "*******************************************************************"<<endl;
	cout << "******************* Welcome to my first program *******************"<<endl;
	cout << "Convert a large number of seconds into hours, minutes, and seconds."<<endl;
	cout << "*******************************************************************"<<endl;

	int number,hours , minutes , seconds; // three variables declared 
	cout << "Please enter a large number of seconds:";
	cin >> number; // take a number from user and save it in the number variable
	hours = number / 3600;  //every 1 hour gives 3600 seconds which is 60*60 (60 minutes) so divide seconds by 3600 to get number of hours
	number -= (hours * 3600); // subtract the number of hours from the number to get the number without hours
	cout <<"the number of hours in the number is: "<< hours <<endl;
	minutes = number / 60; // every 1 minute give 60 seconds so from seconds to minute divide by 60
	cout << "the number of minutes in the number is: " << minutes <<endl;
	seconds = number-(minutes*60);// subtract the number of minutes from the number to get the number without minutes to know seconds
	cout << "the number of seconds in the number is: " << seconds <<endl;

}