#include <iostream>
#include "Point.cpp"
#include "Line.cpp"

using namespace std;

int main() {
	Point begin;
	Point end;
	Line line1(begin, end);
	cout << line1.getLength() << endl;

	Line line2(1, 1, 2, 2); 
	cout << line2.getLength() << endl;
	return 0;
}