#include <iostream>


auto main(int argc, char *argv[]) -> int
 {
if(argc != 2) {
        std::cout << "zla liczba argumentow.\n";
        return 0;
    }
        auto sprawdzacz = std::string{};
        auto haslo = std::string{argv[1]};
    

do {
        std::cout << "haslo: ";
        std::getline(std::cin, sprawdzacz);
    
    } 
while (sprawdzacz != haslo);

    std::cout << "ok!\n";

    return 0;
}