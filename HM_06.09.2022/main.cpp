#include <iostream>
using namespace std;


class Point
{
	double x;
	double y;

public:
	Point()
	{
		x = 0;
		y = 0;
	}
	Point(double X, double Y)
	{
		x = X;
		y = Y;
	}
	void Print()
	{
		cout << "X : " << x << endl;
		cout << "Y : " << y << endl;
	}
};


int main()
{
	Point p(6, 9);
	p.Print();
	Student st("Vladyslav", 18);
	st.Print();
	return 0;
}