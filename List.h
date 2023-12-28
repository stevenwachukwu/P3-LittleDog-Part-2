
#include <iostream>
#include <string>
#include "Cell.h"

using namespace std;
//Linked List class
class SList {
private:  
    Cell* head; //the head pointer
    Cell* scan = nullptr;
    Cell* follow = nullptr;
    int count; //number of items currently
    //void find(); *not needed for part 1*
public:
    SList() = default; //the constructor
    void start(); //the initializer of the head
    Cell* getHead();
    int getCount();
    void setHead(Cell* h);
    void setCount(int c);

    void insert(string value); 
     void print(ostream& out) const; 
};
