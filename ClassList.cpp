//
//  ClassList.cpp
//  5.2 oop
//
//  Created by Dima Ilkiv on 16.04.2021.
//

#include "ClassList.hpp"
#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cctype>

#define W 20
#define R 4

using namespace std;

aList :: aList()
{
    
}
pList :: pList()
{

}
aList :: ~aList()
{

}
pList :: ~pList()
{

}
void pList::input(int real)
{
    /*
    cout << "Please enter data!" << endl << "Product Name:" << endl;
    
    getline(cin, pname);

    cout << "Product Weight:" << endl;
    cin >> weight;
    cout << "Product Price:" << endl;
    cin >> price;
    cout << "Product Amount:" << endl;
    cin >> amount;
     */
    
    cout << "Please enter data!" << endl << "Product Name:" << endl;
    
    //issue solving
    string dummy;
    getline(cin,dummy);
    //issue solving

    getline(cin, pname);

    cout << "Product Weight:" << endl;
    cin >> weight;
    cout << "Product Price:" << endl;
    cin >> price;
    cout << "Product Amount:" << endl;
    cin >> amount;
 
    cout << "pname   -   " << pname << endl;
    cout << "weight   -   " << weight << endl;
    cout << "price   -   " << price << endl;
    cout << "amount   -   " << amount << endl;
    index = real++;
    print();
    this->real = real;
}
void pList::print()
{
    cout << left << "Product #" << index << endl << setw(W) << "1) Product Name " << right << "|   " << pname << endl << left << setw(W) << "2) Product Weight " << right << "|   " << weight << endl << left << setw(W) << "3) Product Price " << right << "|   "
      << price << " USD" << endl << left << setw(W) << "4) Product Amount " << right << "|   " << amount << " units" << endl << endl;
}
void pList::edit()
{
    cout << "Which field do you want to edit?" << endl << "Please enter the number of the field:" << endl;
    unsigned temp;
    cin >> temp;
    cout << "Ok. Please enter a new value of this field: " << endl;
    switch (temp)
    {
    case 1:
      cout << "1) Product Name " << right << "|     " << pname << endl;
      cin >> pname;
      break;
    case 2:
      cout << "2) Product Weight " << right << "|     " << weight << endl;
      cin >> weight;
      break;
    case 3:
      cout << "3) Product Price " << right << "|     " << price << endl;
      cin >> price;
      break;
    case 4:
      cout << "4) Product Amount " << right << "|     " << amount << endl;
      cin >> amount;
      break;
    default:
      cout << "Here are not such a field!";
      break;
    }
    temp = 0;
}
