//
//  Item.hpp
//  Projecto nap
//
//  Created by Enrique Rodriguez on 17/03/17.
//  Copyright © 2017 Enrique Rodriguez. All rights reserved.
//

#ifndef Item_hpp
#define Item_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Item
{
    
private:
    
    int weight;
    int profit;
    
public:
    Item();
    // se tendran que poner las 2 variables que conforman el ITEM que son el peso y precio 
    Item(int w, int p);
    // se mostraran el precio y peso de cada item
    string tostring();
    // Get del peso y precio para poder llamarlos en el Knapsack
   int getweight();
    int getprofit();
    
    
    
};
#endif /* Item_hpp */
