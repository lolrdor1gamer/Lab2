#include <iostream>
#include <algorithm>
#include "Square.h"
using namespace std;


int main() 
{
	cout << "imya" << endl;
	while (1)
	{
		cout << "Write your x, y and side" << endl;
		float x, y, s;
		cin >> x >> y >> s;
		auto sq = new Square(x, y, s);
		cout << sq->Perimetr() << endl;
	}

}
