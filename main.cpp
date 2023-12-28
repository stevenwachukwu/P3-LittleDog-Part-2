/*Steve Nwachukwu
Data Structures and Algorithms
Spring 2023
P3 - LittleDog - Part 2*/

//libraries used
#include <iostream>
#include <fstream>
#include <string>
#include "Cell.h"
#include "List.h"
using namespace std;

void Banner(ostream& out) {
    out << "-------Welcome to Program 3 LITTLE DOG by Steve Nwachukwu!---------\n" << endl;
    out << "My Major is Computer Science        Graduation Year: 2025\n" << endl;
    out << "Favorite Quote: Your time is limited, so don't waste it living someone else's life. - Steve Jobs \n" << endl;
    out << "About Me: I'm really tech savy and I like going out for walks. Also, I like to play video games and watch cartoons.\n" << endl;
} //function prototype of the banner to be called in the beginning of the program

void Bye(ostream& out) {
    out << "\nThanks for reading my poem, bye and have a nice day!" << endl;
} //function prototype of my bye function to get called into main

int main() {
    ifstream InputFile("p3Meow.txt"); //Input file of the program
    if (!InputFile.is_open()) { 
        cout << "Cannot Open Input File!" << endl; 
        return -1; 
    } //if statement if the input file can't open
    ofstream OutputFile("consoleOutput.txt");
    if (!OutputFile.is_open()) { 
        cout << "Cannot Open Output File!" << endl; 
        return -1; 
    } //if statement if the output file can't open
    else {
      Banner(OutputFile); //function call of the banner function for the output file
    }

    string line; //declaration of my string variable
    SList* list = new SList; //creating the list object

    list->start(); //calling the start function to initalize the head
    while (true) {
        getline(InputFile, line); //getting the first line from the input file
        if (InputFile.eof()) {
            break;
        } //the program will stop once it reaches end of file
        list->insert(line);
    } //the while loop to continuosly reads the next line from the input file
    list->print(OutputFile); //the printout of the sorted linked list for my output file
    Bye(OutputFile); //the printout of my bye function for my output file

    InputFile.close();
    OutputFile.close();

    Banner(cout); //printout of banner for the console
    list->print(cout); //printout of the sorted linked list for the console
    Bye(cout); //printout of my bye function for the console
    return 0;
}
