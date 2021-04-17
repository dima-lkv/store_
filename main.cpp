#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <cctype>
#include "ClassList.hpp"
#include <fstream>

using namespace std;

#define W 20
#define R 4

unsigned temp;
unsigned real = R;

int main()
{
  pList pl[W];
  aList al[W];
    // READING FROM A FILE
    ifstream inFile ("input.txt");
    if (inFile.is_open())
    {
       
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
  //DATA ----------------------------------------------------
    /*
  pl[i].index = 0;
  pl[i].pname = "Mac Book Air M1";
  pl[i].weight = "0.8kg";
  pl[i].price = 1180;
  pl[i].amount = 220000;

  i = i + 1;
  pl[i].index = 1;
  pl[i].pname = "AirPods Max";
  pl[i].weight = "0.2kg";
  pl[i].price = 480;
  pl[i].amount = 140000;

  i = i + 1;
  pl[i].index = 2;
  pl[i].pname = "Apple TV 4-th gen 4k";
  pl[i].weight = "0.5kg";
  pl[i].price = 280;
  pl[i].amount = 270000;

  i = i + 1;
  pl[i].index = 3;
  pl[i].pname = "IPad Pro 12.9\" 2020 ";
  pl[i].weight = "0.64kg";
  pl[i].price = 1480;
  pl[i].amount = 700000;

  i = i + 1;
  pl[i].index = 4;
  pl[i].pname = "Apple Pencil 2-nd gen";
  pl[i].weight = "0.04kg";
  pl[i].price = 220;
  pl[i].amount = 690000;
     */
    //DATA ----------------------------------------------------
loop:
  cout << "--------------------------------------------------" << endl;
  cout << "What do you want to do with store DataBase?" << endl;
  cout << "Avaliable options:" << endl << "1) Edit Product Details." << endl << "2) Add New Product. " << endl << "3) Delete The Product. " << endl << "4) Output only Name & Price of the Product. " << endl << "5) Display all avaliable Products." << endl << "6) Real and Max number of Products." << endl << "7) Stop." << endl;
  cout << "--------------------------------------------------" << endl;
  cout << "Please enter the number of operation you want to do : " << endl;

unsigned temp1 = 0;
  cin >> temp1;
  switch (temp1)
  {
  case 1:
    cout << "Which element do you want to choose?" << endl << "Please enter the number :" << endl;
    cin >> temp;
    if (temp > real)
    {
      cout << "Wrong input. Try again!" << endl;
        temp = 0;
    }
    pl[temp].print();
    pl[temp].edit();
    for (unsigned i = 0; i <= real; i++)
    {
      pl[i].print();
    }    break;
  case 2:
          if (real >= W)
          {
              cout << "You cannot add more products, 20 is max amount!" << endl;
              goto loop;
          }
    pl[real + 1].input(real);
    for (unsigned i = 0; i <= real; i++)
    {
      pl[i].print();
    }
    real++;
    break;
  case 3:
    cout << "Which element of the massive you want to delete?" << endl << "Please enter the number :" << endl;
    cin >> temp;
    for (temp; temp <= real; temp = temp + 1)
    {
        //зробити видалення mass charr
        unsigned j = 0;
        while (pl[temp].pname[j] != EOF) {
            pl[temp].pname[j] = pl[temp + 1].pname[j];
        }
        //зробити видалення mass charr
        
        
      pl[temp].weight = pl[temp + 1].weight;
      pl[temp].price = pl[temp + 1].price;

pl[temp].amount = pl[temp + 1].amount;
    }
    real--;
    for (unsigned i = 0; i <= real; i++)
    {
      pl[i].print();
    }    break;

  case 4:
    for (unsigned i = 0; i <= real; i++)
    {
      al[i].index = pl[i].index;
     //al[i].pname = pl[i].pname;
      al[i].price = pl[i].price;
    }
    for (unsigned i = 0; i <= real; i++)
    {

      cout << left << "Product #" << al[i].index << endl << setw(W) << "1) Product Name " << right << "|   " << al[i].pname << endl << left << setw(W) << "3) Product Price " << right << "|   "
        << al[i].price << " USD" << endl << endl;
    }    break;



  case 5:
    for (unsigned i = 0; i <= real; i++)
    {
      pl[i].print();
    }    break;
  case 6:
    cout << "Number of real elements:" << real + 1 << endl << "Max number of elements:" << W << endl;
    break;
  case 7:
    return 0;
  default:
    cout << "Wrong input. Try again!" << endl;
          return 0;
  }
  goto loop;
}
