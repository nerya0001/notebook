/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 *
 * AUTHORS: Nerya Bigon
 * 
 * Date: 2021-02
 */
#include <string>
#include <algorithm>
#include "doctest.h"
#include "Direction.hpp"
#include "Notebook.hpp"
using namespace ariel;
using namespace std;


TEST_CASE("Good input")
{
	Notebook b1;
	b1.write(0, 0, 0, Direction::Horizontal, "stam");
	CHECK((b1.read(0, 0, 0, Direction::Horizontal, 4)) == ("stam"));
	b1.write(30, 0, 0, Direction::Horizontal, "stam");
	CHECK((b1.read(30, 0, 0, Direction::Horizontal, 4)) == ("stam"));
	b1.write(31, 0, 0, Direction::Vertical, "stam");
	CHECK((b1.read(31, 0, 0, Direction::Vertical, 4)) == ("stam"));
	CHECK((b1.read(0, 6, 0, Direction::Horizontal, 4)) == ("____"));
	CHECK((b1.read(0, 6, 0, Direction::Vertical, 4)) == ("____"));
	b1.write(0, 1, 0, Direction::Horizontal, "abcd");
	CHECK(b1.read(0, 1, 0, Direction::Horizontal, 4) == "abcd");
	b1.erase(0, 2, 0, Direction::Horizontal, 4);
	CHECK((b1.read(0, 2, 0, Direction::Horizontal, 3)) == ("~~~"));
	CHECK((b1.read(0, 2, 0, Direction::Horizontal, 4)) == ("~~~~"));
	CHECK((b1.read(0, 2, 0, Direction::Horizontal, 5)) == ("~~~~_"));
	CHECK((b1.read(0, 0, 0, Direction::Vertical, 3)) == ("sa~"));
	CHECK((b1.read(0, 0, 1, Direction::Vertical, 4)) == ("tb~_"));
	CHECK((b1.read(0, 0, 2, Direction::Vertical, 2)) == ("ac"));
}
TEST_CASE("NOT THROW")
{
	Notebook b2;
	CHECK_NOTHROW(b2.erase(29, 99, 1, Direction::Horizontal, 2));
	CHECK_NOTHROW(b2.erase(29, 99, 1, Direction::Vertical, 2));
}

TEST_CASE("bad input")
{
	Notebook b3;
	for (int i = 2; i < 20; i++)
	{
		CHECK_THROWS(b3.erase(0, 0, 99, Direction::Horizontal, i)); // col + numofchars >= 100
	}
	CHECK_THROWS(b3.erase(0, 0, 0, Direction::Horizontal, 101)); // col + numofchars >= 100
	CHECK_THROWS(b3.read(0, 0, 51, Direction::Horizontal, 101)); // col + numofchars >= 100
}