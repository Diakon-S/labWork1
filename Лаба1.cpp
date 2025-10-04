#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	//ИДЗ) Инверсия битов порядка. Инвертируйте все биты порядка, не трогая знаковый бит и мантиссу.

	cout << "ИДЗ:" << endl;
	int numOfTask0;
	cout << "Введите номер типа данных:\n";
	cout << "1 - int\n";
	cout << "2 - float\n";
	cout << "3 - double\n";
	cin >> numOfTask0;
	switch (numOfTask0) {
		case 1: {
			int zeroValue;
			unsigned int zeroMask = 1 << sizeof(int) * 8 - 1;
			cout << "Введите число типа int: ";
			cin >> zeroValue;
			cout << "Двоичное представление этого числа в памяти с инвертированной экспонентой: ";
			for (int i = 0; i < sizeof(int) * 8; i++) {
				if (i > 0 && i < 9) {
					putchar(zeroValue & (zeroMask >> i) ? '0' : '1');
				}
				else {
					putchar(zeroValue & (zeroMask >> i) ? '1' : '0');
				}
				if (i % 8 == 0) {
					putchar(' ');
				}
			}
			cout << endl;
		}
			  break;
		case 2: {
			union {
				int zeroToolF;
				float fNumber0;
			} intFloatUnion0;
			unsigned int zeroMaskF = 1 << sizeof(float) * 8 - 1;
			cout << "Введите число типа float: ";
			cin >> intFloatUnion0.fNumber0;
			int zeroValueF = intFloatUnion0.zeroToolF;
			cout << "Двоичное представление этого числа в памяти с инвертированной экспонентой: ";
			for (int i = 0; i < sizeof(int) * 8; i++) {
				if (i > 0 && i < 9) {
					putchar(zeroValueF & (zeroMaskF >> i) ? '0' : '1');
				}
				else {
					putchar(zeroValueF & (zeroMaskF >> i) ? '1' : '0');
				}
				if (i % 8 == 0) {
					putchar(' ');
				}
			}
			cout << endl;
		}
			  break;
		case 3: {
			union {
				int zeroToolD[2];
				double dNumber0;
			} intDoubleUnion0;
			cout << "\nВведите число типа double: ";
			cin >> intDoubleUnion0.dNumber0;
			cout << "Двоичное представление этого числа в памяти с инвертированной экспонентой: ";
			for (int counter(1); counter > -1; counter--) {
				unsigned int doubleMask = 1 << (sizeof(int) * 8 - 1);
				for (int i(0); i < sizeof(int) * 8; i++) {
					if (i > 0 && i < 12) {
						putchar(intDoubleUnion0.zeroToolD[counter] & (doubleMask >> i) ? '0' : '1');
					}
					else {
						putchar(intDoubleUnion0.zeroToolD[counter] & (doubleMask >> i) ? '1' : '0');
					}
					if ((i == 0 || i == 1 || i == 11) && counter == 1) {
						putchar(' ');
					}
				}
			}
		}
			  break;
		default: {
			cout << "Неверно указан номер";
		}
	}
	cout << endl;

	//1) Вывести, сколько памяти (в байтах) на вашем компьютере отводится под различные типы данных со спецификаторами и без: int, short int, long int, float, double, long double, char и bool.

	cout << "\nЗадание 1:" << endl;
	cout << "Тип данных int занимает " << sizeof(int) << " байта" << endl;
	cout << "Тип данных short int занимает " << sizeof(short int) << " байта" << endl;
	cout << "Тип данных long int занимает " << sizeof(long int) << " байта" << endl;
	cout << "Тип данных float занимает " << sizeof(float) << " байта" << endl;
	cout << "Тип данных double занимает " << sizeof(double) << " байт" << endl;
	cout << "Тип данных long double занимает " << sizeof(long double) << " байт" << endl;
	cout << "Тип данных char занимает " << sizeof(char) << " байт" << endl;
	cout << "Тип данных bool занимает " << sizeof(bool) << " байт" << endl;

	//2) Вывести на экран двоичное представление в памяти (все разряды) целого числа. При выводе необходимо визуально обозначить знаковый разряд и значащие разряды отступами или цветом.

	cout << "\nЗадание 2:" << endl;
	int firstValue;
	unsigned int intMask = 1 << sizeof(int) * 8 - 1;
	cout << "Введите число типа int: ";
	cin >> firstValue;
	cout << "Двоичное представление этого числа в памяти: ";
	for (int i = 0; i < sizeof(int) * 8; i++) {
		putchar(firstValue & (intMask >> i) ? '1' : '0');
		if (i % 8 == 0) {
			putchar(' ');
		}
	}
	cout << endl;

	//3) Вывести на экран двоичное представление в памяти(все разряды) типа float. При выводе необходимо визуально обозначить знаковый разряд мантиссы, знаковый разряд порядка(если есть), мантиссу и порядок.

	cout << "\nЗадание 3:";
	union {
		int firstTool;
		float fNumber;
	} intFloatUnion;
	unsigned int floatMask = 1 << sizeof(float) * 8 - 1;
	cout << "Введите число типа float: ";
	cin >> intFloatUnion.fNumber;
	int secondValue = intFloatUnion.firstTool;
	cout << "Двоичное представление этого числа в памяти: ";
	for (int i = 0; i < sizeof(int) * 8; i++) {
		putchar(secondValue & (floatMask >> i) ? '1' : '0');
		if (i % 8 == 0) {
			putchar(' ');
		}
	}
	cout << endl;

	//4) Вывести на экран двоичное представление в памяти(все разряды) типа double.При выводе необходимо визуально обозначить знаковый разряд мантиссы, знаковый разряд порядка(если есть), мантиссу и порядок.
	cout << "\nЗадание 4:";
	union {
		int secondTool[2];
		double dNumber;
	} intDoubleUnion;
	cout << "\nВведите число типа double: ";
	cin >> intDoubleUnion.dNumber;
	cout << "Двоичное представление этого числа в памяти: ";
	for (int counter(1); counter > -1; counter--) {
		unsigned int doubleMask = 1 << (sizeof(int) * 8 - 1);
		for (int i(0); i < sizeof(int) * 8; i++) {
			putchar(intDoubleUnion.secondTool[counter] & (doubleMask >> i) ? '1' : '0');
			if ((i == 0 || i == 1 || i == 11) && counter == 1) {
				putchar(' ');
			}
		}
	}
	cout << "\nДанные представлены в формате: Знаковый разряд - Знаковый разряд порядка - Порядок - Мантисса" << endl;

	//5) Реализовать возможность произвольного изменения любого бита в введенном чиcле с использованием логических операций.

	cout << "\nЗадание 5:" << endl;
	int numOfTask5;
	cout << "Введите номер типа данных:\n";
	cout << "1 - int\n";
	cout << "2 - float\n";
	cin >> numOfTask5;
	switch (numOfTask5) {
		case 1: {
			int fourthValue, numBitI;
			unsigned int intMask2 = 1 << sizeof(int) * 8 - 1;
			cout << "Введите число типа int: ";
			cin >> fourthValue;
			cout << "Двоичное представление этого числа в памяти: ";
			for (int i = 0; i < sizeof(int) * 8; i++) {
				putchar(fourthValue & (intMask2 >> i) ? '1' : '0');
				if (i % 8 == 0) {
					putchar(' ');
				}
			}
			cout << endl;
			cout << "Введите индекс бита, который нужно инвертировать: ";
			cin >> numBitI;
			int newFourthValue;
			newFourthValue = fourthValue ^ (1 << numBitI);
			for (int i = 0; i < sizeof(int) * 8; i++) {
				putchar(newFourthValue & (intMask2 >> i) ? '1' : '0');
				if (i % 8 == 0) {
					putchar(' ');
				}
			}
			cout << endl;
		}
			  break;
		case 2: {
			int numBitF;
			union {
				int firstTool5;
				float fNumber5;
			} intFloatUnion;
			unsigned int floatMask5 = 1 << sizeof(float) * 8 - 1;
			cout << "Введите число типа float: ";
			cin >> intFloatUnion.fNumber5;
			int fourthValue = intFloatUnion.firstTool5;
			cout << "Двоичное представление этого числа в памяти: ";
			for (int i = 0; i < sizeof(int) * 8; i++) {
				putchar(fourthValue & (floatMask5 >> i) ? '1' : '0');
				if (i % 8 == 0) {
					putchar(' ');
				}
			}
			cout << endl;
			cout << "Введите индекс бита, который нужно инвертировать: ";
			cin >> numBitF;
			int newFourthValue;
			newFourthValue = fourthValue ^ (1 << numBitF);
			for (int i = 0; i < sizeof(int) * 8; i++) {
				putchar(newFourthValue & (floatMask5 >> i) ? '1' : '0');
				if (i % 8 == 0) {
					putchar(' ');
				}
			}
			cout << endl;
		}
			  break;
		default: {
			cout << "Неверно указан номер";
		}
		  return 0;
	}
}