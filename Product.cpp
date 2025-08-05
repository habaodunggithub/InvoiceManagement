#include "Product.h"

Product::Product() {}

Product::Product(const std::string& id, const std::string& name, int quantity, double price) 
    : id(id), name(name), quantity(quantity), price(price) {}

Product::~Product() {}

std::string Product::getId() {
    return id;
}

std::string Product::getName() {
    return name;
}

int Product::getQuantity() {
    return quantity;
}

double Product::getPrice() {
    return price;
}

void Product::enterInfo() {
    std::cout << "Enter the id of product: ";
    std::getline(std::cin, id);
    
    std::cout << "Enter the name of product: ";
    std::getline(std::cin, name);

    std::cout << "Enter the quantity of product: ";
    std::cin >> quantity;

    std::cout << "Enter the price of product: ";
    std::cin >> price;
}

void Product::info() {
    std::cout << "ID: " << id << "\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Quantity: " << quantity << "\n";
    std::cout << "Price: " << price << "\n";
}

double Product::totalPrice() {
    return quantity*price;
}

