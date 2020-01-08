// name: Lilit Khamalyan
// date: 1/07/2020
// Program 2-23 Spotlight: Suppose a retail business sells an item that is regularly priced at $59.95
// and is planning to have a sale where the item's price will be reduced by 20%. You have been asked to write a program to calculate the sale price of the item.
#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
     // Variables to hold regular price, discount, and sale price.
     double regularPrice = 59.95;
     double discount, salePrice;
     // Calculate discount
     discount = regularPrice * 0.2;
     // Calculate  and display sale price
     salePrice = regularPrice - discount;
     cout << "Sale price of the item is $" << salePrice << endl;
     system("pause");
     return 0;
}

