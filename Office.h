#ifndef OFFICE_H
#define OFFICE_H
#include <string>
#include "printable.h"

class Office: public Printable
{
public:
    Office(std::string on, std::string an, int wa, int ne);
    virtual ~Office();
    virtual void print() const;

    std::string getOfficeName() const;
    void setOfficeName(std::string on);

    std::string getAddressName() const;
    void setAddressName(std::string an);

    int getWorkingArea() const;
    void setWorkingArea(int wa);

    int getNumberOfEmployees() const;
    void setNumberOfEmployees(int ne);

private:
    std::string officeName;
    std::string addressName;
    int workingArea;
    int numberOfEmployees;
};

#endif // OFFICE_H
