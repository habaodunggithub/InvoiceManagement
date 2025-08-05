#pragma once

#include <iostream>
#include <string>

class Customer {
private:
    std::string name;
    std::string phoneNumber;
    std::string address;
public:
    Customer();
    Customer(const std::string&, const std::string&, const std::string&);
    ~Customer();

    std::string getName();
    std::string getPhoneNumber();
    std::string getAddress();
    void enterInfo();
    void info();
};