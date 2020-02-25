// File Z.cpp 
#include "class2.h" 
#include <iostream> 

using namespace std;

void Z::Print() {   //Print nilai val
    cout << "val= "<<  Z::val << endl;
}

void Z::Print(int i) {   //Print nilai i yang diberikan sbg parameter aktual 
    cout << Z::val <<" +"  << i << "=" << Z::val + i << endl; 
} 

void Z::Set (int x) {  // set val dengan x 
    Z::val = x;
}

int Z::Add (int x, int y) { // mengirimkan x+y   
    return x+y;
} 

void Z::Add (int x)  {   // menambah val dengan x 
    Z::val = Z::val + x;
}