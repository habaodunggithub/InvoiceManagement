#pragma once

#include "Customer.h"
#include "Product.h"
#include <vector>

class Invoice {
private:
    std::string id;
    Customer customer;
    std::vector<Product> productList;
    double totalPrice;
public:
    Invoice();
    ~Invoice();

    void enterCustomerInfo();
    void enterProductList();
    void calculateTotalPrice();
    void printInvoice();
    void exportInvoice(const char*& fileName);
};