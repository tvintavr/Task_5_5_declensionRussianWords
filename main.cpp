#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    int price;
    std::cout << "Введите сумму: ";
    std::cin >> price;
    if ((price < 11 || price > 19) && price % 10 == 1) { // 1, 21, 31 рубль
        std::cout <<price<< " рубль";
    } else if ((price < 11 || price > 19) && price % 10 > 1 && price % 10 < 5) { // 2,3,4, 22, 23, 24, 54 рубля
        std::cout <<price<< " рубля";
    } else {
        std::cout <<price<< " рублей";
    }
}



