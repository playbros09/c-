#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(1251);
    std::cout << "Данило Рєзніков\n";
    std::cout << "Харків, Україна\nEmail : reznikovdanay123@gmail.com\nТелефон : +380667613538\n\n";
    std::cout << "Особисті дані:\n";
    std::cout << "\t•Дата народження: 20 травня 2008 р.\n\t•Стать : Чоловіча\n\t•Громадянство : Україна\n";
    std::cout << "Навички:\n";
    std::cout << "\t•Основи програмування(Java, Python)\n\t•Дизайнерські програми(Photoshop, Adobe illustrator, Blender)\n\t•Робота з комп’ютерними технологіями\n\t•Навички командної роботи\n";
    std::cout << "Курси та сертифікати:\n";
    std::cout << "\t•Мала комп’ютерна академія (жовтень 2020 – червень 2023)\n\t\t•Сертифікат КМАА - 026313\n";
    std::cout << "\t•Hillel IT School\n\t\t•Основи Java для школярів (червень 2023)\n\t\t•Java для школярів (рівень 2) (жовтень 2023)";
    system("color 2");
}
