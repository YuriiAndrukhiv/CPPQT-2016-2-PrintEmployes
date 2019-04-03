#include "Office.h"
#include <iostream>

Office::Office(std::string on, std::string an, int wa, int ne)
{
    officeName = on;
    addressName = an;
    workingArea = wa;
    numberOfEmployees = ne;
}

Office::~Office()
{

}

void Office::print() const
{
    std::cout << "Office name: " << officeName << std::endl;
    std::cout << "Address name: " << addressName << std::endl;
    std::cout << "Working area: " << workingArea << " square metres" << std::endl;
    std::cout << "The number of employees working inside: " << numberOfEmployees << std::endl;
}

std::string Office::getOfficeName() const
{
    return officeName;
}

void Office::setOfficeName(std::string on)
{
    officeName = on;
}

std::string Office::getAddressName() const
{
    return addressName;
}

void Office::setAddressName(std::string an)
{
    addressName = an;
}

int Office::getWorkingArea() const
{
    return workingArea;
}

void Office::setWorkingArea(int wa)
{
    workingArea = wa;
}

int Office::getNumberOfEmployees() const
{
    return numberOfEmployees;
}

void Office::setNumberOfEmployees(int ne)
{
    numberOfEmployees = ne;
}
