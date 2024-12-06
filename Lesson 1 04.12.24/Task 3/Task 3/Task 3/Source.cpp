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
	cout << "Город: " << address.CityName << '\n';
	cout << "Улица: " << address.StreetName << '\n';
	cout << "Дом: " << address.HouseNumber << '\n';
	cout << "Квартира: " << address.FlatNumber << '\n';
	cout << "Индекс: " << address.Index << endl;
}
int main()
{
	setlocale(LC_ALL, "Rus");
	Address moscowAddress =
	{
	.CityName = "Москва",
	.StreetName = "Арбат",
	.HouseNumber = 12,
	.FlatNumber = 8,
	.Index = 123456
	};

	Address izhevskAddress =
	{
	.CityName = "Ижевск",
	.StreetName = "Пушкина",
	.HouseNumber = 59,
	.FlatNumber = 143,
	.Index = 953769
	};
	printAddress(moscowAddress);
	cout << '\n' << endl;
	printAddress(izhevskAddress);
	return EXIT_SUCCESS;
}