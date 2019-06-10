// test610.cpp : 定义控制台应用程序的入口点。
#include "stdafx.h"
#include"iostream"
using namespace std;
class CMeter
{
private:
	int meters;
	int centimetre;
public:
	void setMeters(int m, int cm);
	void display();
	int getMeters();
	int getCentimetre();
	CMeter addMetrers(CMeter &od);
	CMeter operator +(CMeter &d);
};
CMeter CMeter::addMetrers(CMeter &od)
{
	CMeter temp;
	temp.setMeters(meters + od.meters, centimetre + od.centimetre);
	return temp;
}
CMeter CMeter::operator +(CMeter &d)
{
	CMeter temp;
	temp.setMeters(meters + d.meters, centimetre + d.centimetre);
	return temp;
}
void CMeter::setMeters(int m, int cm)
{
	meters = m + cm / 100;
	centimetre = cm % 100;
}
void CMeter::display()
{
	cout << meters << "米" << centimetre << "厘米" << endl;
}
int CMeter::getMeters()
{
	return meters;
}
int CMeter::getCentimetre()
{
	return centimetre;
}
int main()
{
	CMeter A, B, C;
	A.setMeters(2, 1);
	B.setMeters(2, 120);
	C = A + B;
	C.display();
	return 0;
}