#include <iostream>
using namespace std;

const double pi = 3.14;

class Shape {
public:
	double virtual tinhdientich() = 0;
	double virtual tinhchuvi() = 0;
};

class Circle :public Shape {
private: double bankinh;
public:
	Circle(double r) :bankinh(r) {}
	double tinhdientich() override {
		return pi * pow(bankinh, 2);
	}
	double tinhchuvi() override {
		return 2 * pi * bankinh;
	}
};

class Rectangle : public Shape {
private: double chieudai, chieurong;
public: Rectangle(double cd, double cr) :chieudai(cd), chieurong(cr) {}
	  double tinhdientich() override {
		  return chieudai * chieurong;
	  }
	  double tinhchuvi() override {
		  return (chieudai + chieurong) * 2;
	  }
};

class Triangle :public Shape {
private: double side1, side2, side3;
public: Triangle(double c1, double c2, double c3) :side1(c1), side2(c2), side3(c3) {}
	  double tinhdientich() override {
		  double s = (side1 + side2 + side3) / 2;
		  return sqrt(s + (s - side1) + (s - side2) - (s - side3));
	  }
	  double tinhchuvi() override {
		  return side1 + side2 + side3;
	  }
};

int main()
{
	cout << "Hinh tron: " << endl;
	double bankinh;
	cout << "Nhap ban kinh hinh tron: "; cin >> bankinh;
	Circle ht(bankinh);
	cout << "Dien tich: " << ht.tinhdientich() << endl;
	cout << "Chu vi: " << ht.tinhchuvi() << endl;
	cout << endl;
	cout << "Hinh Chu Nhat: " << endl;
	double chieudai, chieurong;
	cout << "Nhao chieu dai hcn: ";
	cin >> chieudai;
	cout << "Nhap chieu rong HCN: ";
	cin >> chieurong;
	Rectangle hcn(chieudai, chieurong);
	cout << "Dien tich: " << hcn.tinhdientich() << endl;
	cout << "Chu vi: " << hcn.tinhchuvi() << endl;
	cout << endl;
	cout << "Hinh Tam Giac: " << endl;
	double c1, c2, c3;
	cout << "Nhap do dai 3 canh tam giac: ";
	cin >> c1 >> c2 >> c3;
	Triangle htg(c1, c2, c3);
	cout << "Dien tich: " << htg.tinhdientich() << endl;
	cout << "Chu vi: " << htg.tinhchuvi() << endl;
}
