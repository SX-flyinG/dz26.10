/* ��������:
������� 4 ���������
�������
����
�����������
��������

������ ������� ���� ��� �����
������ ����������� ��� ���������
������ ����������� � �����������
������ ����� �� ���� ���������� ��� ����
������ ����� �� ��������� ���������� ��� ����
������ ����� �� ������������� �������
������ ����� �� ������������� ���������*/

#include <iostream>

using namespace std;

/*������� ��������� � ������� ������� ��� ������ ���������� ��� ���������� ��������� � ������� ��������*/

struct Square {
private:
	int side;
public:
	Square() { // ������� ��������� �� ��������� ���������
		side = 15;
	}
	void assignSide(int side) { // ��������� ������� � ��������
		this->side = side;
	}

	void printSide() { // ������� ������� ��������
		cout << "Side of square : " << side << endl;
	}
	void Perrimiter() { // ������� �������� ��������
		cout << "Perimiter of square : " << side * 4 << endl;
	}
	void Arrea() { // ������� ������� ��������
		cout << "Arrea of square : " << side * side << endl;
	}
};

/*������� ��������� � ������� ������� ��� ������ ���������� ��� ���������� ��������� � ������� ��������������*/


struct Triangle {
private:
	int side;
	int secSide;
public:
	Triangle() { // ������ ��������� �������� ����������
		side = 15;
		secSide = 20;
	}
	void assignSides(int side, int secSide) { // ��������� ����� �������� ����������
		this->side = side;
		this->secSide = secSide;
	}

	void printSides() { // ������� ������� ��������������
		cout << "First side of triangle : " << side << endl;
		cout << "Second side of triangle : " << secSide << endl;
	}
	void Perrimiter() { // ������� �������� ��������������
		cout << "Perimiter of triangle : " << (side * 2) + (secSide * 2) << endl;
	}
	void Arrea() { // ������� ������� ��������������
		cout << "Arrea of triangle : " << side * secSide << endl;
	}
};

/*������� ��������� � ������� ������� ��� ������ ���������� ��� ���������� ��������� � ������� �����*/


struct Rhombus {
private:
	int diagonale;
	int diagonale2;
	int side;
public:
	Rhombus() { // ��������� ���������� �� ��������
		diagonale = 5;
		diagonale2 = 7;
		side = 15;
	}
	void assignSides(int diagonale, int diagonale2, int side) { // �������� ����� �������� ����������
		this->diagonale = diagonale;
		this->diagonale2 = diagonale2;
		this->side = side;
	}

	void printSides() { // ���������� ��� ��������� � ������� �����
		cout << "First diagonale of rhombus : " << diagonale << endl;
		cout << "Second diagonale of rhombus : " << diagonale2 << endl;
		cout << "Side of rhombus : " << side << endl;
	}
	void Perrimiter() { // ����� �������� �����
		cout << "Perimiter of rhombus : " << side * 4 << endl;
	}
	void Arrea() { // ����� ������� �����
		cout << "Arrea of rhombus : " << (diagonale * diagonale2 * (1 / 2)) << endl;
	}
};

/*������� ��������� � ������� ������� ��� ������ ���������� ��� ���������� ��������� � ������� ��������*/

struct Trapezoid {
private:
	int side;
	int side2;
	int side3;
	int side4;
	int hight;
public:
	Trapezoid() {  // ��������� �������� ���������� �� ��������
		side = 3;
		side2 = 4;
		side3 = 5;
		side4 = 6;
		hight = 12;
	}

	void assignSides(int side, int side2, int side3, int side4, int hight) { // ������ ����� �������� ���������� 
		this->side = side;
		this->side2 = side2;
		this->side3 = side3;
		this->side4 = side4;
		this->hight = hight;
	}

	void PrintSideOfTrapezoid() { // ������� ��� ������� � ������ ��������
		cout << "The lenght of first main of trapezoid : " << side << endl;
		cout << "The lenght of second main of trapezoid : " << side2 << endl;
		cout << "The lenght of thirad side of trapezoid : " << side3 << endl;
		cout << "The lenght of fourth side of trapezoid : " << side4 << endl;
		cout << "The lenght of hight of trapezoid : " << hight << endl;
	}

	void WritePerimiterOfrapezoid() { // ����� �������� ��������
		cout << "Permiter of tarpezoid is : " << side + side2 + side3 + side4 << endl;
	}

	void WriteArreaOfTrapezoid() { // ����� ������� ��������
		cout << "Arrea of trapezoid is : " << ((side + side2) / 2) * hight << endl;
	}
};



int main() {
	// ��������� ���� ��������� � ������ � ��� ������
	Square obj;
	Triangle objectis;
	Rhombus objecti;
	Trapezoid obj2;

	// ������� ���������� ������� ����� �������� ��� ������ ������� �����
	int side;
	cout << "Write a side of square : ";
	cin >> side;
	//������� ��� ����������
	obj.assignSide(side);
	obj.printSide();
	obj.Perrimiter();
	obj.Arrea();

	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

	//������� ������ ���������� ��� ������ ������ ��� ��������� ���� ��������
	int secSide;
	cout << "Write first side of triangle : ";
	cin >> side;
	cout << "Write first side of triangle : ";
	cin >> secSide;
	// �������  ��� ������ ����������
	objectis.assignSides(side, secSide);
	objectis.printSides();
	objectis.Perrimiter();
	objectis.Arrea();

	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

	//������� ������ ���������� ��� ������ ������� ��� ��������� ���� ��������

	int thirdSide;
	cout << "Write first diagonale of rhombus : ";
	cin >> side;
	cout << "Write second digonale of rhombus : ";
	cin >> secSide;
	cout << "Write a side of rhombus : ";
	cin >> thirdSide;
	// �������  ��� ������ ����������
	objecti.assignSides(side, secSide, thirdSide);
	objecti.printSides();
	objecti.Perrimiter();
	objecti.Arrea();

	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

	//������� ��������� � ����� ���������� ��� ��������� ������� � ������ ��� ��������� ���������

	int fourthSide;
	int hight;
	cout << "Write first main of trapezoid : ";
	cin >> side;
	cout << "Write second main of tapezoid : ";
	cin >> secSide;
	cout << "Write a third side of trapezoid : ";
	cin >> thirdSide;
	cout << "Write fourth side of tapezoid : ";
	cin >> fourthSide;
	cout << "Write a thight of trapezoid : ";
	cin >> hight;
	// �������  ��� ������ ����������
	obj2.assignSides(side, secSide, thirdSide , fourthSide , hight);
	obj2.PrintSideOfTrapezoid();
	obj2.WritePerimiterOfrapezoid();
	obj2.WriteArreaOfTrapezoid();
}
