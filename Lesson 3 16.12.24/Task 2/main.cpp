#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>

class Address {
private:
    std::string cityName;
    std::string streetName;
    int houseNumber;
    int flatNumber;

public:
    Address(std::string cityName, std::string streetName, int houseNumber, int flatNumber)
        : cityName(cityName), streetName(streetName), houseNumber(houseNumber), flatNumber(flatNumber) {}

    std::string getCityName() const { return cityName; }
    std::string getStreetName() const { return streetName; }
    int getHouseNumber() const { return houseNumber; }
    int getFlatNumber() const { return flatNumber; }


    std::string getOutputFormat() const {
        return cityName + ", " + streetName + ", " + std::to_string(houseNumber) + ", " + std::to_string(flatNumber);
    }

    bool operator<(const Address& other) const {
        return cityName < other.cityName;
    }
};

void readAddressesFromFile(std::vector<Address>& addresses, std::string filename) {
    std::ifstream infile(filename);
    if (!infile.is_open()) {
        std::cerr << "Could not open input file: " << filename << std::endl;
        exit(EXIT_FAILURE);
    }

    int numOfAddresses;
    infile >> numOfAddresses;

    for (int i = 0; i < numOfAddresses; ++i) {
        std::string cityName, streetName;
        int houseNumber, flatNumber;

        infile >> cityName >> streetName >> houseNumber >> flatNumber;
        addresses.emplace_back(cityName, streetName, houseNumber, flatNumber);
    }

    infile.close();
}

void writeAddressesToFile(const std::vector<Address>& addresses, std::string filename) {
    std::ofstream outfile(filename);
    if (!outfile.is_open()) {
        std::cerr << "Could not open output file: " << filename << std::endl;
        exit(EXIT_FAILURE);
    }

    outfile << addresses.size() << std::endl;
    for (const auto& address : addresses) {
        outfile << address.getOutputFormat() << std::endl;
    }

    outfile.close();
}

int main() {
    std::vector<Address> addresses;

    readAddressesFromFile(addresses, "in.txt");

    std::sort(addresses.begin(), addresses.end());

    writeAddressesToFile(addresses, "out.txt");

    return 0;
}