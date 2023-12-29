#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int k = 1;

class Hospital {

	public:
	int HPID;
	char contactno[10];
	char rhesius;
	char type;

	void h_register() {
		HPID = k;

		cout << "\nEnter contact number; ";
		cin >> contactno;
		cout << "Your HPID is: " << HPID << endl;
	}
};