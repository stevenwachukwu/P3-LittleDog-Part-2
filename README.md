Program 3: Sorting a List of Lines

1 Goals
1. Organize a modular program in the C/C++ world.
2. To use an input file (p3Meow.txt) and read it line by line.
3. To use a command-line argument.
4. To handle end of file correctly.
5. To use C++ strings and a string operator.
6. To implement and use a linear linked list.
7. To implement an insertion sort.

2 The Project:
Implement a main function with a command-line argument that does these things:
1. Call banner() at the beginning of your program and bye() at the end.
2. Instantiate the List class
3. Open and read in the file named by the command-line argument. Handle eof
properly. If there are any problems, call fatal)().
The input file contains a series of lines of text. Do not modify my file in order to
make your program work. Do not remove the newline character on the end of the
last line.
4. Use List::insert() to insert each line of the file into the List. (This is a linked-list
insertion sort.)
5. After end of file, print the sorted list. You will be alphabetizing based on the entire
line, not one letter or one word. Use the < operator supported in the string class.
6. Call bye() before you return from main.

3 The List Class and Cell class.
List and Cell comprise a tightly coupled pair of classes: neither makes sense without the
other. There are two ways to create a tightly coupled pair of classes. One is shown in
Lecture 4, the other is described and used in this assignment. Review the diagrams,
descriptions, and code in Lecture 4. Borrow large parts of it. However, delete functions
that you do not need and do not use a friend declaration.
1. Make a header file and an implementation file for List and Cell.
2. In the header file, write the class declaration for List, with the private class
declaration for Cell inside it (at the top).
3. Although Cell is inside the private part of List, make everything in Cell public, so
List can use it.
4. In Cell, implement constructor and destructor. The parameters to the constructor
should be a string (the input text) and a Cell* that defaults to nullptr.
5. In the public part of List, write prototypes or inline functions for constructor,
destructor, print, and insert (described below).
6. In the private part of List define a pointer for the head of the list, and two scanning
pointers: prior and scan.
7. In the private part of List write a prototype for find() (described below). Add any
other private functions that you find useful.
8. If your function fits on one line, put it entirely in the header file, instead of a
prototype. This is called an “inline function” and it increases the efficiency of the
running program.

The find() function.
• As shown in class, initialize the scan pointer to the head of the list and the
prior pointer to nullptr.
• In a 2-pointer walk, always set prior = scan before you change scan to scan-
>next.
• Do a 2-pointer walk down the list until scan points at a cell whose data is greater
than the new data.
• Return. At this point, prior is pointing to the cell that should precede the new cell.
The insert() function.
• Call find() to position the scan and prior pointers on your linked list.
• Instantiate a new Cell containing the line of text you just read and pointing to
whatever scan
currently points to.
• Then check prior: if it is nullptr, make head point at the new cell. Otherwise,
make the cell that prior points at point at the new cell.
• If you do this in the right order, it is four lines of code.
