#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <iomanip>
#include <conio.h>
#include <cmath>
#include <cstdlib>
#include <vector>

using namespace std;
void findMax(int* first, int* second) {

	int Max = *first;
	if (*first < *second) {
		Max = *second;
	}

	cout << "Maximum value is " << Max << endl;
}
void deerminePosNeg(int* number)
{
	cout << "Our number " << *number;
	if (*number > 0)
	{
		cout << " = positive" << endl;
	}
	else if (*number < 0)
	{
		cout << " = negative" << endl;
	}
	else
	{
		cout << " = zero" << endl;
	}
}
void exchangeVariables(int* firstVar, int* secondVar, int* midVar) {
	cout << "До:\nvariable1 = " << *firstVar << "\nvariable2 = " << *secondVar << endl;
	midVar = firstVar;
	firstVar = secondVar;
	secondVar = midVar;
	cout << "После:\nvariable1 = " << *firstVar << "\nvariable2 = " << *secondVar;
}
void degree(int number, int degree)
{
	int result;
	result = pow(number, degree);
	cout << "Результат: " << result;
}
void sumanddiap(int n1, int n2)
{
	int summa, diapazon;
	summa = n1 + n2;
	if (n1 > n2)
	{
		diapazon = n1 - n2;
	}
	if (n1 < n2)
	{
		diapazon = n2 - n1;
	}
	cout << "Сумма чисел: " << summa << endl;
	cout << "Диапазон чисел: " << diapazon << endl;
}
int digit(int x, int y)
{
	for (int i = x; i < y; i++)
	{
		int result = 0;
		for (int j = 1; j < i; j++)
		{
			if ((i % j) == 0)
			{
				result += j;
			}
		}
		if (result == i && result)
		{
			cout << result << " \n";

		}
	}
	return 0;
}
void card(int suit, int num)
{
	char card[13] = { 'A','2','3','4','5','6','7','8','9','0','J','Q','K' };
	cout << " ___________________\n";
	cout << "|                   |\n";
	cout << "|                   |\n";
	if (num == 10)cout << '|' << setw(4) << "1" << card[num - 1] << "              |\n";
	else cout << '|' << setw(4) << card[num - 1] << "               |\n";
	cout << "|                   |\n";
	cout << "|                   |\n";
	cout << "|                   |\n";
	cout << "|                   |\n";
	cout << "|                   |\n";
	switch (suit)
	{
	case 1: cout << '|' << setw(12) << "ЧЕРВИ" << "       |\n"; break;
	case 2: cout << '|' << setw(12) << "БУБНЫ" << "       |\n"; break;
	case 3: cout << '|' << setw(12) << "ТРЕФЫ" << "       |\n"; break;
	case 4: cout << '|' << setw(12) << "ПИКА" << "       |\n"; break;
	}
	cout << "|                   |\n";
	cout << "|                   |\n";
	cout << "|                   |\n";
	cout << "|                   |\n";
	if (num == 10)cout << "|              " << "1" << card[num - 1] << "   |\n";
	else cout << "|               " << card[num - 1] << "   |\n";
	cout << "|                   |\n";
	cout << "|___________________|\n";
}
int isHappy(unsigned int num)
{
	if (num < 100000 || num > 999999)
		return -1;
	return ((num / 100000) + ((num / 10000) % 10) + ((num / 1000) % 10)) == (((num / 100) % 10) + ((num / 10) % 10) + (num % 10));
}
bool vys(int year)
{
	bool res = false;
	if (year % 4 == 0)
		res = true;
	if (year % 100 == 0)
		res = false;
	if (year % 400 == 0)
		res = true;
	return res;
}
int date(int d, int m, int y)
{
	int k = d;
	switch (m - 1)
	{
	case 12: k += 31;
	case 11: k += 30;
	case 10: k += 31;
	case  9: k += 30;
	case  8: k += 31;
	case  7: k += 31;
	case  6: k += 30;
	case  5: k += 31;
	case  4: k += 30;
	case  3: k += 31;
	case  2: if (vys(y)) k += 29; else k += 28;
	case  1: k += 31;
	}
	k += (y - 1) * 365 + ((y - 1) / 4);
	return k;
}
int difference(int d1, int d2, int m1, int m2, int y1, int y2)
{
	int k = date(d1, m1, y1) - date(d2, m2, y2);
	return k;
}
void massivmidarif(int massive[], int massivesize)
{
	int result = 0;
	for (int i = 0; i <= massivesize; i++)
	{
		result = result + massive[i];
	}
	result = result / massivesize;
	cout << result;
}
void calculatingMassiv(int arr[], int dimention)
{
	int plus = 0;
	int minus = 0;
	int zero = 0;

	for (int i = 0; i < dimention; i++)
	{
		if (arr[i] > 0)
		{
			plus++;
		}
		else if (arr[i] < 0)
		{
			minus++;
		}
		else
		{
			zero++;
		}
	}
	cout << "Количество положительных чисел = " << plus << endl <<
		"Количество отрицательных чисел = " << minus << endl <<
		"Количество нулей = " << zero << endl;
}
const int N = 8;
int rx[N * N], ry[N * N];
bool exist(int x, int y, int s) { for (int i = 0; i <= s; i++) if (rx[i] == x && ry[i] == y) return true; return false; }
bool f(int s) {
	if (s + 1 >= N * N) return true;

	for (int dx = -2; dx <= 2; dx++) for (int dy = -2; dy <= 2; dy++) {
		if (abs(dx) + abs(dy) != 3) continue;

		int xn = rx[s] + dx, yn = ry[s] + dy;
		if (xn<1 || xn>N || yn<1 || yn>N) continue;

		if (exist(xn, yn, s)) continue;

		rx[s + 1] = xn; ry[s + 1] = yn;
		if (f(s + 1)) return true;
	}
	return false;
}
int* proverca(int* A, int* B, int size1, int size2) {
	int* ptr;
	int i = 0;
	for (i = 0; i < size1; i++) {
		int j = i, k = 0;
		while (j < size1 && k < size2 && B[k] == A[j]) {
			j++;
			k++;
		}if (k == size2)
			return ptr = A + i;

	}
	return 0;
}

