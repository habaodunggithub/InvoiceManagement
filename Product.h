#pragma once

#include <iostream>
#include <string>

class Product {
public:
    Product();
    Product(const std::string&, const std::string&, int, double);
    ~Product();

    const std::string& getId() const;
    const std::string& getName() const;
    int getQuantity() const ;
    double getPrice() const;
    void enterInfo();
    void info() const;
    double totalPrice() const;
private:
    std::string id;
    std::string name;
    int quantity;
    double price;
};