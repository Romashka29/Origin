#include <iostream>
#include <vector>
#include <string>
#include <fstream>

class Address
{
private:
    std::string cityName;
    std::string streetName;
    int houseNumber;
    int flatNumber;
public:
    Address(const std::string& cityName, const std::string& streetName, int houseNumber, int flatNumber)
        : cityName(cityName), streetName(streetName), houseNumber(houseNumber), flatNumber(flatNumber) {}

    std::string get_output_address() const {
        return cityName + ", " + streetName + ", " + std::to_string(houseNumber) + ", " + std::to_string(flatNumber);
    }
};

int main()
{
    std::ifstream infile("in.txt");
    if (!infile.is_open()) {
        std::cout << "Unable to open in.txt" << std::endl;
        return 1;
    }

    int n;
    infile >> n;

    std::vector<Address> addresses;
    for (int i = 0; i < n; ++i)
    {
        std::string cityName, streetName;
        int houseNumber, flatNumber;
        infile >> cityName >> streetName >> houseNumber >> flatNumber;
        addresses.emplace_back(cityName, streetName, houseNumber, flatNumber);
    }

    infile.close();

    std::ofstream outfile("out.txt");
    if (!outfile.is_open()) {
        std::cout << "Unable to open out.txt" << std::endl;
        return 1;
    }

    outfile << n << "\n";
    for (int i = n - 1; i >= 0; --i) {
        outfile << addresses[i].get_output_address() << "\n";
    }

    outfile.close();
    return 0;
}