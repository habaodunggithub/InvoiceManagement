#pragma once

#include <iostream>
#include <string>

class Customer {
public:
    Customer();
    Customer(const std::string&, const std::string&, const std::string&);
    ~Customer();

    const std::string& getName() const;
    void setName(const std::string&);
    const std::string& getPhoneNumber() const;
    void setPhoneNumber(const std::string&);
    const std::string& getAddress() const;
    void setAddress(const std::string&);
    void enterInfo();
    void info() const;
private:
    std::string name;
    std::string phoneNumber;
    std::string address;
};