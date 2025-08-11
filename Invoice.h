#pragma once

#include "Customer.h"
#include "Product.h"
#include <vector>

class Invoice {
public:
    Invoice();
    ~Invoice();

    double getTotalPrice() const;
    void enterCustomerInfo();
    void enterProductList();
    void calculateTotalPrice();
    void printInvoice() const;
    void exportInvoice(const char*& fileName) const;
private:
    std::string id;
    Customer customer;
    std::vector<Product> productList;
    double totalPrice;
};