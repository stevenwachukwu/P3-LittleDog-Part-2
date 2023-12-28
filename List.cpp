#include "List.h"

void SList::start() {
    head = nullptr; //initializing the head with a null pointer
    count = 0; //count with null
} //the start function of the program

void SList::print(ostream& out) const {
    Cell* s = head; //assigning the head value to a temporary pointer 
    while (s != nullptr) {  //repeating the operation until the temporary pointer is null
        out << s->data << endl; //out the cell data
        s = s->next; //move into next cell
    } 
} //the print function of the program

void SList::insert(string data) {
    find(data); //calling the find function for the insert function
    Cell* newcell = new Cell(data); //creating a new cell
    newcell->next = scan;
    if (prior == nullptr) {
        head = newcell;
    } //the if statement if prior is a nullptr
    else {
        prior->next = newcell;
    } //the else statement if prior isn't a nullptr
    count++;
}

void SList::find(string data) {
    scan = head; //initializing the scan as head
    if (scan == nullptr) {
        return;
    }
    prior = nullptr; //initializing prior as a nullptr
    for (;;) {
    if (scan == nullptr || scan->data > data) {
            break;
        } //within the for loop, the if statement checks the two scan conditions every time that it advances in the linked list.
        prior = scan;
        scan = scan->next;
    } //This for loop is used to help sort the linked list in it's proper order. Also, it's used to advance in the linked list as well. 
