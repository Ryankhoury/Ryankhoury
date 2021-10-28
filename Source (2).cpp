#include<iostream>
#include <cmath>
#include<string>
using namespace std;
double kg = 2.76 , cost_of_container = 4.12 , profit = 1.45;


void main() {
	cout << "************************"<<endl;
	cout << "******** Welcome to my Kilo's Program *******"<<endl;
	cout << "************************"<<endl;

	int nb_of_kilo_of_cheese_produced , nb_of_containers;
	cout << "Please enter the total number of kilograms of cheese produced: "<<endl;
	cin >> nb_of_kilo_of_cheese_produced;
	nb_of_containers = round((double)nb_of_kilo_of_cheese_produced/kg);
	cout << "The number of containrs to hold the cheese is:\t\t\t\t" << nb_of_containers << endl;
	string str = "The cost of producing "+to_string(nb_of_containers)+" container(s) of cheese is: $\t\t\t";

	cout << str<< (cost_of_container*nb_of_containers) << endl;
	string str2 = "The profit from producing " + to_string(nb_of_containers) + " container(s) of cheese is: $\t\t";
	cout << str2 << (profit*nb_of_containers) <<endl;
}