//пятнашки
using std::vector;
using std::cout;
const unsigned short SIZEE = 4;
vector<int> in_game_map(SIZEE);
vector<vector<int>> game_map(SIZEE, in_game_map);
vector<int> in_right_map(SIZEE);
vector<vector<int>> right_map(SIZEE, in_right_map);
struct coordinate // хранилище координат нулевого элемента
{
	unsigned x;
	unsigned y;
} zero;
void create_right_map() // создаем правильную карту заполненую по порядку
{
	unsigned right_value = 1;
	for (unsigned i = 0; i < SIZEE; i++)
	{
		for (unsigned j = 0; j < SIZEE; j++)
			right_map[i][j] = right_value++;
	}
	right_map[SIZEE - 1][SIZEE - 1] = 0; // нулевой элемент в нижний правый угол
}
void create_game_map() // рандомно создаем игровую карту
{
	unsigned limit = SIZEE * SIZEE;
	vector<int> temporary; // временный массив из которого будем брать значения в игровую карту
	for (unsigned i = 0; i < limit; i++)
		temporary.push_back(i);

	int value;
	for (unsigned i = 0; i < SIZEE; i++)
	{
		for (unsigned j = 0; j < SIZEE; j++)
		{
			value = rand() % limit--;
			game_map[i][j] = temporary[value];
			if (temporary[value] == 0) // сохраняем координаты нулевого элемента
			{
				zero.x = j;
				zero.y = i;
			}
			temporary.erase(temporary.begin() + value);
		}
	}
}
bool check_map() // сравнение игровой и правильной карты для определения конца игры
{
	if (game_map == right_map)
		return true;
	return false;
}
void up_move() // ход вверх (нулевой элемент вниз)
{
	if (zero.y < SIZEE - 1)
	{
		game_map[zero.y][zero.x] = game_map[zero.y + 1][zero.x];
		zero.y++;
		game_map[zero.y][zero.x] = 0;
	}
}
void down_move() // ход вниз (нулевой элемент вверх)
{
	if (zero.y > 0)
	{
		game_map[zero.y][zero.x] = game_map[zero.y - 1][zero.x];
		zero.y--;
		game_map[zero.y][zero.x] = 0;
	}
}
void right_move() // ход вправо (нулевой элемент влево)
{
	if (zero.x > 0)
	{
		game_map[zero.y][zero.x] = game_map[zero.y][zero.x - 1];
		zero.x--;
		game_map[zero.y][zero.x] = 0;
	}
}
void left_move() // ход влево (нулевой элемент вправо)
{
	if (zero.x < SIZEE - 1)
	{
		game_map[zero.y][zero.x] = game_map[zero.y][zero.x + 1];
		zero.x++;
		game_map[zero.y][zero.x] = 0;
	}
}
void get_direction() // определяем нажатую игроком стрелку
{
	int move = static_cast<int> (_getch()); // UP = 72, DOWN = 80, RIGHT = 77, LEFT = 75
	switch (move)
	{
	case 72:
	{
		up_move(); break;
	}
	case 80:
	{
		down_move(); break;
	}
	case 77:
	{
		right_move(); break;
	}
	case 75:
	{
		left_move(); break;
	}
	default:
	{
		get_direction();
	}
	}
}
void screen() // выводим массив на экран
{
	system("cls");
	for (unsigned i = 0; i < SIZEE; i++)
	{
		for (unsigned j = 0; j < SIZEE; j++)
		{
			if (game_map[i][j] != 0)
				cout << std::setw(2) << std::setfill('0') << game_map[i][j] << ' ';
			else
				cout << "** "; // нулевой элемент
		}
		cout << '\n';
	}
}

