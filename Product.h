#pragma once

#include <iostream>
#include <string>

class Product {
private:
    std::string id;
    std::string name;
    int quantity;
    double price;
public:
    Product();
    Product(const std::string&, const std::string&, int, double);
    ~Product();

    std::string getId();
    std::string getName();
    int getQuantity();
    double getPrice();
    void enterInfo();
    void info();
    double totalPrice();
};