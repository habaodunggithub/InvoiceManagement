#include "Invoice.h"

int main() {
    Invoice iv;

    iv.enterCustomerInfo();
    iv.enterProductList();
    iv.printInvoice();

    return 0;
}