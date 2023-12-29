#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int k = 1, l =1 ;

class hospital {

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

	void payment_check(){
		char ch;
		cout << "Has the payment been made? (Y/N)";
		cin >> ch;
		if (ch == 'Y') {
			cout << "Transaction Complete";
		}
		else {
			cout << "Transaction Incomplete";
		}
	}
};

class donor {

public:
	int fitness;
	char name[10];
	char contact[10];
	int DNR;
	char r;
	char t;

	void d_register() {

		char str[2];
		cout << "Enter Name: ";
		cin >> name;
		cout << "Enter Contact number: ";
		cin >> contact;
		cout << "\n Enter fitnes state( 1-fit, 0-unfit): ";
		cin >> fitness;
		while (1) {
			cout << "\nEnter type: ";
			cin >> str;
			if (strcmp(str, "AB") == 0 || strcmp(str, "ab") == 0) {
				t = 'x';
				break;
			}
			else if (strcmp(str, "A") == 0 || strcmp(str, "B") == 0 || strcmp(str, "O") == 0 || strcmp(str, "a") == 0 || strcmp(str, "b") == 0 || strcmp(str, "o") == 0) {
				t = str[0];
				break;
			}
			else {
				cout << "\nInvalid Type:";
			}
		}
		while (1) {
			cout << "Enter Rhesius(+/-):";
			cin >> r;
			if (r == '+' || r == '-') {
				break;
			}
			else {
				cout << "\nInvalid rheius(+/-)";
			}
		}
		DNR = 1;
		cout << "your DNR is: " << DNR;
	}

	void d_updation()
	{
		int choice;
		cout << "\nEnter choice:\n1.Update fitness state\n2. Update contact number";
		cin >> choice;
		switch (choice) {

		case 1: cout << "\nEnter new fitness state";
			cin >> fitness;
			break;
		case 2: cout << "|\nEnter contact Number: ";
			cin >> contact;
			break;
		default: cout << "\nInvalid inout: ";
		}
	}
};

class bloodpacket {
public:
	char t_1;
	char r_1;
	int expiry;
};

class bloodbank {
public:
	int z = 0, x = 0, c = 0, v = 0, w = 0, n = 0, m = 0, q = 0;
	int username;
	int password;
	class donor d[5];
	class hospital h[5];
	class bloodpack b[24];
	bloodbank(int a, int b) {
		username = a;
		password = b;
	}

	int authenticate() {
		int y, z;
		cout << "Enter username";
		cin >> y;
		cout << "Enter password";
		cin >> z;
		int x;
		if (y == username && z == password) {
			x = 2;
			return x;
		}
		else {
			return 0;
		}
		
		void b_register() {
			d[1].d_register();
			l = l + 1;
		}

		void update() {
			int r;
			cout << "Enter DNR: ";
			cin >> r;
			if (r >= 1) {
				cout << "DNR dosent exist";
				return;
			}
			else {
				d[r].d_updation();
			}
		}

		void h_registration() {

			h[k].h_register();
			k = k + 1;
		}

		void accept() {
			int hid, flag = 0, i;
			char req_t, req_r;
			cout << "Enter HPID: ";
			cin >> hid;
			if (hid >= k) {
				cout << "Enter a valid HPID\n";
				return;
			}
			cout << "Enter required blood type: ";
			cin >> req_t;
			cout << "Enter required rhesius type (+/-): ";
			cin >> req_r;
			switch (req_t) {
				case'A':if (req_r == '+') {
							for ( i = 0; i < 3; i++)
							{
								if (b[i].expiry > 2017) {
									flag = 300;
									b[i].t_1 = '0';
									b[i].r_1 = '0';
									b[i].expiry = 0;
									break;
								}
							}
						}
			}
		}
	}
};

int main() {

}
