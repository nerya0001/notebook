#include <iostream>
#include <string>
#include <cctype>
#include <vector>
#include <unordered_map>
#include "Notebook.hpp"
#include "Direction.hpp"

using namespace ariel;
using namespace std;

Notebook::Notebook() {
//     vector<char> row(100);
//     unordered_map<int, vector<char>> page;
//     page[0] = row;
//     this->nbook[0] = page;
}

void Notebook::write(int page, int row, int column, Direction d, string str) {
    // if (d == Direction::Horizontal) {
    //     for (int i = 0; i < str.length(); i++) {
    //         this->nbook[page][row].at(column + i)= str.at(i);
    //     }
    // } else {
    //     for (int i = 0; i < str.length(); i++) {
    //         this->nbook[page][row + i].at(column)= str.at(i);
    //     }   
    // }
}

string Notebook::read(int page, int row, int column, Direction d, int len) {
    return "blabla";
}

void Notebook::erase(int page, int row, int column, Direction d, int len) {

}

void Notebook::show(int page) {
    cout << "blabla" << endl;
}