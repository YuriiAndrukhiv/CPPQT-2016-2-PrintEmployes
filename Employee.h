#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
#include "printable.h"

class Employee: public Printable
{
public:
    Employee(std::string n, std::string p, std::string h, int s, int st);
    virtual ~Employee();
    virtual void print() const;

    std::string getName() const;
    void setName(std::string n);

    std::string getPhoneNumber() const;
    void setPhoneNumber(std::string p);

    std::string getHomeAddres() const;
    void setHomeAddres(std::string h);

    int getSalary() const;
    void setSalary(int s);

    int getStartYear() const;
    void setStartYear(int st);

private:
    std::string name;
    std::string phoneNumber;
    std::string homeAddress;
    int salary;
    int startYear;
};

#endif // EMPLOYEE_H
