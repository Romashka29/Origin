#include <iostream>
#include <string>
using namespace std;

struct Address 
{
	string CityName;
	string StreetName;
	int HouseNumber;
	int FlatNumber;
	int Index;
};
void printAddress(const Address& address) {
	cout << "�����: " << address.CityName << '\n';
	cout << "�����: " << address.StreetName << '\n';
	cout << "���: " << address.HouseNumber << '\n';
	cout << "��������: " << address.FlatNumber << '\n';
	cout << "������: " << address.Index << endl;
}
int main()
{
	setlocale(LC_ALL, "Rus");
	Address moscowAddress =
	{
	.CityName = "������",
	.StreetName = "�����",
	.HouseNumber = 12,
	.FlatNumber = 8,
	.Index = 123456
	};

	Address izhevskAddress =
	{
	.CityName = "������",
	.StreetName = "�������",
	.HouseNumber = 59,
	.FlatNumber = 143,
	.Index = 953769
	};
	printAddress(moscowAddress);
	cout << '\n' << endl;
	printAddress(izhevskAddress);
	return EXIT_SUCCESS;
}