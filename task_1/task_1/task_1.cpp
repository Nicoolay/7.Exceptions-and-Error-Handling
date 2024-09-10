#include <iostream>
#include <string>
#include <windows.h>

class Forbidden_length_error : public std::exception
{
public:
    const char* what() const override { return "Вы ввели слово запретной длины! До свидания"; }
};

int function(std::string str, int forbidden_length) {
    if (str.length()>forbidden_length)
    {
        throw Forbidden_length_error();
    }
    
        return 1;
   
}

int main(int argc, char* argv[])
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    std::string str; 
    int forbidden_length{};
   while (true)
    try {
       
        std::cout << "Введите запретную длину: ";
        std::cin >> forbidden_length;
        std::cout << "Введите слово: ";
        std::cin >> str;
        function(str,forbidden_length);       
        std::cout << "Длина слова " << str << " равна " << forbidden_length<< std::endl;
    }
    catch (const Forbidden_length_error& ex) { 
        std::cout << ex.what() << std::endl; 
        break;
    }
}