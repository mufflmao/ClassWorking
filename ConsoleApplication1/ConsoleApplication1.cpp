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

	int grades[9], menuchoice, IsTeacher, uselessvar, examreplayelementnubmer, examreplayreplace;
	cout << "Вы учитель? (0 если нет, 1 если да): ";
	cin >> IsTeacher;
	system("cls");
	if (IsTeacher == 1)
	{
		while (true)
		{
			cout << "Учительское меню.\n\n1. Выставить оценки.\n2. Перейти в ученическое меню.\n\nВаш выбор: ";
			cin >> menuchoice;
			system("cls");
			if (menuchoice == 1)
			{
				for (int i = 0; i < 10; i++)
				{
					cout << "Поочередно вводите оценки." << endl;
					cout << "Оценка " << i + 1 << ": ";
					cin >> grades[i];
					system("cls");
				}
			}
			if (menuchoice == 2)
			{
				IsTeacher = 0;
				break;
			}
		}
	}
	if (IsTeacher == 0)
	{
		while (true)
		{
			cout << "Главное меню.\n\n1. Вывод оценок.\n2. Пересдача экзамена\n3. Информация о степендии.\n\nВыберите пункт меню: ";
			cin >> menuchoice;
			system("cls");
			if (menuchoice == 1)
			{
				for (int i = 0; i < 10; i++)
				{
					cout << i + 1 << " оценка : " << grades[i] << endl;
				}
				cin >> uselessvar;
				system("cls");
			}
			if (menuchoice == 2)
			{
				cout << "Текущие оценки:\n\n";
				for (int i = 0; i < 10; i++)
				{
					cout << i + 1 << " оценка : " << grades[i] << endl;
				}
				cout << "Выберите номер оценки для исправления: ";
				cin >> examreplayelementnubmer;
				system("cls");
				for (int i = 0; i < 10; i++)
				{
					cout << i + 1 << " оценка : " << grades[i] << endl;
				}
				cout << "На какую оценку ее заменяем?: ";
				cin >> examreplayreplace;
				system("cls");
				grades[examreplayelementnubmer - 1] = examreplayreplace;
				cout << "Готово.";
				cin >> uselessvar;
				system("cls");
			}
			if (menuchoice == 3)
			{
				int avgpoint = 0;
				for (int i = 0; i < 10; i++)
				{
					avgpoint = avgpoint + grades[i];
				}
				avgpoint = avgpoint / 11;
				cout << "Ваш средний балл: " << avgpoint << endl;
				if (avgpoint > 10.7)
				{
					cout << "У вас выходит степендия.";
				}
				else
				{
					cout << "У вас не выходит степендия.";
				}
				cin >> uselessvar;
				system("cls");
			}
		}
	}
	/*int x[10] = { 5,3,5,6,8,1,2,6,8,1 };
	for (int i = 1; i < 10; i++)
		for (int j = i; j > 0 && x[j - 1] > x[j]; j--)
		{
			swap(x[j - 1], x[j]);
		}
	for (int i = 0; i < 10; i++) {
		cout << x[i] << " ";
	}*/
	/*int digitals[10];

	cout << "Введите 10 чисел для заполнения массива: " << endl;

	for (int i = 0; i < 10; i++) {
		cin >> digitals[i];
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9; j++) {
			if (digitals[j] > digitals[j + 1]) {
				int b = digitals[j];
				digitals[j] = digitals[j + 1];
				digitals[j + 1] = b;
			}
		}
	}

	cout << "Массив в отсортированном виде: ";

	for (int i = 0; i < 10; i++) {
		cout << digitals[i] << " ";
	}*/

	/*srand(time(0));
	int const n = 5;
	int arr1[n];
	int arr2[n];
	int arr[10];
	int idx = 0;
	cout << "Массив 1 " << endl;
	for (int i = 0; i < n; i++) {
		arr1[i] = rand() % 10 - 5;
		cout << "[" << i << "] = " << arr1[i] << endl;
	}
	cout << endl;
	cout << "Массив 2 " << endl;
	for (int i = 0; i < n; i++) {
		arr2[i] = rand() % 10 - 5;
		cout << "[" << i << "] = " << arr2[i] << endl;
	}
	for (int i = 0; i < n; i++) {
		if (arr1[i] > 0) {
			arr[idx] = arr1[i];
			idx++;
		}
		if (arr2[i] > 0) {
			arr[idx] = arr2[i];
			idx++;
		}
	}

	for (int i = 0; i < n; i++) {
		if (arr1[i] == 0) {
			arr[idx] = arr1[i];
			idx++;
		}
		if (arr2[i] == 0) {
			arr[idx] = arr2[i];
			idx++;
		}
	}

	for (int i = 0; i < n; i++) {
		if (arr1[i] < 0) {
			arr[idx] = arr1[i];
			idx++;
		}
		if (arr2[i] < 0) {
			arr[idx] = arr2[i];
			idx++;
		}
	}
	cout << "Массив 3 = " << endl;
	for (int i = 0; i < 10; i++) {
		cout << "[" << i << "] = " << arr[i] << endl;
	}*/
	/*srand(time(0));
	const int n(10);
	int arr[n];
	cout << "Your arr : ";
	for (int i = 0; i < n; ++i) {
		arr[i] = rand() % 5;
		cout << arr[i] << " ";
	}
	for (int i = 0; i < n; ++i)
	{
		if (arr[i] == 0)
		{
			for (int j = i; j < n - 1; ++j)
			{
				arr[j] = arr[j + 1];
			}
			arr[n - 1] = -1;
			--i;
		}
	}
	cout << "\nAfter :\n";
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
		cout << endl;
	}*/


	/*int width, length; (НЕДАДЕЛАННАЯ ШТУКА)
	char symbol;
	cout << "Введите ширину: ";
	cin >> width;
	cout << "Введите длину: ";
	cin >> length;
	cout << "Введите символ: ";
	cin >> symbol;
	length = length - 2;
	cout << symbol * width;
	for (int i = 0; i <= length - 2; i++)
	{
		cout << symbol << " " * length;
	}*/

	/*int i, j, N = 9;
	int center = N / 2;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
		{
			if (i <= center)
			{
				if (j >= center - i && j <= center + i)
					cout << "*";
				else
					cout << " ";
			}
			else
			{
				if (j >= center + i - N + 1 && j <= center - i + N - 1)
					cout << "*";
				else
					cout << " ";
			}
		}
		cout << endl;
	}
	system("PAUSE");*/
	/*int num1, num2, questions, qasked, difficulty, realanswer, useranswer, points = 0, grade = 0;
	cout << "ДАННЫЙ КАЛЬКУЛЯТОР НЕДОПИСАН, ПОТОМУ ЧТО АВТОРУ ЛЕНЬ!";
	cout << "Добро пожаловать на проверку знаний таблицы умножения.\n\nВыберите сложность (1-3): ";
	cin >> difficulty;
	if (difficulty == 1)
	{
		questions = 3;
		for (int qasked = 0; qasked < questions; qasked++)
		{
			srand(time(NULL));
			num1 = rand() % 5 + 1;
			num2 = rand() % 5 + 1;
			realanswer = num1 * num2;
			cout << num1 << " * " << num2 << " = ";
			cin >> useranswer;
			if (useranswer == realanswer)
			{
				points = points + 1;
				cout << "Ответ правильный!" << endl;
			}
			else
			{
				cout << "Ответ неправильный!" << endl;
			}
		}
		if (points == 3)
		{
			grade = 5;
		}
		if (points == 2)
		{
			grade = 4;
		}
		if (points == 1)
		{
			grade = 3;
		}
		if (points == 0)
		{
			grade = 2;
		}
		cout << "Ваша оценка: " << grade;
	}
	if (difficulty == 2)
	{
		questions = 4;
		for (int qasked = 0; qasked <= questions; qasked++)
		{
			srand(time(NULL));
			num1 = rand() % 20 + 1;
			num2 = rand() % 20 + 1;
			realanswer = num1 * num2;
			cout << num1 << " * " << num2 << " = ";
			cin >> useranswer;
			if (useranswer == realanswer)
			{
				points++;
				cout << "Ответ правильный!" << endl;
			}
			else
			{
				cout << "Ответ неправильный!" << endl;
			}
		}
		if (points == 4)
		{
			grade = 5;
		}
		if (points == 3)
		{
			grade = 4;
		}
		if (points == 2)
		{
			grade = 4;
		}
		if (points == 1)
		{
			grade = 3;
		}
		if (points == 0)
		{
			grade = 2;
		}
		cout << "Ваша оценка: " << grade;

	}
	if (difficulty == 3)
	{
		questions = 5;
		for (int qasked = 0; qasked <= questions; qasked++)
		{
			srand(time(NULL));
			num1 = rand() % 100 + 1;
			num2 = rand() % 100 + 1;
			realanswer = num1 * num2;
			cout << num1 << " * " << num2 << " = ";
			cin >> useranswer;
			if (useranswer == realanswer)
			{
				points++;
				cout << "Ответ правильный!" << endl;
			}
			else
			{
				cout << "Ответ неправильный!" << endl;
			}
		}
		grade = points;
		cout << "Ваша оценка: " << grade;
	}*/
	/*int xmasballs = 100, xmastree = 20, xmasstar = 35, xmassparklers = 400;
	double menuchoice, product, amount, discount = 0.9, price;
	int xmasballsPrice = 3, xmastreePrice = 100, xmasstarPrice = 5, xmassparklersPrice = 1;
	string productName;
	while (1 != 0)
	{
		cout << "Главное меню.\n\nВыберите пункт меню.\n1. Сделать продажные рассчеты.\n2. Посмотреть наличие товаров.\n3. Завоз товаров.\n\nСегодня у нас скидка 10% на все.\n\nВаш выбор: ";
		cin >> menuchoice;
		system("cls");
		if (menuchoice == 1)
		{
			cout << "1. Новогодние шарики.\n2. Елки\n3. Звезды на елку\n4. Бенгальские огни\n\nВыберите товар: ";
			cin >> product;
			system("cls");
			cout << "Количество продукта: ";
			cin >> amount;
			system("cls");
			if (product == 1)
			{
				if (xmasballs - amount < 0)
				{
					cout << "Ошибка! Недостаток товара!";
					cin >> product;
				}
				else
				{
					price = xmasballsPrice * amount * discount;
					xmasballs = xmasballs - amount;
					productName = "Новогодние шарики";
					cout << "Чек.\n\n" << productName << " - " << amount << "шт.\n\nК оплате: " << price << "$.\nОжидание подтверждения оплаты...";
					cin >> product;
				}
			}
			if (product == 2)
			{
				if (xmastree - amount < 0)
				{
					cout << "Ошибка! Недостаток товара!";
					cin >> product;
				}
				else
				{
					price = xmastreePrice * amount * discount;
					xmastree = xmastree - amount;
					productName = "Новогодняя елка";
					cout << "Чек.\n\n" << productName << " - " << amount << "шт.\n\nК оплате: " << price << "$.\nОжидание подтверждения оплаты...";
					cin >> product;
				}
			}
			if (product == 3)
			{
				if (xmasstar - amount < 0)
				{
					cout << "Ошибка! Недостаток товара!";
					cin >> product;
				}
				else
				{
					price = xmasstarPrice * amount * discount;
					xmasstar = xmasstar - amount;
					productName = "Новогодняя звезда на елку";
					cout << "Чек.\n\n" << productName << " - " << amount << "шт.\n\nК оплате: " << price << "$.\nОжидание подтверждения оплаты...";
					cin >> product;
				}
			}
			if (product == 4)
			{
				if (xmassparklers - amount < 0)
				{
					cout << "Ошибка! Недостаток товара!";
					cin >> product;
				}
				else
				{
					price = xmassparklersPrice * amount * discount;
					xmassparklers = xmassparklers - amount;
					productName = "Бенгальские огни";
					cout << "Чек.\n\n" << productName << " - " << amount << "шт.\n\nК оплате: " << price << "$.\nОжидание подтверждения оплаты...";
					cin >> product;
				}
			}

			system("cls");
		}
		if (menuchoice == 2)
		{
			cout << "Меню наличия товаров.\n\nНовогодние шарики - " << xmasballs << "шт.\nЕлки - " << xmastree << "шт.\nЗвезды на елку - " << xmasstar << "шт.\nБенгальские огни - " << xmassparklers << "шт.\n\nЧтобы выйти в главное меню введите 0...\n";
			cin >> menuchoice;
			system("cls");
		}
		if (menuchoice == 3)
		{
			cout << "Что завозим?\n\n1. Новогодние шарики.\n2. Елки\n3. Звезды на елку\n4. Бенгальские огни\n\nВыберите товар: ";
			cin >> product;
			system("cls");
			cout << "Сколько завезли?: ";
			cin >> amount;
			system("cls");
			if (product == 1)
			{
				xmasballs = xmasballs + amount;
			}
			if (product == 2)
			{
				xmastree = xmastree + amount;
			}
			if (product == 3)
			{
				xmasstar = xmasstar + amount;
			}
			if (product == 4)
			{
				xmassparklers = xmassparklers + amount;
			}
			cout << "Готово!";
			cin >> product;
			system("cls");
		}
	}*/
	/*int fnum, snum, midnum = 0, checknum;
	cout << "Число начала диапазона: ";
	cin >> fnum;
	cout << "Число конца диапазона: ";
	cin >> snum;
	midnum = snum + 2;
	checknum = snum + 1;
	while (checknum != midnum)
	{
		cout << "Число в диапазоне: ";
		cin >> midnum;
		for (int checknum = fnum; checknum <= snum; checknum++)
		{
			if (checknum == midnum)
			{
				cout << "Число присутствует в диапазоне.\n";
			}
		}
	}*/


	/*int valuefrom, valueto;
	double valuenum;
	cout << "Выберите валюту для перевода ИЗ:\n1. Евро\n2. Рубли\n3. Тенге\nВаш выбор: ";
	cin >> valuefrom;
	cout << "Количество: ";
	cin >> valuenum;
	cout << "Выберите валюту для перевода В:\n1. Евро\n2. Рубли\n3. Тенге\nВаш выбор: ";
	cin >> valueto;
	if (valuefrom == 1)
	{
		if (valueto == 1)
		{
			cout << "Ошибка: выбраны две одинаковые валюты.";
		}
		if (valueto == 2)
		{
			valuenum = valuenum * 90;
			cout <<"Ответ: " << valuenum << "RUB";
		}
		if (valueto == 3)
		{
			valuenum = valuenum * 524;
			cout << "Ответ: " << valuenum << "KZT";
		}
	}	
	if (valuefrom == 2)
	{
		if (valueto == 1)
		{
			valuenum = valuenum * 0.011;
			cout << "Ответ: " << valuenum << "EUR";
		}
		if (valueto == 2)
		{
			cout << "Ошибка: выбраны две одинаковые валюты.";
		}
		if (valueto == 3)
		{
			valuenum = valuenum * 5.83;
			cout << "Ответ: " << valuenum << "KZT";
		}
	}	
	if (valuefrom == 3)
	{
		if (valueto == 1)
		{
			valuenum = valuenum * 0.0019;
			cout << "Ответ: " << valuenum << "EUR";
		}
		if (valueto == 2)
		{
			valuenum = valuenum * 0.17;
			cout << "Ответ: " << valuenum << "RUB";
		}
		if (valueto == 3)
		{
			cout << "Ошибка: выбраны две одинаковые валюты.";
		}
	}*/
	/*srand(time(0));
	int resultnum = rand() % 500 + 1;
	int usernum;
	for (int n = 0; n <= 15; n++)
	{
		cout << "Попробуй угадать мое число!: ";
		cin >> usernum;
		if (usernum == resultnum)
		{
			cout << "Это оно!" << endl;
			cout << "Ты потратил " << n << " попыток";
			break;
		}
		else
		{
			cout << "Нет, это не " << usernum << endl;
			if (usernum > resultnum)
			{
				cout << "Нужное число меньше чем " << usernum << endl;
			}
			if (usernum < resultnum)
			{
				cout << "Нужное число больше чем " << usernum << endl;
			}
		}
	}*/

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