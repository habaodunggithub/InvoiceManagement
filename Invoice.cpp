#include "Invoice.h"
#include <iomanip>

Invoice::Invoice() {
    productList.clear();
    totalPrice = 0.0;
}

Invoice::~Invoice() {}

void Invoice::enterCustomerInfo() {
    std::cout << "---Enter customer's infomation---\n";
    customer.enterInfo();
}

void Invoice::enterProductList() {
    int choice = 1;
    std::cout << "---Enter product list---\n";
    while (choice == 1) {
        Product p;
        p.enterInfo();
        productList.push_back(p);

        std::cout << "Choose option:\n";
        std::cout << "1. Continue.\n";
        std::cout << "2. End.\n";
        std::cout << "Enter option: ";
        std::cin >> choice;
        std::cin.ignore();
    }
}

void Invoice::calculateTotalPrice() {
    totalPrice = 0.0;
    for (Product& product : productList) {
        totalPrice += product.totalPrice();
    }
}

void Invoice::printInvoice() {
    std::cout << "\n===== INVOICE " << id << " =====\n";
    std::cout << "Customer: " << customer.getName() << "\n";
    std::cout << "Phone: " << customer.getPhoneNumber() << "\n";
    std::cout << "Address: " << customer.getAddress() << "\n\n";

    std::cout << "Items:\n";
    for (int i = 0; i < productList.size(); i++) {
        std::cout << i + 1 << ". ";
        std::cout << std::left << std::setw(15) << productList[i].getName();
        std::cout << "x" << std::left << std::setw(5) << productList[i].getQuantity();
        std::cout << productList[i].getPrice() << " => " << productList[i].totalPrice() << "\n";
        totalPrice += productList[i].totalPrice();
    }

    std::cout << "\nTotal: " << totalPrice << " VND\n";
    std::cout << "============================\n";
}

void Invoice::exportInvoice(const char*& fileName) {
    return;
}
