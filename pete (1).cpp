#include<iostream>
#include<string>
#include<time.h>
using namespace std;
void checknum(int,int);
int main()
{
	cout << "###Welcome to guessing number game#### \n";
	cout << "Secret the has deen chosen" << endl;
	srand(time(NULL));
	int n,g;
	int i = 0;
	n = rand() % 10 + 1;
	do {
		cout << "Guess the number(1 to 10):";
		cin >> g;
		if (g > 10) { break; }
		else if (g < 1) { break;}
	
		i++;
		checknum(n,g);
	} while (g != n);
	cout << "You made " << i << " guesses" << endl;
	cout << "The secret number is " << n << endl;
	return(0);
}
void checknum(int Rand, int Input)
{
		if (Input > Rand) {
			cout << "The secret number is higher" << endl;
		}
		else if (Input == Rand) {
			cout << "Congratulations!" << endl;	
			Rand == Input;
		}
		else if(Input < Rand) {
		cout << "The secret number is lower" << endl;
		}
	return(0);	
}