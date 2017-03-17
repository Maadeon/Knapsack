//
//  Knapsack.hpp
//  Projecto nap
//
//  Created by Enrique Rodriguez on 17/03/17.
//  Copyright © 2017 Enrique Rodriguez. All rights reserved.
//

#ifndef Knapsack_hpp
#define Knapsack_hpp

#include <stdio.h>
#include <iostream>
#include "Item.hpp"
#include <vector>
#include <string>
using namespace std;

class Knapsack
{
private:
// para el Knapsack se pondran Tweight y Tprofit para el total de cada uno y llevar la suma.
    int Tweight;
    int Tprofit;
// El vector de la clase Item que contendra los Items
    vector<Item> items;
    
public:
// la capasidad del peso de Knapsack
    Knapsack(int Tw);
/* void para agregar items al Knapsack
 nota: ya esta implementado la funcion que lleva la cuenta de la suma del profit y weight conforme le
 vallamos agregando items ( checar en el cpp )
 */
   void add(Item);
 
// string que imprimira los atributos de los items
    string tostring();
    
};
#endif /* Knapsack_hpp */
