/* Завдання:
Зробити 4 структури
Квадрат
ромб
Прямокутник
Трапеція

Додати відповідні змінні для сторін
Додати конструктор без параметрів
Додати конструктор з параметрами
Додати метод на вивід інформації про змінні
Додати метод на перезапис інформації про змінні
Додати метод на вираховування площини
Додати метод на вираховування периметру*/

#include <iostream>

using namespace std;

/*Создаем структуру в которой обьявим все нужные переменные для вычисления периметра и площади квадрата*/

struct Square {
private:
	int side;
public:
	Square() { // Создаем переменую за дефолтным значением
		side = 15;
	}
	void assignSide(int side) { // обьявляем сторону у квадрата
		this->side = side;
	}

	void printSide() { // Выводим сторону квадрата
		cout << "Side of square : " << side << endl;
	}
	void Perrimiter() { // Выводим периметр квадрата
		cout << "Perimiter of square : " << side * 4 << endl;
	}
	void Arrea() { // Выводим площадь квадрата
		cout << "Arrea of square : " << side * side << endl;
	}
};

/*Создаем структуру в которой обьявим все нужные переменные для вычисления периметра и площади прямоугольника*/


struct Triangle {
private:
	int side;
	int secSide;
public:
	Triangle() { // Выдаем дефолтное значение переменным
		side = 15;
		secSide = 20;
	}
	void assignSides(int side, int secSide) { // Обьявляем новое значение переменным
		this->side = side;
		this->secSide = secSide;
	}

	void printSides() { // Выводим стороны прямоугольника
		cout << "First side of triangle : " << side << endl;
		cout << "Second side of triangle : " << secSide << endl;
	}
	void Perrimiter() { // Выводим периметр прямоугольника
		cout << "Perimiter of triangle : " << (side * 2) + (secSide * 2) << endl;
	}
	void Arrea() { // Выводим площадь прямоугольника
		cout << "Arrea of triangle : " << side * secSide << endl;
	}
};

/*Создаем структуру в которой обьявим все нужные переменные для вычисления периметра и площади ромба*/


struct Rhombus {
private:
	int diagonale;
	int diagonale2;
	int side;
public:
	Rhombus() { // обьявляем переменные за дефолтом
		diagonale = 5;
		diagonale2 = 7;
		side = 15;
	}
	void assignSides(int diagonale, int diagonale2, int side) { // Обьявлем новое значение переменным
		this->diagonale = diagonale;
		this->diagonale2 = diagonale2;
		this->side = side;
	}

	void printSides() { // Выписываем все диагонали и сторону ромба
		cout << "First diagonale of rhombus : " << diagonale << endl;
		cout << "Second diagonale of rhombus : " << diagonale2 << endl;
		cout << "Side of rhombus : " << side << endl;
	}
	void Perrimiter() { // Пишем периметр ромба
		cout << "Perimiter of rhombus : " << side * 4 << endl;
	}
	void Arrea() { // Пишем площадб ромба
		cout << "Arrea of rhombus : " << (diagonale * diagonale2 * (1 / 2)) << endl;
	}
};

/*Создаем структуру в которой обьявим все нужные переменные для вычисления периметра и площади трапеции*/

struct Trapezoid {
private:
	int side;
	int side2;
	int side3;
	int side4;
	int hight;
public:
	Trapezoid() {  // Обьявляем значение переменных за дефолтом
		side = 3;
		side2 = 4;
		side3 = 5;
		side4 = 6;
		hight = 12;
	}

	void assignSides(int side, int side2, int side3, int side4, int hight) { // Выдаем новое значение переменным 
		this->side = side;
		this->side2 = side2;
		this->side3 = side3;
		this->side4 = side4;
		this->hight = hight;
	}

	void PrintSideOfTrapezoid() { // Выводим все стороны и высоту трапеции
		cout << "The lenght of first main of trapezoid : " << side << endl;
		cout << "The lenght of second main of trapezoid : " << side2 << endl;
		cout << "The lenght of thirad side of trapezoid : " << side3 << endl;
		cout << "The lenght of fourth side of trapezoid : " << side4 << endl;
		cout << "The lenght of hight of trapezoid : " << hight << endl;
	}

	void WritePerimiterOfrapezoid() { // Пишем периметр трапеции
		cout << "Permiter of tarpezoid is : " << side + side2 + side3 + side4 << endl;
	}

	void WriteArreaOfTrapezoid() { // Пишем площадь трапеции
		cout << "Arrea of trapezoid is : " << ((side + side2) / 2) * hight << endl;
	}
};



int main() {
	// Обьявляем наши структуры и выдаем к ним доступ
	Square obj;
	Triangle objectis;
	Rhombus objecti;
	Trapezoid obj2;

	// Создаем переменную которую будем вызывать для первой стороны фигур
	int side;
	cout << "Write a side of square : ";
	cin >> side;
	//Выводим всю информацию
	obj.assignSide(side);
	obj.printSide();
	obj.Perrimiter();
	obj.Arrea();

	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

	//Создаем вторую переменную для вторых сторон для остальных трех структур
	int secSide;
	cout << "Write first side of triangle : ";
	cin >> side;
	cout << "Write first side of triangle : ";
	cin >> secSide;
	// Выводим  всю нужную информацию
	objectis.assignSides(side, secSide);
	objectis.printSides();
	objectis.Perrimiter();
	objectis.Arrea();

	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

	//Создаем третию переменную для третей стороны для остальных двух структур

	int thirdSide;
	cout << "Write first diagonale of rhombus : ";
	cin >> side;
	cout << "Write second digonale of rhombus : ";
	cin >> secSide;
	cout << "Write a side of rhombus : ";
	cin >> thirdSide;
	// Выводим  всю нужную информацию
	objecti.assignSides(side, secSide, thirdSide);
	objecti.printSides();
	objecti.Perrimiter();
	objecti.Arrea();

	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";

	//Создаем чутвертую и пятую переменную для чутвертой стороны и высоты для последней структуры

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
	// Выводим  всю нужную информацию
	obj2.assignSides(side, secSide, thirdSide , fourthSide , hight);
	obj2.PrintSideOfTrapezoid();
	obj2.WritePerimiterOfrapezoid();
	obj2.WriteArreaOfTrapezoid();
}
