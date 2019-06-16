//
// Created by Christian Rivera on 2019-06-12.
//

#include "Invoice.h"

Invoice::Invoice() {
    setInvoiceNumber(0);
    setInvoiceName("");
    setInvoiceAmount(0.00);
}

Invoice::Invoice(int _number, string _name, double _amount) {
    setInvoiceNumber(_number);
    setInvoiceName(_name);
    setInvoiceAmount(_amount);
}

void Invoice::setInvoiceNumber(int _number) {
    number = _number;
}

void Invoice::setInvoiceName(string _name)  {
    name = _name;
}

void Invoice::setInvoiceAmount(double _amount) {
    amount = _amount;
}

int Invoice::getInvoiceNumber() {
    return number;
}

string Invoice::getInvoiceName() {
    return name;
}

double Invoice::getInvoiceAmount() {
    return amount;
}