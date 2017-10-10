// File: sodium_hw4_task1
// Created by Abigail Sturgeon and Dayton Baxter on 10/10/2017 for CS1410.
// Copyright (c) 2017 WSU

#include <iostream>
using namespace std;

// Structures/Constants
struct house
{
    int streetNum;
    char streetName[30];
    double price;
};

//   Function prototypes
struct house InputHouse(void);
void PrintHouse(int houseNum, struct house h);
int ComparePrices(struct house h1, struct house h2);

//   Main Program
int main(int argc, char* argv[])
{
    cout<<"Enter info for first house\n";
    struct house firstHouse =  InputHouse();
    cout<<"\nEnter info for second house\n";
    struct house secondHouse = InputHouse();

    PrintHouse(1, firstHouse);
    printf("\n\n");
    PrintHouse(2, secondHouse);
    printf("\n\n");

    int comparison = ComparePrices(firstHouse, secondHouse);
    /*   Based on comparison value, use a switch
     *  statement to display all possibilities:
     *  1) "the first house is cheaper"
     *  2) "the two houses are equally expensive"
     *  3) "the second house is cheaper"
     *  4) "invalid comparison value there must be a bug"
     */

    // Depending on returned integer, print out results
    switch(comparison)
    {
        case 1:
            cout << "The first house is cheaper." << endl;
            break;
        case 2:
            cout << "The house are equally expensive." << endl;
            break;
        case 3:
            cout << "The second house is cheaper." << endl;
            break;
        default:
            cout << "Unsupported code" << endl;
            break;
    }
    return 0;
}

//   Function Definitions

// Get addresses and prices for houses from user
struct house InputHouse(void)
{
    house h;
    cout << "Please enter the street number: " << endl;
    cin >> h.streetNum;

    cout << "Please enter the street name: " << endl;
    cin >> h.streetName;

    cout << "Please enter the price: " << endl;
    cin >> h.price;

    return h;
}

// Print out house info
void PrintHouse(int houseNum, struct house h)
{
    cout << houseNum << " house at " << h.streetNum
         << " " << h.streetName << " for $" << h.price << ".00." << endl;
}

// Compare house prices and return comparison integer
int ComparePrices(struct house h1, struct house h2)
{
    int i = 0;
    if(h1.price < h2.price)
    {
        i = 1;
    }
    else if(h1.price == h2.price)
    {
        i = 2;
    }
    else if(h1.price > h2.price)
    {
        i = 3;
    } else (i = 4);
    return i;

}