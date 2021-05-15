#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;

class PC {
public:
	string Videocard;
	string Processor;
	string Disk;
	void print() {
		cout << Videocard << Processor << Disk << endl;
	}
private:
	string Cores;
	string RAMSize;
	string VideocardSize;
};

int main()
{
	/*int griv, kop, mash, sm;*/
	setlocale(LC_ALL, "Russian");
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