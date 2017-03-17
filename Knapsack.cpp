//
//  Knapsack.cpp
//  Projecto nap
//
//  Created by Enrique Rodriguez on 17/03/17.
//  Copyright © 2017 Enrique Rodriguez. All rights reserved.
//

#include "Knapsack.hpp"
#include <iostream>
#include "Item.hpp"
#include <vector>

using namespace std;


Knapsack::Knapsack(int Tw)
{
    Tweight = Tw;
    Tprofit = 0;
}

void Knapsack::add(Item i )
{
    if (i.getweight() <= Tweight )
    {
// Items agregados al array ( vector ) 
        items.push_back(i);
// resta del peso del item a el peso total
        Tweight -= i.getweight();
// suma del profit de item a profit total
        Tprofit += i.getprofit();
    }
  
        
}

string Knapsack::tostring()
{ string tmp;
    
    for (int i = 0; i<items.size(); i++)
    {
        tmp+= items.at(i).tostring() + " " ;
    }
    return tmp;
}
