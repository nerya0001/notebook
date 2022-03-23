#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include "Notebook.hpp"
#include "Direction.hpp"

using namespace ariel;
using namespace std;

Notebook::Notebook() {
    // vector<char> row(100);
    // unordered_map<int, row> page;
    // this->nbook[1] = page;
}

void Notebook::write(int page, int row, int column, Direction, string str) {
    // if (Direction == Horizontal) {
    //     for (int i = 0; i < strlen(str); i++) {
    //         this->nbook[page][row][column + i] = str[i];
    //     }
    // } else {
    //     for (int i = 0; i < strlen(str); i++) {
    //         this->nbook[page][row + i][column] = str[i];
    //     }   
    // }
}

string Notebook::read(int page, int row, int column, Direction, int len) {
    return "blabla";
}

void Notebook::erase(int page, int row, int column, Direction, int len) {

}

void Notebook::show(int page) {
    cout << "blabla" << endl;
}