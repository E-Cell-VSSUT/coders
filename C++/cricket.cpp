#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
	int totalrun = 0;
	srand(time(0));
	int i;

	i = (rand() % 25) + 1;
	cout << "~~~~~~~~ CRICKET GAME ~~~"
		<< "~~~~~~~" << endl;


	cout << "Your winning score "
		<< i << "\n";

	while (1) {
		int player = 0;
		int a;

		if (totalrun > i) {
			cout << "you won your score="
				<< totalrun << "\n";

			exit(0);
		}
		else {

			a = (rand() % 6) + 1;
			cout << "Enter no. between "
				<< "1 to 6" << endl;
			cin >> player;
			cout << "System: " << a << endl;
			if (player == a) {
				cout << "OUT your score ="
					<< totalrun
					<< endl;

				exit(0);
			}

			else {
				totalrun = totalrun + player;
			}
		}
	}

	return 0;
}

