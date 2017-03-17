
//  main.cpp
/*
 Enrique Salvador Rodriguez Jimenez - A01282130
 
 */

#include <iostream>
#include "Item.hpp"
#include "Knapsack.hpp"

using namespace std;


int main()
{
    Knapsack z(20);
    /* estas solo son pruebas para verificar que el codigo funcionaba originalmente se tiene que
    utilizar el KnapsackP para llamar las variables
     */
    
    
    Item a(10, 30),b(12, 34);
    
    z.add(a);
    z.add(b);
    
    cout<<z.tostring()<<endl;
    cout<< a.tostring()<< endl;
    cout<<b.tostring()<<endl;

    
    
    
    return 0;
}
