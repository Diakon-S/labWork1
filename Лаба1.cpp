#include <iostream>
using namespace std;

int main() {
	setlocale(0, "");

	//���) �������� ����� �������. ������������ ��� ���� �������, �� ������ �������� ��� � ��������.

	cout << "���:" << endl;
	int numOfTask0;
	cout << "������� ����� ���� ������:\n";
	cout << "1 - int\n";
	cout << "2 - float\n";
	cout << "3 - double\n";
	cin >> numOfTask0;
	switch (numOfTask0) {
		case 1: {
			int zeroValue;
			unsigned int zeroMask = 1 << sizeof(int) * 8 - 1;
			cout << "������� ����� ���� int: ";
			cin >> zeroValue;
			cout << "�������� ������������� ����� ����� � ������ � ��������������� �����������: ";
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
			cout << "������� ����� ���� float: ";
			cin >> intFloatUnion0.fNumber0;
			int zeroValueF = intFloatUnion0.zeroToolF;
			cout << "�������� ������������� ����� ����� � ������ � ��������������� �����������: ";
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
			cout << "\n������� ����� ���� double: ";
			cin >> intDoubleUnion0.dNumber0;
			cout << "�������� ������������� ����� ����� � ������ � ��������������� �����������: ";
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
			cout << "������� ������ �����";
		}
	}
	cout << endl;

	//1) �������, ������� ������ (� ������) �� ����� ���������� ��������� ��� ��������� ���� ������ �� ��������������� � ���: int, short int, long int, float, double, long double, char � bool.

	cout << "\n������� 1:" << endl;
	cout << "��� ������ int �������� " << sizeof(int) << " �����" << endl;
	cout << "��� ������ short int �������� " << sizeof(short int) << " �����" << endl;
	cout << "��� ������ long int �������� " << sizeof(long int) << " �����" << endl;
	cout << "��� ������ float �������� " << sizeof(float) << " �����" << endl;
	cout << "��� ������ double �������� " << sizeof(double) << " ����" << endl;
	cout << "��� ������ long double �������� " << sizeof(long double) << " ����" << endl;
	cout << "��� ������ char �������� " << sizeof(char) << " ����" << endl;
	cout << "��� ������ bool �������� " << sizeof(bool) << " ����" << endl;

	//2) ������� �� ����� �������� ������������� � ������ (��� �������) ������ �����. ��� ������ ���������� ��������� ���������� �������� ������ � �������� ������� ��������� ��� ������.

	cout << "\n������� 2:" << endl;
	int firstValue;
	unsigned int intMask = 1 << sizeof(int) * 8 - 1;
	cout << "������� ����� ���� int: ";
	cin >> firstValue;
	cout << "�������� ������������� ����� ����� � ������: ";
	for (int i = 0; i < sizeof(int) * 8; i++) {
		putchar(firstValue & (intMask >> i) ? '1' : '0');
		if (i % 8 == 0) {
			putchar(' ');
		}
	}
	cout << endl;

	//3) ������� �� ����� �������� ������������� � ������(��� �������) ���� float. ��� ������ ���������� ��������� ���������� �������� ������ ��������, �������� ������ �������(���� ����), �������� � �������.

	cout << "\n������� 3:";
	union {
		int firstTool;
		float fNumber;
	} intFloatUnion;
	unsigned int floatMask = 1 << sizeof(float) * 8 - 1;
	cout << "������� ����� ���� float: ";
	cin >> intFloatUnion.fNumber;
	int secondValue = intFloatUnion.firstTool;
	cout << "�������� ������������� ����� ����� � ������: ";
	for (int i = 0; i < sizeof(int) * 8; i++) {
		putchar(secondValue & (floatMask >> i) ? '1' : '0');
		if (i % 8 == 0) {
			putchar(' ');
		}
	}
	cout << endl;

	//4) ������� �� ����� �������� ������������� � ������(��� �������) ���� double.��� ������ ���������� ��������� ���������� �������� ������ ��������, �������� ������ �������(���� ����), �������� � �������.
	cout << "\n������� 4:";
	union {
		int secondTool[2];
		double dNumber;
	} intDoubleUnion;
	cout << "\n������� ����� ���� double: ";
	cin >> intDoubleUnion.dNumber;
	cout << "�������� ������������� ����� ����� � ������: ";
	for (int counter(1); counter > -1; counter--) {
		unsigned int doubleMask = 1 << (sizeof(int) * 8 - 1);
		for (int i(0); i < sizeof(int) * 8; i++) {
			putchar(intDoubleUnion.secondTool[counter] & (doubleMask >> i) ? '1' : '0');
			if ((i == 0 || i == 1 || i == 11) && counter == 1) {
				putchar(' ');
			}
		}
	}
	cout << "\n������ ������������ � �������: �������� ������ - �������� ������ ������� - ������� - ��������" << endl;

	//5) ����������� ����������� ������������� ��������� ������ ���� � ��������� ��c�� � �������������� ���������� ��������.

	cout << "\n������� 5:" << endl;
	int numOfTask5;
	cout << "������� ����� ���� ������:\n";
	cout << "1 - int\n";
	cout << "2 - float\n";
	cin >> numOfTask5;
	switch (numOfTask5) {
		case 1: {
			int fourthValue, numBitI;
			unsigned int intMask2 = 1 << sizeof(int) * 8 - 1;
			cout << "������� ����� ���� int: ";
			cin >> fourthValue;
			cout << "�������� ������������� ����� ����� � ������: ";
			for (int i = 0; i < sizeof(int) * 8; i++) {
				putchar(fourthValue & (intMask2 >> i) ? '1' : '0');
				if (i % 8 == 0) {
					putchar(' ');
				}
			}
			cout << endl;
			cout << "������� ������ ����, ������� ����� �������������: ";
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
			cout << "������� ����� ���� float: ";
			cin >> intFloatUnion.fNumber5;
			int fourthValue = intFloatUnion.firstTool5;
			cout << "�������� ������������� ����� ����� � ������: ";
			for (int i = 0; i < sizeof(int) * 8; i++) {
				putchar(fourthValue & (floatMask5 >> i) ? '1' : '0');
				if (i % 8 == 0) {
					putchar(' ');
				}
			}
			cout << endl;
			cout << "������� ������ ����, ������� ����� �������������: ";
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
			cout << "������� ������ �����";
		}
		  return 0;
	}
}