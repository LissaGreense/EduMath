#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main(){
	int firstNumber, secondNumber, tmpNumber, result;
	string answer;
	srand( time( NULL ) );
	while(1){
		cout << "Hej! Chcesz pocwiczyc odejmowanie?" << endl;
		cin >> answer;
		if ((answer == "Tak") || (answer == "tak") || (answer == "TAK")){
			while (1){
				cout << endl;
				cout << "To zaczynamy! ;D" << endl;
				for (int i = 0;  i < 10; i++){
					cout << i << "/" << 10 << endl;
					firstNumber = rand() % 100;
					secondNumber = rand() % 100 + 1;
					if (secondNumber > firstNumber){
						tmpNumber = firstNumber;
						firstNumber = secondNumber;
						secondNumber = tmpNumber;
					}
					cout << endl;
					cout << "Oblicz:" << endl;
					cout << firstNumber << " " << "-" << " " << secondNumber << " " << "=" << endl;
					while(1){
						cin >> result;
						cout << endl;
						if (firstNumber - secondNumber == result){
							cout << "Brawo!" << endl;
							break;
						}
						else{
							cout << "Sprobuj jeszcze raz :/" << endl;
						}
					}
				}
				cout << endl;
				cout << endl;
				cout << "Wymiekasz juz?" << endl;
				cin >> answer;
				if((answer == "Tak") || (answer == "tak") || (answer == "TAK")){
					cout << "Do zobaczenia!" << endl;
					break;
				}
			}
		}
	}

	return 0;
}