int main()
{
	/*int griv, kop, mash, sm;*/
	/*int d, r, S, P;
	float pi = 3.14; */
	/*double n1, n2, summa, proiz, average;*/
	/*double n1, n2, n3, summa, proiz, average;*/
	setlocale(LC_ALL, "Russian");

	//2 НЕДЕЛЯ ДОМАШНЯЯ РАБОТА ------------------------------------------------------------------------------------------------------------------------------------------

		// Заданы три сопротивлении R1, R2, R3. Вычислить значение сопротивления R0 по формуле: 1/R0 = 1 / R1 + 1 / R2 + 1 / R3. Контрольный пример : R1 = 2, R2 = 4, R3 = 8, R0 = 1.142857.
	
	/*float r1, r2, r3, r0, prer0;
	cout << "Введите R1: ";
	cin >> r1;
	cout << "Введите R2: ";
	cin >> r2;
	cout << "Введите R3: ";
	cin >> r3;
	prer0 = (1 / r1) + (1 / r2) + (1 / r3);
	r0 = 1 / prer0;
	cout << "R0 = " << r0 << endl;*/

		// По заданной длине окружности найти площадь круга по формуле S = pi*R2, радиус вычислить из формулы длины окружности : L = 2 * pi * R.
	
	/*float S, pi = 3.14, R, L;
	cout << "Введите L: ";
	cin >> L;
	R = L / (2 * pi);
	S = pi * R * R;
	cout << "S = " << S;*/
	
		// Вычислить пройденное расстояние при прямолинейном равноускоренном движении по формуле S = v * t + (a * t2) / 2, где v — скорость, t — время, а — ускорение.
	
	/*float S1, v, t, a;
	cout << "Введите v: ";
	cin >> v;
	cout << "Введите t: ";
	cin >> t;
	cout << "Введите a: ";
	cin >> a;
	S1 = v * t + (a * t * t) / 2;
	cout << "S = " << S1;*/


		// Пользователь вводит с клавиатуры время в секундах. Необходимо написать программу, которая переведет введенные пользователем секунды в часы, минуты, секунды и выводит их на экран.
	
	/*int s, sec, min, hour;
	cout << "Введите секунды: ";
	cin >> s;
	hour = s / 3600;
	min = (s - hour * 3600) / 60;
	sec = s - hour * 3600 - min * 60;
	cout << "Часов: " << hour << endl;
	cout << "Минут: " << min << endl;
	cout << "Секунд: " << sec << endl;*/

		// Написать программу, которая преобразует введенное с клавиатуры дробное число в денежный формат. Например, число 12,5 должно быть преобразовано к виду 12 грн 50 коп.
	
	//cout << "Я не смог сделать данное задание. Не получается";

		// Написать программу, вычисляющую, с какой скоростью бегун пробежал дистанцию.Рекомендуемый вид экрана во время выполнения программы приведен ниже : Вычисление скорости бега. Введите длину дистанции(метров) = 1000. Введите время(мин.сек) = 3.25. Дистанция : 1000 м.  Время : 3 мин 25 сек = 205 сек. Вы бежали со скоростью : 17.56 км / ч.

	/*double timee, speed, distance, min2, sec2, time_2;
	cout << "Введите длину дистанции (метров): ";
	cin >> distance;
	cout << "Введите время (мин.сек): ";
	cin >> timee;
	sec2 = (timee - int(timee)) * 100;
	min2 = int(timee) * 60;
	time_2 = min2 + sec2;
	speed = (distance / time_2) * 3.6;
	cout << "Дистанция  : " << distance << " м \n";
	cout << "Время : " << min2 / 60 << " мин  " << sec2 << " сек " << " = " << time_2 << " сек \n";
	cout << "Скорость : " << speed << " км/ч \n";*/

		// Пользователь указывает цену одой минуты исходящего звонка с одного мобильного оператора другому, а также продолжительность разговора в минутах и секундах. Необходимо вычислить денежную сумму на которую был произведен звонок.

	/*double price_min, price_sec, timeee, time_sec, price_all;
	cout << "Введите цену минуты исходящего звонка другому оператору: ";
	cin >> price_min;
	cout << "Введите продолжительность разговора в минутах и секундах: ";
	cin >> timeee;
	time_sec = ((int)timeee * 60) + ((timeee * 100) - (int)timeee * 100);
	price_sec = price_min / 60;
	price_all = time_sec * price_sec;
	cout << "Стоимость звонка составила: " << price_all;*/


		// Написать программу, которая преобразует введенное пользователем количество дней в количество полных недель и оставшихся дней. Например, пользователь ввел 17 дней, программа должна вывести на экран 2 недели и 3 дня.
	
	/*double day, week, a;
	cout << "Введите количество дней : ";
	cin >> a;
	week = int(a / 7);
	day = a - (week * 7);
	cout << week << " недели  " << day << " дней";*/
	
	//4 НЕДЕЛЯ ДОМАШНЯЯ РАБОТА ------------------------------------------------------------------------------------------------------------------------------------------

		//Задание 1. Пользователь вводит с клавиатуры целое шестизначное число. Написать программу, которая определяет, является ли введенное число — счастливым (Счастливым считается шестизначное число, у которого сумма первых 3 цифр равна сумме вторых трех цифр). Если пользователь ввел не шестизначное число — сообщение об ошибке. 
	
	/*int number;
	cout << "Введите шестизначное число: ";
	cin >> number;
	if (number < 100000 || number > 999999)
	{
		cout << "Ошибка: Вы ввели не шестизначное число.";
	}
	else if (((number / 100000) + ((number / 10000) % 10) + ((number / 1000) % 10)) == (((number / 100) % 10) + ((number / 10) % 10) + (number % 10)))
	{
		cout << "Число счастливое!";
	}
	else
	{
		cout << "Число не счастливое.";
	}*/
	
		//Задание 2. Пользователь вводит четырехзначное число. Необходимо поменять в этом числе 1 и 2 цифры, а также 3 и 4 цифры. Если пользователь вводит не четырехзначное число — вывести сообщение об ошибке.
	
	/*int number, fir, sec, thir, four, exch1, exch2;
	cout << "Введите четырехзначное число: ";
	cin >> number;
	if (number < 1000 || number > 9999)
	{
		cout << "Ошибка: Вы ввели не четырехзначное число.";
	}
	else
	{
		sec = number / 1000;
		fir = number / 100 % 10;
		four = number / 10 % 10;
		thir = number % 10;
		cout << fir << sec << thir << four;
	}*/
	
		//Задание 3. Пользователь вводит с клавиатуры 7 целых чисел.Напишите программу, которая определяет максимальное из этих 7 чисел(Подсказка — решение должно быть простым).
	
	/*cout << "Поочередно напишите 7 чисел: ";
	int a;
	cin >> a;
	int b;
	cin >> b;
	if (a < b)
		a = b;
	cin >> b;
	if (a < b)
		a = b;
	cin >> b;
	if (a < b)
		a = b;
	cin >> b;
	if (a < b)
		a = b;
	cin >> b;
	if (a < b)
		a = b;
	cin >> b;
	if (a < b)
		a = b;
	cout << "Max: " << a;*/
	
		//Задание 4. Грузовой самолет должен пролететь с грузом из пункта А в пункт С через пункт В. Емкость бака для топлива у самолета — 300 литров. Потребление топлива на 1 км в зависимости от веса груза у самолета следующее:
	
	/*int rec = 0, l1 = 0, l2 = 0, mass = 0;
	const int fulltank = 300;

	cout << "Введите массу нагрузки:";
	cin >> mass;
	cout << endl;

	if (mass > 2000) {
		cout << "Максимальная нагрузка, самолет не будет взлетать.\n";
	}
	else if (mass <= 0) {
		cout << "Нет груза.\n";
	}
	cout << "Введите расстояние от точки A до точки B: ";
	cin >> l1;
	cout << endl;

	if (mass > 0 && mass <= 500) {
		rec = 1;
		int l3 = fulltank / rec;
		if (l3 < l1) {
			cout << "Топлива недостаточно, чтобы летать до точки B.\n";
			int x = l1 - l3;
			cout << "Вам нужно" << x << "литр топлива, чтобы добраться до точки B.\n";
		}
		else if (l3 >= l1) {
			cout << "Введите расстояние от точки B до точки C : ";
			cin >> l2;
			cout << endl;
			int x = fulltank - (l3 - l2);
			cout << "Вам нужно" << x << "литр топлива, чтобы добраться до точки C.\n";
			if (l3 < l2) {
				cout << "Топлива недостаточно, чтобы летать до точки C.\n";
			}
			else {
				cout << "Вы можете лететь до точки C.\n";
			}
		}


	}
	else if (mass > 501 && mass <= 1000) {
		rec = 4;
		int l3 = fulltank / rec;
		if (l3 <= l1) {
			cout << "Топлива недостаточно, чтобы летать до точки B.\n";
			int x = l1 - l3;
			cout << "You need " << x << " a liter of fuel to get to point B.\n";
		}
		else if (l3 >= l1) {
			cout << "Введите расстояние от точки B до точки C : ";
			cin >> l2;
			cout << endl;
			float x = fulltank - (l3 - l2);
			cout << "Вам нужно" << x << "литр топлива, чтобы добраться до точки C.\n";
			if (l3 < l2) {
				cout << "Топлива недостаточно, чтобы летать до точки C.\n";
			}
			else {
				cout << "Вы можете лететь до точки C.\n";
			}
		}
	}
	else if (mass > 1001 && mass <= 1500) {
		rec = 7;
		int l3 = fulltank / rec;
		if (l3 <= l1) {
			cout << "Топлива недостаточно, чтобы летать до точки B.\n";
			int x = l1 - l3;
			cout << "Вам нужно" << x << "литр топлива, чтобы добраться до точки B.\n";
		}
		else if (l3 >= l1) {
			cout << "Введите расстояние от точки B до точки C : ";
			cin >> l2;
			cout << endl;
			float x = fulltank - (l3 - l2);
			cout << "Вам нужно" << x << "литр топлива, чтобы добраться до точки C.\n";
			if (l3 < l2) {
				cout << "Топлива недостаточно, чтобы летать до точки C.\n";
			}
			else {
				cout << "Вы можете лететь до точки C.\n";
			}
		}
	}
	else if (mass > 1501 && mass <= 2000) {
		rec = 9;
		int l3 = fulltank / rec;
		if (l3 <= l1) {
			cout << "Топлива недостаточно, чтобы летать до точки B.\n";
			int x = l1 - l3;
			cout << "Вам нужно" << x << "литр топлива, чтобы добраться до точки B.\n";
		}
		else if (l3 >= l1) {
			cout << "Введите расстояние от точки B до точки C : ";
			cin >> l2;
			cout << endl;
			float x = fulltank - (l3 - l2);
			cout << "Вам нужно" << x << "литр топлива, чтобы добраться до точки C.\n";
			if (l3 < l2) {
				cout << "Топлива недостаточно, чтобы летать до точки C.\n";
			}
			else {
				cout << "Вы можете лететь до точки C.\n";
			}
		}
	}*/
	
		//Задание 1. Пользователь вводит две даты (день, месяц, год в виде целых чисел). Необходимо определить и вывести количество дней между этими двумя датами. Для расчетов учитывать високосные года, а также корректное число дней в месяцах (март — 31, сентябрь — 30, февраль невисокосного года — 28 и т.д.).
	
	// не смог сделать
	
		//Задание 2. Зарплата менеджера составляет 200$ + процент от продаж, продажи до 500$ — 3%, от 500 до 1000 — 5%, свыше 1000 — 8%. Пользователь вводит с клавиатуры уровень продаж для трех менеджеров. Определить их зарплату, определить лучшего менеджера, начислить ему премию 200$, вывести итоги на экран
	
	/*int a, b, c;
     
    cout << "Введите уровень продаж для трех менеджеров: \n";
    cin >> a >> b >> c;
     
    if (a < 500)
        a = 0.03 * a + 200;
    else
        if (a > 500 && a < 1000)
            a = 0.05 * a + 200;
        else
            if (a > 1000)
                a = 0.08 * a + 200;
     
    if (b < 500)
        b = 0.03 * b + 200;
    else
        if (b > 500 && b < 1000) 
            b = 0.05 * b + 200;
        else
            if (b > 1000) 
                b = 0.08 * b + 200;
     
    if (c < 500) 
        c = 0.03 * c + 200;
    else
        if (c > 500 && c < 1000) 
            c = 0.05 * c + 200;
        else
            if (c > 1000) 
                c = 0.08 * c + 200;
     
    if (a > b && a > c) 
        a = a + 200;
    else
        if (b > c)
            b = b + 200;
        else
            c = c + 200;
     
    cout << "ЗП 1 менеджера:" << a << "$" << endl;
    cout << "ЗП 2 менеджера:" << b << "$" << endl;
    cout << "ЗП 3 менеджера:" << c << "$" << endl;*/


	//5 НЕДЕЛЯ ДОМАШНЯЯ РАБОТА ------------------------------------------------------------------------------------------------------------------------------------------

		//Задание 1. Пользователь вводит с клавиатуры символ. Определить, какой это символ : Буква, цифра, знак препинания или другое.
	
	/*char a;
	cout << "Введите символ " << endl;
	cin >> a;
	if (a >= '0' && a <= '9') {
		cout << "Вы ввели цифру" << endl;
	}else if (a >= 'a' && a <= 'z') {
		cout << "Вы ввели букву" << endl;
	}
	else if (a >= 'A' && a <= 'Z') {
		cout << "Вы ввели букву" << endl;
	}
	else if (a == '.' || a == ',' || a == '"' || a == ';' || a == ':') {
		cout << "Вы ввели знак препинания" << endl;
	}
	else if (a == '+' || a == '-' || a == '*' || a == '/' || a == '%') {
		cout << "Вы ввели математическую операцию" << endl;
	}*/
	
		//Задание 2. Написать программу подсчета стоимости разговора для разных мобильных операторов. Пользователь вводит стоимость разговора и выбирает с какого на какой оператор он звонит.Вывести стоимость на экран.
	
	/*int k;
    double time;
    double const aa=1.09, bb=1.02, ab=1.27;
    cout << "Сколько минут вы наговорили?: "; 
    cin >> time;
    cout << "Выберите операторов: 1 - МТС:Мегафон, 2 - Теле2:Мегафон, 3 - Мегафон:Билайн : ";    
    cin >> k;
    
    switch (k) 
    {
    case 1: 
    {
    cout <<"Стоимость: "<<time*aa<<"\n";
    break;
    }
    case 2: 
    {
    cout <<"Стоимость: "<<time*bb<<"\n";
    break;
    }
    case 3: 
    {
    cout <<"Стоимость:"<<time*ab<<"\n";
    break;
    }     
    default: 
    cout << "Ошибка\n";
    }*/
	
		//Задание 3. Вася работает программистом и получает 50$ за каждые 100 строк кода.За каждое третье опоздание Васю штрафуют на 20$.Реализовать меню :
	
	/*int option;
	int FINE = 20;
	double SALARY = 0.5;
    float desireIncome;
    int numberOfDelays;
    int numberOfLinesOfCode;
    int minusForDelays;
    float plusForCode;
 
    cout << "Введи 1 если знаешь\n"
        "- Доход\n"
        "- Кол-во опозданий\n"
        "Введи 2 если знаешь\n"
        "- Доход\n"
        "- Кол-во строчек кода\n"
        "Введи 3 если знаешь\n"
        "- Кол-во опозданий\n"
        "- Кол-во строк кода\n";
    cin >> option;
 
    switch (option)
    {
    case 1:
        cout << "Введи доход: ";
        cin >> desireIncome;
        cout << "Введи количетсво опоздания : ";
        cin >> numberOfDelays;
        if (desireIncome < 0 || numberOfDelays < 0)
        {
            cout << "Ошибка\n";
            return 1;
        }
        cout << "\n";

        minusForDelays = FINE * (int) (numberOfDelays / 3);

        numberOfLinesOfCode = (desireIncome + minusForDelays) / SALARY;
        cout << "Вася должен написать " << numberOfLinesOfCode << " строк кода\n";
        break;
    case 2:
        cout << "Введитe доход: ";
        cin >> desireIncome;
        cout << "Введите количество строк кода: ";
        cin >> numberOfLinesOfCode;
        if (desireIncome < 0 || numberOfLinesOfCode < 0)
        {
            cout << "Ошибка\n";
            return 1;
        }
        cout << "\n";
        plusForCode = SALARY * numberOfLinesOfCode;
        if (desireIncome > plusForCode)
        {
            cout << "Этого недостаточно для зарплаты\n";
            return 2;
        }
        numberOfDelays = (plusForCode - desireIncome) / FINE + 2;
        cout << "Вася может опоздать " << numberOfDelays << " раз\n";
        break;
    case 3:
        cout << "Введите количество опозданий: ";
        cin >> numberOfDelays;
        cout << "Введите количество строк кода: ";
        cin >> numberOfLinesOfCode;
        if (numberOfDelays < 0 || numberOfLinesOfCode < 0)
        {
            cout << "Ошибка\n";
            return 1;
        }
        cout << "\n";
        plusForCode = SALARY * numberOfLinesOfCode;
        minusForDelays = FINE * (int)(numberOfDelays / 3);
        if (plusForCode < minusForDelays)
        {
            cout << "Недостаточно строк кода для получения зарплаты\n";
            return 3;
        }
        desireIncome = plusForCode - minusForDelays;
        cout << "Вася получит $" << desireIncome << "\n";
        break;
    default:
        cout << "Неверное число\n";
        return 4;
    }*/
	
	
	//10 НЕДЕЛЯ ДОМАШНЯЯ РАБОТА ------------------------------------------------------------------------------------------------------------------------------------------

		//Задание 1. Напишите программу, которая создает двухмерный массив и заполняет его по следующему принципу: пользователь вводит число(например, 3) первый элемент массива принимает значение этого числа, последующий элемент массива принимает значение этого числа умноженного на 2 (т.е. 6 для нашего примера), третий элемент массива предыдущий элемент умноженный на 2 (т.е. 6 * 2 = 12 для нашего примера).Созданный массив вывести на экран.
	
	/*const size_t a = 1, b = 4;
    int arr[a][b];
    int n;
	cout << "Введите число:";
    cin >> n;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            arr[i][j] = n*2;           
            n*=2;
            cout << arr[i][j]<<" ";
            
        }
        
    }*/
	
		//Задание 2. Напишите программу, которая создает двухмерный массив и заполняет его по следующему принципу: пользователь вводит число(например, 3) первый элемент массива принимает значение этого числа, последующий элемент массива принимает значение этого числа + 1 (т.е. 4 для нашего примера), третий элемент массива предыдущий элемент + 1 (т.е. 5 для нашего примера).Созданный массив вывести на экран.

	/*const size_t a = 1, b = 4;
    int arr[a][b];
    int n;
	cout << "Введите число:";
    cin >> n;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
			arr[i][j] = n++;
            cout << arr[i][j]<<" "; 
        }
    }*/
	
		//Задание 3. Создайте двухмерный массив. Заполните его случайными числами и покажите на экран. Пользователь выбирает количество сдвигов и положение (влево, вправо, вверх, вниз). Выполнить сдвиг массива и показать на экран полученный результат. Сдвиг циклический. 
	
	/*srand(time(0));
    int const n = 2, m = 6;
    int arr[n][m] = { 1,2,0,4,5,3,4, 5, 3, 9, 0, 1 };
 
	int k;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << "\t ";
		}
		cout << endl;
	}
	cout << "На сколько сместим?: ";
	cin >> k;

	for (int i = 0; i < n; i++) {

		for (int j = 0; j < m - k; j++) {
			int tmp = arr[i][j];
			arr[i][j] = arr[i][j + k];
			arr[i][j + k] = tmp;


		}
		cout << endl;
	}


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j] << "\t ";
		}
		cout << endl;
	}*/


	//11 НЕДЕЛЯ ДОМАШНЯЯ РАБОТА ------------------------------------------------------------------------------------------------------------------------------------------
	
		//Задание 1. Написать функцию, которая принимает два параметра: основание степени и показатель степени, и вычисляет степень числа на основе полученных данных.
	
	/*int number, degree1;
	cout << "Введите число: ";
	cin >> number;
	cout << "Введите степень: ";
	cin >> degree1;

	degree(number, degree1);*/
	
		//Задание 2. Написать функцию, которая получает в качестве параметров 2 целых числа и возвращает сумму чисел из диапазона между ними.
	
	/*int num1, num2;
	cout << "Введите первое число: ";
	cin >> num1;
	cout << "Введите первое число: ";
	cin >> num2;
	sumanddiap(num1, num2);*/

		//Задание 3. Число называется совершенным, если сумма всех его делителей равна ему самому.Напишите функцию поиска таких чисел во введенном интервале.
	
	/*int pnum, n1, n2;
	cout << "Введите начало диапазона: ";
	cin >> n1;
	cout << "Введите конец диапазона: ";
	cin >> n2;
	digit(n1, n2);*/
	
		//Задание 4. Написать функцию, выводящую на экран переданную ей игральную карту
	
	/*int a, s;
	cout << "Введите карту\n1 - Туз \n2 - Два\n3 - Три\n4 - Четыре\n5 - Пять\n6 - Шесть\n7 - Семь\n8 - Восемь\n9 - Девять\n10 - Десять\n11 - Валет\n12 - Дама\n13 - Король" << endl;
	cin >> a;
	cout << "\n\t\t\tМасти\n1. Черви\n2. Бубны\n3. Трефы\n4. Пика\n";
	cout << "Введите масть: ";
	cin >> s;
	card(s, a);*/

		//Задание 5. Написать функцию, которая определяет, является ли «счастливым» шестизначное число.

	/*int res;
	cout << "Введите шестизначное число: ";
	cin >> res;
	res = isHappy(res);
	if (res == 1)
	cout << "happy" << endl;
	else if (res == 0)
	cout << "not happy" << endl;
	else
	cout << "error" << endl;*/

	//12 НЕДЕЛЯ ДОМАШНЯЯ РАБОТА ---------------------------------------------------------------------------------------------------------------------------------------------

		//Задание 1. Написать функцию, которая принимает две даты (т.е.функция принимает шесть параметров) и вычисляет разность в днях между этими датами.Для решения этой задачи необходимо также написать функцию, которая определяет, является ли год високосным.

	/*int d1, d2, m1, m2, y1, y2;
	cout << "Введите день первой даты: ";
	cin >> d2;
	cout << "Введите месяц первой даты: ";
	cin >> m2;
	cout << "Введите год первой даты: ";
	cin >> y2;
	cout << "Введите день второй даты: ";
	cin >> d1;
	cout << "Введите месяц второй даты: ";
	cin >> m1;
	cout << "Введите год второй даты: ";
	cin >> y1;
	cout << "Разница между двумя датами состовляет " << difference(d1, d2, m1, m2, y1, y2) << " дней\n";*/

		//Задание 2. Написать функцию, определяющую среднее арифметическое элементов передаваемого ей массива.

	/*int massivesize, massivenumber, massivee[100];
	cout << "Введите размер массива: ";
	cin >> massivesize;
	for (int i = 0; i <= massivesize; i++)
	{
		cout << "Введите число в для массива: ";
		cin >> massivenumber;
		massivee[i] = massivenumber;
	}
	massivmidarif(massivee, massivesize);*/

		//Задание 3. Написать функцию, определяющую количество положительных, отрицательных и нулевых элементов передаваемого ей массива.

	/*int mass[] = {1,5,3,5,4,0,0,0,-6,-4,-3,-9};
	calculatingMassiv(mass, 12);*/

	//13 НЕДЕЛЯ ДОМАШНЯЯ РАБОТА ---------------------------------------------------------------------------------------------------------------------------------------------

		//Задание 1. Дана шахматная доска размером 8×8 и шахматный конь. Программа должна запросить у пользователя координаты клетки поля и поставить туда коня. Задача программы найти и вывести путь коня, при котором он обойдет все клетки доски, становясь в каждую клетку только один раз. (Так как процесс отыскания пути для разных начальных клеток может затянуться, то рекомендуется сначала опробовать задачу на поле размером 6×6). В программе необходимо использовать рекурсию.

	/*cin>>rx[0]>>ry[0];
    if (f(0)) for(int i=0; i<N*N; i++) cout<<"("<<rx[i]<<","<<ry[i]<<") "; else cout<<"No solutions\n";*/

		//Задание 2. Написать игру «Пятнашки».

	/*srand(static_cast<int>(time(NULL)));

	create_right_map();
	do
	{
		create_game_map();
	} while (check_map());

	do
	{
		screen();
		get_direction();
	} while (!check_map());

	cout << "\nYou win!\nGame over!\n";
	_getch();*/ 

		//Задание 3. Написать игру «Крестики - нолики».

	/*const int N = 3;
	int x, y, k, dgt;
	char A[N][N], c, z;
	string s, a, b, name1, name2;
	a = "НОЛИКИ";
	b = "КРЕСТИКИ";
	z = '0';
	c = 'X';
	cout << "Игра крестики-нолики:" << endl;
	cout << "Введите имя первого игрока: ";
	cin >> name1;
	cout << "Введите имя второго игрока: ";
	cin >> name2;
	cout << "За кого ходит первый игрок?(введите цифру):" << endl;
	cout << "0: 1" << endl;
	cout << "X: 2" << endl;
	cout << "Цифра: ";
	cin >> dgt;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			A[i][j] = '?';
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < 9; i++)
	{
		if ((!(i % 2)) && (dgt == 1)) s = a;
		if ((!(i % 2)) && (dgt == 2)) s = b;
		if ((i % 2) && (dgt == 1)) s = b;
		if ((i % 2) && (dgt == 2)) s = a;
	mylabel:
		cout << "Сделайте ваш ход (" << s << ")" << endl;
		cout << "Строка: ";
		cin >> x;
		cout << "Столбец: ";
		cin >> y;
		x--;
		y--;
		if (A[x][y] != '?')
		{
			system("cls");
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < N; j++)
				{
					cout << A[i][j] << " ";
				}
				cout << endl;
			}
			cout << "Данная позиция занята!" << endl;
			goto mylabel;
		}
		if ((!(i % 2)) && (dgt == 1)) A[x][y] = z;
		if ((!(i % 2)) && (dgt == 2)) A[x][y] = c;
		if ((i % 2) && (dgt == 1)) A[x][y] = c;
		if ((i % 2) && (dgt == 2)) A[x][y] = z;
		system("cls");
		k = 0;
		for (int i = 0; i < N; i++)
		{
			for (int j = 0; j < N; j++)
			{
				cout << A[i][j] << " ";
			}
			cout << endl;
		}
		if (((A[0][0] == '0') && (A[0][1] == '0') && (A[0][2] == '0')) ||
			((A[1][0] == '0') && (A[1][1] == '0') && (A[1][2] == '0')) ||
			((A[2][0] == '0') && (A[2][1] == '0') && (A[2][2] == '0')) ||
			((A[0][0] == '0') && (A[1][0] == '0') && (A[2][0] == '0')) ||
			((A[0][1] == '0') && (A[1][1] == '0') && (A[2][1] == '0')) ||
			((A[0][2] == '0') && (A[1][2] == '0') && (A[2][2] == '0')) ||
			((A[0][0] == '0') && (A[1][1] == '0') && (A[2][2] == '0')) ||
			((A[2][0] == '0') && (A[1][1] == '0') && (A[0][2] == '0')) ||
			((A[0][0] == 'X') && (A[0][1] == 'X') && (A[0][2] == 'X')) ||
			((A[1][0] == 'X') && (A[1][1] == 'X') && (A[1][2] == 'X')) ||
			((A[2][0] == 'X') && (A[2][1] == 'X') && (A[2][2] == 'X')) ||
			((A[0][0] == 'X') && (A[1][0] == 'X') && (A[2][0] == 'X')) ||
			((A[0][1] == 'X') && (A[1][1] == 'X') && (A[2][1] == 'X')) ||
			((A[0][2] == 'X') && (A[1][2] == 'X') && (A[2][2] == 'X')) ||
			((A[0][0] == 'X') && (A[1][1] == 'X') && (A[2][2] == 'X')) ||
			((A[2][0] == 'X') && (A[1][1] == 'X') && (A[0][2] == 'X')))
		{
			k++;
			cout << "Игра закончена! ";
			if ((A[x][y] == z) && (dgt == 1)) cout << name1 << " победил(a)!" << endl;
			if ((A[x][y] == c) && (dgt == 2)) cout << name1 << " победил(а)!" << endl;
			if ((A[x][y] == c) && (dgt == 1)) cout << name2 << " победил(а)!" << endl;
			if ((A[x][y] == z) && (dgt == 2)) cout << name2 << " победил(а)!" << endl;
			break;
		}
	}
	if (!(k)) cout << "Игра закончилась вничью!" << endl;*/

	//14 НЕДЕЛЯ ДОМАШНЯЯ РАБОТА ---------------------------------------------------------------------------------------------------------------------------------------------

		//Задание 1. Даны два массива: А[M] и B[N] (M и N вводятся с клавиатуры).Необходимо создать третий массив минимально возможного размера, в котором нужно собрать элементы массива A, которые не включаются в массив B, без повторений.

	/*int sizeA, sizeB;
    cout << "Введите размер первого массива: ";
    cin >> sizeA;
    cout << "Введите размер второго массива: ";
    cin >> sizeB;
    int *arrA = new int[sizeA];
    int *arrB = new int[sizeB];
    cout << "\n\nПервый массив: ";
    for (int x = 0; x < sizeA; x++)
    {
        arrA[x] = rand() % 9 + 1;
        cout << arrA[x] << " ";
    }
    cout << "\n\nВторой массив: ";
    for (int x = 0; x < sizeB; x++)
    {
        arrB[x] = rand() % 9 + 1;
        cout << arrB[x] << " ";
    }

    int tmp = 0;
    for (int x = 0; x < sizeA; x++)
    {
        for (int y = 0; y < sizeB; y++)
        {
            if (arrA[x] == arrB[y])
            {
                tmp++;
            }
        }
    }

    int sizeC = tmp;
    int *arrtmp = new int[sizeC];
    tmp = 0;
    for (int y = 0; y < sizeB; y++)
    {
        for (int z = 0; z < sizeA; z++)
        {
            if (arrB[y] == arrA[z])
            {
                arrtmp[tmp] = arrB[y];
                tmp++;
            }
        }
    }

    int *arrC = new int[sizeC];
    cout << "\n\nТретий массив: ";
    for (int x = 0; x < sizeC; x++)
    {
        arrC[x] = arrtmp[x];
        cout << arrC[x] << " ";
    }

    delete arrA;
    delete arrB;
    delete arrC;
    delete arrtmp;*/
		
		//Задание 2. Даны два массива: А[M] и B[N] (M и N вводятся с клавиатуры).Необходимо создать третий массив минимально возможного размера, в котором нужно собрать элементы массивов A и B, которые не являются общими для них, без повторений.

	/*int sizeA, sizeB;
	cout << "Введите размер первого массива: ";
	cin >> sizeA;
	cout << "Введите размер второго массива: ";
	cin >> sizeB;
	int* arrA = new int[sizeA];
	int* arrB = new int[sizeB];
	cout << "\n\nПервый массив: ";
	for (int x = 0; x < sizeA; x++)
	{
		arrA[x] = rand() % 9 + 1;
		cout << arrA[x] << " ";
	}
	cout << "\n\nВторой массив: ";
	for (int x = 0; x < sizeB; x++)
	{
		arrB[x] = rand() % 9 + 1;
		cout << arrB[x] << " ";
	}

	int tmp = 0;
	for (int x = 0; x < sizeA; x++)
	{
		for (int y = 0; y < sizeB; y++)
		{
			if (arrA[x] == arrB[y])
			{
				tmp++;
			}
		}
	}

	int sizeC = tmp;
	int* arrtmp = new int[sizeC];
	tmp = 0;
	for (int y = 0; y < sizeB; y++)
	{
		for (int z = 0; z < sizeA; z++)
		{
			if (arrB[y] == arrA[z])
			{
				arrtmp[tmp] = arrB[y];
				tmp++;
			}
		}
	}

	int* arrC = new int[sizeC];
	cout << "\n\nТретий массив: ";
	for (int x = 0; x < sizeC; x++)
	{
		arrC[x] = arrtmp[x];
		cout << arrC[x] << " ";
	}

	delete arrA;
	delete arrB;
	delete arrC;
	delete arrtmp;*/

	//15 НЕДЕЛЯ ДОМАШНЯЯ РАБОТА ---------------------------------------------------------------------------------------------------------------------------------------------

		//Задание 1. Написать программу, которая содержит функцию Action, принимающую в качестве аргумента, указатели на два массива (А и В) и размеры массивов, а также указатель на функцию. Пользователю отображается меню, в котором он может выбрать max, min, avg.Если выбран max — передается указатель на функцию, которая ищет максимум, если выбран min — передается указатель на функцию, которая ищет минимум, если выбран avg — передается указатель на функцию, которая ищет среднее. Возвращаемое значение функции Action результат выбора пользователя max, min, avg.

	/*int size1, size2;
	cout << "Введите размер массива A: ";
	cin >> size1;
	int* A = new int[size1 + 1];
	cout << "Заполните массив: ";
	for (int i = 0; i < size1; i++)
		cin >> A[i];
	cout << "Введите размер массива B: ";
	cin >> size2;
	int* B = new int[size2];
	cout << "Заполните массив: ";
	for (int i = 0; i < size2; i++)
		cin >> B[i];
	cout << "Элемент должен стоять на позиции " << proverca(A, B, size1, size2) << endl;
	delete[]A;
	delete[]B;
	return 0;*/

	//Дальше бога нет, только классная работа и практика. -------------------------------------------------------------------------------------------------------------------
		
	/*int var1, var2, midvar;
	cout << "Введите первое число: ";
	cin >> var1;
	cout << "Введите второе число: ";
	cin >> var2;
	exchangeVariables(&var1, &var2, &midvar);*/


	/*int number;
	cout << "Введите число: ";
	cin >> number;
	deerminePosNeg(&number);*/
	/*int n1, n2;
	cout << "Введите первое число: ";
	cin >> n1;
	cout << "Введите второе число: ";
	cin >> n2;
	findMax(&n1, &n2);*/


	/*int arr[10];
	int arrnum;
	cout << "Введите 10 чисел для заполнения массива: " << endl;
	for (int i = 0; i < 10; i++) 
	{
		cin >> arr[i];
	}
	cout << "Введите число в массиве: ";
	cin >> arrnum;
	bool flag = false;
	int l = 0;
	int r = 9;
	int mid;
	while ((l <= r) && (flag != true)) 
	{
		mid = (l + r) / 2;

		if (arr[mid] == arrnum) flag = true;
		if (arr[mid] > arrnum) r = mid - 1;
		else l = mid + 1;
	}
	if (flag) 
	{
		cout << "Индекс элемента " << arrnum << " в массиве равен: " << mid;
	}
	else
	{
		cout << "Извините, но такого элемента в массиве нет";
	}*/


	/*int grades[9], menuchoice, IsTeacher, uselessvar, examreplayelementnubmer, examreplayreplace;
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
	}*/
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