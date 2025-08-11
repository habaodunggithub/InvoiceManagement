#include "Customer.h"

Customer::Customer() {}

Customer::Customer(
        const std::string& name,
        const std::string& phoneNumber, 
        const std::string& address
    )
    : name(name)
    , phoneNumber(phoneNumber)
    , address(address) 
    {}

Customer::~Customer() {}

const std::string& Customer::getName() const {
    return name;
}

void Customer::setName(const std::string& name) {
    if (name.size() == 0) this->name = "null";
    else this->name = name;
}

const std::string& Customer::getPhoneNumber() const {
    return phoneNumber;
}

void Customer::setPhoneNumber(const std::string& phoneNumber) {
    if (phoneNumber.size() == 0) this->phoneNumber = "null";
    else this->phoneNumber = phoneNumber;
}

const std::string& Customer::getAddress() const {
    return address;
}

void Customer::setAddress(const std::string& address) {
    if (address.size() == 0) this->address = "null";
    else this->address = address;
}

void Customer::enterInfo() {
    std::string temp;
    std::cout << "Enter customer's name: ";
    std::getline(std::cin, temp);
    setName(temp);

    std::cout << "Enter customer's phone number: ";
    std::getline(std::cin, temp);
    setPhoneNumber(temp);

    std::cout << "Enter customer's address: ";
    std::getline(std::cin, temp);
    setAddress(temp);
}

void Customer::info() const {
    std::cout << "Name: " << getName() << "\n";
    std::cout << "Phone number: " << getPhoneNumber() << "\n";
    std::cout << "Address: " << getAddress() << "\n";
}