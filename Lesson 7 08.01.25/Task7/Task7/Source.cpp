#include <iostream>
#include <string>
#include <exception>

class bad_length : 
    public std::exception {
public:
    const char* what() const noexcept override {
        return "�� ����� ������ ��������� �����!";
    }
};
int function(const std::string& str, int forbidden_length)
{
if (str.length() == forbidden_length)
{
    throw bad_length();
}
return str.length();
}
int main() {
    setlocale(LC_ALL, "rus");
    int forbidden_length;
    std::cout << "������� ��������� �����: ";
    std::cin >> forbidden_length;
    std::cin.ignore();

    while (true) {
        std::string word;
        std::cout << "������� �����: ";
        std::getline(std::cin, word);

        try {
            int length = function(word, forbidden_length);
            std::cout << "����� ����� \"" << word << "\" ����� " << length << std::endl;
        }
        catch (const bad_length& e) {
            std::cout << e.what() << std::endl;
            std::cout << "�� ��������" << std::endl;
            break;
        }
    }
    return 0;
}