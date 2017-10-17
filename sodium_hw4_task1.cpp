// File: sodium_hw4_task1
// Created by Abigail Sturgeon and Dayton Baxter on 10/10/2017 for CS1410.
// Copyright (c) 2017 WSU

#include <iostream>
using namespace std;

// Constants
const int SIZE = 3;

// Classes
class houseInfo
{
private:
    int streetNum;
    string streetName;
    double price;
public:
    void houseInput()
    {
        cout << "Please enter the street number: " << endl;
        cin >> streetNum;
        cin.ignore();

        cout << "Please enter the street name: " << endl;
        cin >> streetName;
        cin.ignore();

        cout << "Please enter the price: " << endl;
        cin >> price;
        cin.ignore();
    }
    void showHouse(int houseNum)
    {
        cout << "House " << houseNum << " at " << streetNum
             << " " << streetName << " for $" << price << ".00." << endl;
    }
    int comparePrice(houseInfo array[SIZE]);
};


int main()
{
    houseInfo array[SIZE];
    houseInfo h1, h2, h3;
    cout << "Enter info for 1 house: " << endl;
    h1.houseInput();
    array[0] = h1;

    cout << "Enter info for 2 house: " << endl;
    h2.houseInput();
    array[1] = h2;

    cout << "Enter info for 3 house: " << endl;
    h3.houseInput();
    array[2] = h3;

    cout << "Your market analysis is as follows: " << endl;
    array[0].showHouse(1);
    array[1].showHouse(2);
    array[2].showHouse(3);

    int comparison = h1.comparePrice(array);
    switch(comparison)
    {
        case 1 :
            cout << "House 1 is cheaper" << endl;
            break;
        case 2 :
            cout << "House 2 is cheaper" << endl;
            break;
        case 3 :
            cout << "House 3 is cheaper" << endl;
            break;
        case 4 :
            cout << "House 1 and 2 are cheapest" << endl;
            break;
        case 5 :
            cout << "House 1 and 3 are cheapest" << endl;
            break;
        case 6 :
            cout << "House 2 and 3 are cheapest" << endl;
            break;
        case 7 :
            cout << "The houses are all the same price" << endl;
            break;
        default:
            cout << "Invalid comparison" << endl;
    }



    return 0;
}

//Functions
int houseInfo::comparePrice(houseInfo array[SIZE])
{
    if(array[0].price < array[1].price && array[0].price < array[2].price)
    {
        return 1;
    }
    if(array[1].price < array[0].price && array[1].price < array[2].price)
    {
        return 2;
    }
    if(array[2].price < array[1].price && array[2].price < array[0].price)
    {
        return 3;
    }
    if(array[0].price == array[1].price && array[0].price < array[2].price)
    {
        return 4;
    }
    if(array[0].price == array[2].price && array[0].price < array[1].price)
    {
        return 5;
    }
    if(array[2].price == array[1].price && array[2].price < array[0].price)
    {
        return 6;
    }
    if(array[0].price == array[1].price == array[2].price)
    {
        return 7;
    }

}
