#include "Customer.h"

Customer::Customer() {}

Customer::Customer(const std::string& name, const std::string& phoneNumber, const std::string& address)
    : name(name), phoneNumber(phoneNumber), address(address) {}

Customer::~Customer() {}

std::string Customer::getName() {
    return name;
}

std::string Customer::getPhoneNumber() {
    return phoneNumber;
}

std::string Customer::getAddress() {
    return address;
}

void Customer::enterInfo() {
    std::cout << "Enter customer's name: ";
    std::getline(std::cin, name);

    std::cout << "Enter customer's phone number: ";
    std::getline(std::cin, phoneNumber);

    std::cout << "Enter customer's address: ";
    std::getline(std::cin, address);
}

void Customer::info() {
    std::cout << "Name: " << name << "\n";
    std::cout << "Phone number: " << phoneNumber << "\n";
    std::cout << "Address: " << address << "\n";
}