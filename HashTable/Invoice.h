//
// Created by Christian Rivera on 2019-06-12.
//

#ifndef HASHTABLE_INVOICE_H
#define HASHTABLE_INVOICE_H

#include <string>
using namespace std;


class Invoice {
public:
    Invoice();
    Invoice(int,string,double);
    int getInvoiceNumber();
    string getInvoiceName();
    double getInvoiceAmount();
    void setInvoiceNumber(int);
    void setInvoiceName(string);
    void setInvoiceAmount(double);
    Invoice *next;
private:
    int number;
    string name;
    double amount;

};


#endif //HASHTABLE_INVOICE_H
