#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;

int main()
{
	/*int griv, kop, mash, sm;*/
	/*int d, r, S, P;
	float pi = 3.14; */
	/*double n1, n2, summa, proiz, average;*/
	/*double n1, n2, n3, summa, proiz, average;*/

	setlocale(LC_ALL, "Russian");
	/*int totalnumber = 0, currentnumber = 1;
	while (currentnumber != 0)
	{
		cout << "Введите число: ";
		cin >> currentnumber;
		totalnumber = totalnumber + currentnumber;
	}
	cout << totalnumber;*/
	/*int start, end, num, total = 0;
	cout << "Введите начальное число: ";
	cin >> start;
	cout << "Введите конечное число: ";
	cin >> end;
	num = start;
	while (num != (end + 1))
	{
		total = total + num;
		num = num + 1;
	}
	cout << total;*/
	/*int start, end, num;
	cout << "Введите начальное число: ";
	cin >> start;
	cout << "Введите конечное число: ";
	cin >> end;

	cout << "Четные числа диапазона: " << endl;
	num = start;
	while (num != (end + 1))
	{
		if (num % 2 == 0)
		{
			cout << num << endl;
		}
		num = num + 1;
	}
	cout << "Нечетные числа диапазона: " << endl;
	num = start;
	while (num != (end + 1))
	{
		if (num % 2 != 0)
		{
			cout << num << endl;
		}
		num = num + 1;
	}
	cout << "Числа кратные семи диапазона: " << endl;
	num = start;
	while (num != (end + 1))
	{
		if (num % 7 == 0)
		{
			cout << num << endl;
		}
		num = num + 1;
	}*/
	/*int Number, EndNum = 0;
	cout << "Введите число: ";
	cin >> Number;
	while (EndNum != (Number + 1))
	{
		cout << EndNum << endl;
		EndNum = EndNum + 1;
	}*/
	/*int ConsoleBGColor, TextColor, TextSize;
	cout << "Выберите цвет консоли.\n0 — черный\n1 — синий\n2 — зеленый\n3 — голубой\n4 — красный\n5 — лиловый\n6 — желтый\n7 — белый\n8 — серый\n9 — свело - синий\n10 — светло - зеленый\n11 — светло - голубой\n12 — светло - красный\n13 — светло - желтый\n14 — ярко - белый\n\nВаш выбор: ";
	cin >> ConsoleBGColor;
	switch (ConsoleBGColor)
	{
	case 0:
		system("color 00");
		cout << "Hello World!";
		break;
	case 1:
		system("color 10");
		cout << "Hello World!";
		break;
	case 2:
		system("color 20");
		cout << "Hello World!";
		break;
	case 3:
		system("color 30");
		cout << "Hello World!";
		break;
	case 4:
		system("color 40");
		cout << "Hello World!";
		break;
	case 5:
		system("color 50");
		cout << "Hello World!";
		break;
	case 6:
		system("color 60");
		cout << "Hello World!";
		break;
	case 7:
		system("color 70");
		cout << "Hello World!";
		break;
	case 8:
		system("color 80");
		cout << "Hello World!";
		break;
	case 9:
		system("color 90");
		cout << "Hello World!";
		break;
	case 10:
		system("color A0");
		cout << "Hello World!";
		break;
	case 11:
		system("color B0");
		cout << "Hello World!";
		break;
	case 12:
		system("color C0");
		cout << "Hello World!";
		break;
	case 13:
		system("color E0");
		cout << "Hello World!";
		break;
	case 14:
		system("color F0");
		cout << "Hello World!";
		break;
	default:
		break;
	}
	cout << "Выберите цвет шрифта.\n0 — черный\n1 — синий\n2 — зеленый\n3 — голубой\n4 — красный\n5 — лиловый\n6 — желтый\n7 — белый\n8 — серый\n9 — свело - синий\n10 — светло - зеленый\n11 — светло - голубой\n12 — светло - красный\n13 — светло - желтый\n14 — ярко - белый\n\nВаш выбор: ";
	cin >> TextColor;
	switch (TextColor)
	{
	case 0:
		system("color 00");
		cout << "Hello World!";
		break;
	case 1:
		system("color 01");
		cout << "Hello World!";
		break;
	case 2:
		system("color 02");
		cout << "Hello World!";
		break;
	case 3:
		system("color 03");
		cout << "Hello World!";
		break;
	case 4:
		system("color 04");
		cout << "Hello World!";
		break;
	case 5:
		system("color 05");
		cout << "Hello World!";
		break;
	case 6:
		system("color 06");
		cout << "Hello World!";
		break;
	case 7:
		system("color 07");
		cout << "Hello World!";
		break;
	case 8:
		system("color 08");
		cout << "Hello World!";
		break;
	case 9:
		system("color 09");
		cout << "Hello World!";
		break;
	case 10:
		system("color 0A");
		cout << "Hello World!";
		break;
	case 11:
		system("color 0B");
		cout << "Hello World!";
		break;
	case 12:
		system("color 0C");
		cout << "Hello World!";
		break;
	case 13:
		system("color 0E");
		cout << "Hello World!";
		break;
	case 14:
		system("color 0F");
		cout << "Hello World!";
		break;
	default:
		break;
	}*/


	/*double n1, n2, result;
	int move;
	cout << "Введите первое число: ";
	cin >> n1;
	cout << "Введите второе число: ";
	cin >> n2;
	cout << "Выберите действие.\n1. +\n2. -\n3. *\n4. /\nВаш выбор: ";
	cin >> move;
	if (move == 1)
	{
		result = n1 + n2;
	}
	if (move == 2)
	{
		result = n1 - n2;
	}
	if (move == 3)
	{
		result = n1 * n2;
	}
	if (move == 4)
	{
		result = n1 / n2;
	}
	cout << "Ответ: " << result;*/
	/*int number;
	cout << "Введите число: ";
	cin >> number;
	if (number % 2 == 0)
	{
		number = number * 3;
		cout << number;
	}
	else
	{
		number = number / 2;
		cout << number;
	}*/
	/*double gr1, gr2, gr3, gr4, gr5, avggr;
	cout << "Введите первую оценку: ";
	cin >> gr1;	
	cout << "Введите вторую оценку: ";
	cin >> gr2;
	cout << "Введите третью оценку: ";
	cin >> gr3;
	cout << "Введите четвертую оценку: ";
	cin >> gr4;
	cout << "Введите пятую оценку: ";
	cin >> gr5;
	avggr = (gr1 + gr2 + gr3 + gr4 + gr5) / 5;
	if (avggr >= 4)
	{
		cout << "Средний балл: " << avggr << " (Допущен(а))";
	}
	else
	{
		cout << "Средний балл: " << avggr << " (НЕ Допущен(а))";
	}*/
	/*int n1, n2;
	cout << "Введите первое число: ";
	cin >> n1;
	cout << "Введите второе число: ";
	cin >> n2;
	if (n1 == n2)
	{
		cout << "Числа равны!";
	}
	if (n1 > n2)
	{
		cout << n2 << " " << n1;
	}
	else
	{
		cout << n1 << " " << n2;
	}*/
	/*int n1;
	cout << "Введите число: ";
	cin >> n1;
	if (n1 == 0)
	{
		cout << "Число равно нулю!";
	}
	if (n1 > 0)
	{
		cout << "Число положительное!";
	}
	if (n1 < 0)
	{
		cout << "Число отрицательное!";
	}*/
	/*int n1, n2;
	cout << "Введите первое число: ";
	cin >> n1;
	cout << "Введите второе число: ";
	cin >> n2;
	if (n1 == n2)
	{
		cout << "Числа равны!";
	}
	if (n1 > n2)
	{
		cout << "Первое число больше второго!";
	}
	else
	{
		cout << "Первое число меньше второго!";
	}*/
	/*int number;
	cout << "Введите число: ";
	cin >> number;
	if (number % 2 == 0)
	{
		cout << "Число чётное!";
	}
	else
	{
		cout << "Число нечётное!";
	}*/


	/*double gbfilm, mgbps, timeneeded, gps;
	cout << "Сколько весит фильм? (ГБ): ";
	cin >> gbfilm;	
	cout << "Скорость вашего интернета (в мегабитах в секунду): ";
	cin >> mgbps;
	gps = mgbps / 8000;
	timeneeded = gps * 60;
	cout << "Часов нужно будет: " << timeneeded;*/
	//double gb, disketmemory = 0.024;
	//int disket;
	//cout << "Сколько гигабайт весит фильм?: ";
	//cin >> gb;
	//disket = gb / disketmemory;
	//cout << "Понадобится " << disket << " дискет по 2.44 мб.";
	/*double fTrading, totalgot, result;

	cout << "Сколько менеджер заработал с продаж? ($): ";
	cin >> totalgot;
	fTrading = totalgot * 0.05;
	result = fTrading + 100;
	cout << "Итог: " << result << "$";*/
	//int pcneed;
	//double discount, realdiscount, cost, totalcost;
	//cout << "Сколько ноутбуков нужно?: ";
	//cin >> pcneed;
	//cout << "Сколько стоит 1 ноутбук?: ";
	//cin >> cost;
	//cout << "Введите процент скидки (от 1-100): ";
	//cin >> discount;
	//realdiscount = 1 - (discount / 100);
	//totalcost = cost * pcneed * realdiscount;
	//cout << realdiscount << endl;
	//cout << "Итоговая стоимость за " << pcneed << " ноутбуков: " << totalcost;
	/*cout << "Введите первое число: ";
	cin >> n1;
	cout << "Введите второе число: ";
	cin >> n2;	
	cout << "Введите третье число: ";
	cin >> n3;
	summa = n1 + n2 + n3;
	proiz = n1 * n2 * n3;
	average = n1 + n2 + n3 / 3;
	cout << "Сумма: " << summa << endl;
	cout << "Произведение: " << proiz << endl;
	cout << "Среднее арифметическое: " << average << endl;*/
	/*cout << "Введите первое число: ";
	cin >> n1;
	cout << "Введите второе число: ";
	cin >> n2;
	summa = n1 + n2;
	proiz = n1 * n2;
	average = n1 + n2 / 2;
	cout << "Сумма: " << summa << endl;
	cout << "Произведение: " << proiz << endl;
	cout << "Среднее арифметическое: " << average << endl;*/
	/*cout << "Введите диаметр окружности: ";
	cin >> d;
	r = d / 2;
	P = r * (2 * pi);
	S = pi * (r * r);
	cout << "Периметр окружности: " << P << endl;
	cout << "Площадь окружности: " << S << endl;*/

	
	
	/*cout << "Вычисление расстояние между населенными пунктами" << endl;
	cout << "Введите исходные данные: " << endl;
	cout << "Масштаб карты (количество километров в одном сантиметре) -> ";
	cin >> mash;
	cout << "Расстояние между точками, изображающие населенные пункты (см) -> ";
	cin >> sm;*/
	/*cout << "Введите кол-во гривень: ";
	cin >> griv;
	cout << "Введите кол-во копеек: ";
	cin >> kop;
	while (kop >= 100)
	{
		kop -= 100;
		griv += 1;
	}
	cout << griv << " грн. " << kop << " коп.";*/
	/*cout << "Name\t\t: \"The war and the peace\"" << endl;
	cout << "Author\t\t: L.N. Tolstoy" << endl;
	cout << "Izdatelstvo\t: Piter" << endl;
	cout << "Pages\t\t: 500." << endl;
	cout << "\n" << (char)201 << (char)205 << (char)205 << (char)205 << (char)205 << (char)205 << (char)187;
	setlocale(LC_ALL, "Russian");
	Beep(400, 100);
	Beep(400, 100);
	Beep(400, 100);
	cout << "\n\7\7\7\"У лукоморья дуб зеленый," << endl;
	Beep(400, 100);
	Beep(400, 100);
	Beep(400, 100);
	cout << "\7\7\7Златая цепь на дубе том," << endl;
	Beep(400, 100);
	Beep(400, 100);
	Beep(400, 100);
	cout << "\7\7\7И днём и ночью кот ученый" << endl;
	Beep(400, 100);
	Beep(400, 100);
	Beep(400, 100);
	cout << "\7\7\7Всё ходит по цепи кругом.\"" << endl;*/
	/*cout << "\t\t  \"Hello, World!\"" << endl;
	cout << "\t\t/Matthew Pastukhov/\n"<< endl;

	cout << "   Hello, World!"<< endl;
	cout << " \\\\Chichev Mister\\\\\n"<< endl;

	cout << "To be or not to be: that is the question:\n\tWhether 'tis nobler in the mind to suffer\n\t\tThe slings to arrows of outrageous fortune,\n\t\t\tOr to take arms against a sea of troubles,\n\t\t\t\tAnd by opposing end then?\n William Shakespeare.";
	*/
	/*int actualnumber, guess;
		int game = 1;
		srand(time(NULL));
		actualnumber = rand() % 10;
		while (game == 1)
		{
			cout << "Угадай число: ";
			cin >> guess;
			if (actualnumber < guess)
			{
				cout << "Загаданное число меньше."<< endl;
			}
			if (actualnumber > guess)
			{
				cout << "Загаданное число больше."<< endl;
			}
			if (actualnumber == guess)
			{
				cout << "Это оно!";
				game = 0;
			}
			try
			{
				if (guess < 0)
					throw "Число больше нуля.";
			}
			catch (const char* exception)
			{
				cerr << "Ошибка: " << exception << '\n';
			}
		}*/
	/*	setlocale(LC_ALL, "Russian");
			int num;
			cout << "Введите число: ";
			cin >> num;
			try
			{
				if (num < 0.0)
					throw "Невозможно вычислить корень из отрицательного числа.";
				cout << "Корень числа " << num << " : " << sqrt(num) << '\n';
			}
			catch(const char* exception)
			{
				cerr << "Ошибка: " << exception << '\n';
			}*/
}