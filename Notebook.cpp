#include <iostream>
#include <string>

#include "Notebook.hpp"
#include "Direction.hpp"

using namespace ariel;
using namespace std;

Notebook::Notebook() {
        
}

void Notebook::write(int page, int row, int column, Direction, string str) {
    cout << "blabla" << endl;
}

string Notebook::read(int page, int row, int column, Direction, int len) {
    return "blabla";
}

void Notebook::erase(int page, int row, int column, Direction, int len) {

}

void Notebook::show(int page) {
    cout << "blabla" << endl;
}