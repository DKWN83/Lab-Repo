#include <iostream>
#include <string>

//Daudi Williams

using namespace std;

int main() {

	int child, adult, senior, vip, childTotal = 0, adultTotal = 0, seniorTotal = 0, vipTotal = 0, days = 1;
	double childPriceTotal = 10.95, adultPriceTotal = 19.99, seniorPriceTotal = 18.99, vipPriceTotal = 7.99, totalDays = 0.00;	
	char type = 't'; 

	while (days < 4) {

		cout << "Starting Day " << days << endl;

		while (type != 'Q' && type != 'q') {

			cout << "Please choose ticket type:\n C: Children\n A: Adults\n S: Seniors\n V: Vips\n Q: Quit\n";
			cin >> type;

			switch (type) {

			case 'c':
			case 'C':
				cout << "Please enter amount of child tickets: " << endl;
				cin >> child;
				childTotal += child;
				break;

			case 'a':
			case 'A':
				cout << "Please enter amount of adult tickets: " << endl;
				cin >> adult;
				adultTotal += adult;
				break;

			case 's':
			case 'S':
				cout << "Please enter amount of senior tickets: " << endl;
				cin >> senior;
				seniorTotal += senior;
				break;

			case 'v':
			case 'V':
				cout << "Please enter amount of VIP tickets: " << endl;
				cin >> vip;
				vipTotal += vip;
				break;


			}

			if (type != 'v' && type != 'V' && type != 's' && type != 'S' && type != 'a' && type != 'A' && type != 'c'&& type != 'C') {
				cout << "Please choose one of the options below\n\n";
			}
		}

		cout << "Day " << days << endl << endl; 
		cout << "\tChild " << childTotal << " @ $" << childPriceTotal << " = " << childPriceTotal * childTotal << endl;
		cout << "\tAdult " << adultTotal << " @ $" << adultPriceTotal << " = " << adultPriceTotal * adultTotal << endl;
		cout << "\tSenior " << seniorTotal << " @ $" << seniorPriceTotal << " = " << seniorPriceTotal * seniorTotal << endl;
		cout << "\tVIP " << vipTotal << " @ $" << vipPriceTotal << " = " << vipPriceTotal * vipTotal << endl << endl;
		cout << "\tTotal = " << (vipPriceTotal * vipTotal) + (seniorPriceTotal * seniorTotal) + (adultPriceTotal * adultTotal) + (childPriceTotal * childTotal) << endl << endl;

		totalDays += (vipPriceTotal * vipTotal) + (seniorPriceTotal * seniorTotal) + (adultPriceTotal * adultTotal) + (childPriceTotal * childTotal);
		childTotal = 0;
		adultTotal = 0;
		seniorTotal = 0;
		vipTotal = 0;
		type = 't';
		days += 1;
	}
	cout << "The total for all days is $" << totalDays << endl << endl;
	system("PAUSE");
	return 0;
}

