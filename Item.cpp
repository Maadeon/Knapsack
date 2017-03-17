//
//  Item.cpp
//  Projecto nap
//
//  Created by Enrique Rodriguez on 17/03/17.
//  Copyright © 2017 Enrique Rodriguez. All rights reserved.
//

#include "Item.hpp"
#include <iostream>

using namespace std;
// inicializamos el peso y el precio
Item::Item()
{
    weight = 0;
    profit =0;
    
}
// se tendran que poner las 2 variables que conforman el ITEM que son el peso y precio 
Item::Item(int w, int p)
{
    weight=w;
    profit=p;
}
// se mostraran el precio y peso de cada item
string Item::tostring()
{
    string tmp;
    
    tmp = " weight  =  " + to_string(weight);
    tmp += "  /  Profit =  " + to_string(profit);
    return tmp;
}
// Get del peso y precio para poder llamarlos en el Knapsack
int Item::getweight()
{
    return weight;
}

int Item::getprofit()
{
    return profit;
}
