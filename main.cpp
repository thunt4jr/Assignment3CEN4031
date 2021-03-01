#include <iostream>

using namespace std; 

class point {
private:
	int pX, pY; 

public:
	point() {
		pX = 0; 
		pY = 0;
	}

	void setPoint(int aPoint, int bPoint) {
		pX = aPoint; 
		pY = bPoint; 
	}

	int pointX(void) {
		return pX; 
	}

	int pointY(void) {
		return pY; 
	}
};
int displayPoint() {

	point p1, p2, p3; 

	p1.setPoint(10, 100); 
	p2.setPoint(20, 200); 
	p3.setPoint(-1, -1); 

	if (int aPoint = 0) {
		
		cout << "Your point has failed" << endl; 

	}
	else {
		cout << "Passed" << endl; 
	}

	cout << "Point 1: (" << p1.pointX() << ", " << p1.pointY() << ") " << endl; 

	if (int aPoint = 0) {

		cout << "Your point has failed" << endl;

	}
	else {
		cout << "Passed" << endl;
	}

	cout << "Point 2: (" << p2.pointX() << ", " << p2.pointY() << ") " << endl; 

	if (int aPoint = 20) {

		cout << "Your point has failed" << endl;

	}
	else {
		cout << "Passed" << endl;
	}

	cout << "point 3: (" << p3.pointX() << ", " << p3.pointY() << ") " << endl;
	cout << endl; 

	return 0; 
}
class rectangle {

private: 
	int rX, rY; 

public: 
	rectangle() {
		rX = 0; 
		rY = 0; 
	}

	void recPoint(int recA, int recB) {
		rX = recA; 
		rY = recB; 
	}

	int recX(void) {
		return rX; 
	}

	int recY(void) {
		return rY; 
	}
};
int displayRectangle() {

	rectangle r1, r2; 
	r1.recPoint(10, 100);
	r2.recPoint(20, 200); 

	if (int recA = true)
	{
		cout << "Passed #1" << endl; 
	}
	else if (int recA=20) {

		cout << "Passed #2" << endl; 

	}
	else {
		cout << "Failed" << endl; 
	}

	int recAreaOne = r1.recX() * r1.recY(); 
	int recAreaTwo = r2.recX() * r2.recY(); 

	cout << "area of Rectangle 1: " << recAreaOne << endl; 

	if (int recA = true)
	{
		cout << "Passed #1" << endl;
	}
	else if (int recA = 20) {

		cout << "Passed #2" << endl;

	}
	else {
		cout << "Failed" << endl;
	}

	cout << "area of Rectangle 2: " << recAreaTwo << endl; 
	cout << endl; 

	return 0; 
}
class circle {
private: 
	int cX; 

public: 
	circle() {
		cX = 0; 
	}
	
	void circlePoint(int circleA) {
		cX = circleA; 
	}

	int circleX(void) {
		return cX;
	}
};
int displayCircle() {
	
	circle c1, c2; 
	c1.circlePoint(10); 
	c2.circlePoint(20); 

	int circleOne = c1.circleX() / 2; 
	int circleTwo = c2.circleX() / 2; 

	if (circleOne >= 10)
	{
		cout << "Circle has failed" << endl; 
	}
	else {
		cout << "Circle has passed" << endl; 
	}
	cout << "Area of Circle 1: " << circleOne << endl; 
	
	if (circleTwo >= 10)
	{
		cout << "Circle has failed" << endl;
	}
	else {
		cout << "Circle has passed" << endl;
	}
	cout << "Area of Circle 2: " << circleTwo << endl; 
	cout << endl; 

	return 0;
}
class triangle {

private: 
	int tX, tY, tZ; 

public: 
	triangle() {
		tX = 0;
		tY = 0; 
		tZ = 0;
	}

	void trianglePoint(int tA, int tB, int tC) {
		tX = tA; 
		tY = tB; 
		tZ = tC; 
	}

	int triX(void) {
		return tX; 
	}
	int triY(void) {
		return tY; 
	}
	int triZ(void) {
		return tZ;
	}
};
int displayTriangle() {
	triangle t1, t2, t3; 
	t1.trianglePoint(10, 10, 10); 
	t2.trianglePoint(NULL, NULL, NULL);
	t3.trianglePoint(200, 200, 200); 

	double triangleOne = (t1.triX() + t1.triY() + t1.triZ()) / 2;
	double triangleTwo = (t2.triX() + t2.triY() + t2.triZ()) / 2; 
	double triangleThree = (t3.triX() + t3.triY() + t3.triZ()) / 2; 

	if (triangleOne >= 31) {

		cout << "Failed" << endl; 
	}
	else {
		cout << "Passed" << endl; 
	}
	cout << "Area of Triangle 1: " << triangleOne << endl; 

	if (triangleTwo >= -1) {

		cout << "Failed" << endl;
	}
	else {
		cout << "Passed" << endl;
	}
	cout << "Area of Triangle 2: " << triangleTwo << endl;

	if (triangleThree >= 31) {

		cout << "Failed" << endl;
	}
	else {
		cout << "Passed" << endl;
	}
	cout << "Area of Triangle 3: " << triangleThree << endl;
	return 0; 
}

int main() {

	displayPoint();
	displayCircle(); 
	displayRectangle();
	displayTriangle(); 

	return 0; 
}