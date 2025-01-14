#include <iostream>
#include <string>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "rus");
	string name;
	cout << "Введите имя: ";
	cin >> name;
	cout << "Здравствуйте, " << name << "!" << endl;
	return 0;
	system("pause");
}