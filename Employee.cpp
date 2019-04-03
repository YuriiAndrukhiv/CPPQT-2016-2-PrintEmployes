#include "Employee.h"
#include <iostream>

Employee::Employee(std::string n, std::string p, std::string h, int s, int st)
{
    name = n;
    phoneNumber = p;
    homeAddress = h;
    salary = s;
    startYear = st;
}

Employee::~Employee()
{

}

void Employee::print() const
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Phone number: " << phoneNumber << std::endl;
    std::cout << "Home address: " << homeAddress << std::endl;
    std::cout << "Salary: $" << salary << std::endl;
    std::cout << "Start year: " << startYear << std::endl;
}

std::string Employee::getName() const
{
    return name;
}

void Employee::setName(std::string n)
{
    name = n;
}

std::string Employee::getPhoneNumber() const
{
    return phoneNumber;
}

void Employee::setPhoneNumber(std::string p)
{
    phoneNumber = p;
}

std::string Employee::getHomeAddres() const
{
    return homeAddress;
}

void Employee::setHomeAddres(std::string h)
{
    homeAddress = h;
}

int Employee::getSalary() const
{
    return salary;
}

void Employee::setSalary(int s)
{
    salary = s;
}

int Employee::getStartYear() const
{
    return startYear;
}

void Employee::setStartYear(int st)
{
    startYear = st;
}
