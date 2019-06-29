#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

void total(int price = 3000, int count = 1) {
	cout << "총금액은 "<<  price * count << endl;
}

void total2(int day, int price = 3000, int count = 1) {
	cout << day << ":일 총금액은 " << price * count;
}


int main()
{
	total();
	total(2000);
	total(2000, 3);

	total2(23, 2000, 3);
	total2(23);
	return 0;
}