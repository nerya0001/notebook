#include <string>
#include <vector>
#include <unordered_map>
#include "Direction.hpp"

using namespace std;
using ariel::Direction;


namespace ariel {
    class Notebook {

        unordered_map<int, unordered_map<int, vector<char>>> nbook;

        public:

            Notebook();

            void write(int page, int row, int column, Direction, string str);

            string read(int page, int row, int column, Direction, int len);

            void erase(int page, int row, int column, Direction, int len);

            void show(int page);
    };
};
