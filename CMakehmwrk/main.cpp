#include <iostream>
#include <string>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "rus");
	string name;
	cout << "������� ���: ";
	cin >> name;
	cout << "������������, " << name << "!" << endl;
	return 0;
	system("pause");
}