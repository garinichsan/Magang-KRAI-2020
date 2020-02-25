#include <string.h>
#include <iostream>

using namespace std;

class a {
public:
    string name;
};

class b {
private:
    string name;
};

class c {
private:
    string name;
public:
    void setName(string input){
        this->name = input;
    }
    string getName(){
        return this-> name;
    }
};


int main(){
    a A;
    A.name = "XXX";
    cout<<A.name<<endl;

    // b B;
    // B = "YYY"
    // cout<<B<<endl;
    
    c C;
    C.setName("ZZZ");
    cout<<C.getName()<<endl;

    return 0;
}