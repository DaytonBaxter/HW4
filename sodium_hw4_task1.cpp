// File: sodium_hw4_task1
// Created by Abigail Sturgeon and Dayton Baxter on 10/10/2017 for CS1410.
// Copyright (c) 2017 WSU

#include <iostream>
#include <string>
using namespace std;

const int SIZE = 3;

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
        cout << houseNum << " house at " << streetNum
             << " " << streetName << " for $" << price << ".00." << endl;
    }
    double returnPrice()
    {
        return price;
    }

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


    return 0;
}