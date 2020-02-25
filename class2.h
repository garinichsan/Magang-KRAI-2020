// Kelas Z dengan satu atribut val 
#ifndef _Z_H 
#define _Z_H 

class Z { 
public : 
    void Print();            //Print nilai val
    void Print(int i);       //Print nilai i yang diberikan sbg parameter aktual   
    void Set (int x);       // set val dengan x 
    int Add (int x, int y); // mengirimkan x+y   
    void Add (int x); // menambah val dengan x
private :
     int val;
}; 

#endif
