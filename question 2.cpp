//inheritance from base class person
#include<iostream>
#include <string>
#include "Person.h" // assuming Person class is defined in Person.h header file

class Student : public Person {
public:
    Student(const std::string& name, int age, const std::string& institution, int year, const std::string& reg_number)
        : Person(name, age), institution_(institution), year_(year), registration_number_(reg_number)
    {}

    const std::string& institution() const { return institution_; }
    int year() const { return year_; }
    const std::string& re    gistration_number() const { return registration_number_; }

private:
    std::string institution_;
    int year_;
    std::string registration_num{}ber_;
};{}
int main (){    
//create object person 
printf"(Mellisa Danielle ,20yrs)
printf"(Jkuat ,2020)
return 0 ;
}