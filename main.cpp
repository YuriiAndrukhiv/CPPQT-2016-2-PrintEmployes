#include <iostream>
#include <vector>
#include "Employee.h"
#include "Office.h"
#include "printable.h"

/*
 * Функція print друкує інформацію про кожен об'єкт у списку. Ідея полягає у тому, що функція
 * працює з нащадками класу Printable, який є базовим класом для всіх об'єктів, які можуть
 * роздрукувати інформацію про себе у консоль. Завдяки цьому ми можемо використовувати одну
 * і ту ж функцію для виводу інформації про об'єкти різних класів (головне щоб вони успадковували
 * від класу Printable). Тобто нам не потрібно змінювати функцію, чи писати її заново,
 * чи писати заново схожий код для виводу інших об'єктів - ми можемо використати функцію повторно.
 *
 * Для того, щоб функція print могла вивести інформацію про ваш клас необхідно успадкувати його
 * від класу Printable та перевизначити метод print().
 *
 * Параметер listToPrint - Список об'єктів про які необхідно вивести інформацію у консоль.
 */
void printList(const std::vector<Printable *> listToPrint)
{
    for (auto item: listToPrint)
    {
        item->print();
        std::cout << std::endl;
    }
}

int main()
{

    std::vector<Printable *> employeesToPrint;

    Printable *employee1 = new Employee("Semen", "+380634562321", "Brodivska 1", 8000, 2000);
    Printable *employee2 = new Employee("Oleksa", "+380988563796", "Tuha voda 7", 8500, 1998);
    Printable *employee3 = new Employee("Misko", "+380638887318", "Sheroka 66", 9000, 1995);
    employeesToPrint.push_back(employee1);
    employeesToPrint.push_back(employee2);
    employeesToPrint.push_back(employee3);


    printList(employeesToPrint);

    std::cout << std::endl; // ------------

    std::vector<Printable *> officesToPrint;

    Printable *office1 = new Office("Head office", "Plosha rinok 1", 320, 100);
    Printable *office2 = new Office("Branch1", "Mazepi 3", 165, 50);
    Printable *office3 = new Office("Branch2", "Virmenska 7", 100, 30);
    officesToPrint.push_back(office1);
    officesToPrint.push_back(office2);
    officesToPrint.push_back(office3);

    printList(officesToPrint);

    delete office3;
    delete office2;
    delete office1;

    delete employee3;
    delete employee2;
    delete employee1;

    return 0;
}
