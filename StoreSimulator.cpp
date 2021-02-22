#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime> // Подключение нужных библеотек
using namespace std;

class magazin // Создаём класс, в котором происходит вся магия
{
	public:
		int dengi = 100;
		int day = 1;
		int hleb=6;
		int moloko=4;
		int makarony=5;
		int krupy=2;
		int myaso=4;
		int ovoshchi=3;
		int frukty=3;
		int napitki=2;
		int yagody = 3;
		int sladosti = 4;
		int products = hleb + moloko + makarony + krupy + myaso + ovoshchi + frukty + napitki + yagody + sladosti;
	private:
		const int z_hleb=10;
		const int z_moloko=20;
		const int z_makarony=30;
		const int z_krupy=25;
		const int z_myaso=50;
		const int z_ovoshchi=15;
		const int z_frukty=15;
		const int z_napitki=20;
		const int z_yagody = 20;
		const int z_sladosti = 20;
		const int z_magaziny = 500;
		int magaziny = 1;
		int a;
		int b;
		int c;
		int d;// Создаём нужные переменные

	public:
		magazin()
		{

		}
		void information() //Этот метод показывает кол-во и цены товаров и магазинов, а также день
		{
			system("cls");
			cout << "Кол-во хлебо-булочных изделий: " << hleb << endl;
			cout << "Цена хлебо-булочных изделий: " << z_hleb << endl;
			cout << "Кол-во кисломолочных изделий: " << moloko << endl;
			cout << "Цена кисломолочных изделий: " << z_moloko << endl;
			cout << "Кол-во макаронных изделий: " << makarony << endl;
			cout << "Цена макаронных изделий: " << z_makarony << endl;
			cout << "Кол-во круп: " << krupy << endl;
			cout << "Цена круп: " << z_krupy << endl;
			cout << "Кол-во мяса и рыбы: " << myaso << endl;
			cout << "Цена мяса и рыбы: " << z_myaso << endl;
			cout << "Кол-во овощей: " << ovoshchi << endl;
			cout << "Цена овощей: " << z_ovoshchi << endl;
			cout << "Кол-во фруктов: " << frukty << endl;
			cout << "Цена фруктов: " << z_frukty << endl;
			cout << "Кол-во напитков: " << napitki << endl;
			cout << "Цена напитков: " << z_napitki << endl;
			cout << "Кол-во ягод: " << yagody << endl;
			cout << "Цена ягод: " << z_yagody << endl;
			cout << "Кол-во конфет, печений и т.п.: " << sladosti << endl;
			cout << "Цена конфет, печений и т.п.: " << z_sladosti << endl;
			cout << "Кол-во магазинов: " << magaziny << endl;
			cout << "Цена магазина: " << z_magaziny << endl;
			cout << "День: " << day << endl;
		}
		void pokupki() //Этот метод имитирует покупки покупателей
		{
			system("cls");
			a = 1 + rand() % 10;
			switch (a)
			{
				case 1:
					b = 1 + rand() % hleb;
					hleb = hleb - b;
					dengi = dengi + ((b * z_hleb) * magaziny);
					break;
				case 2:
					b = 1 + rand() % moloko;
					moloko = moloko - b;
					dengi = dengi + ((b * z_moloko) * magaziny);
					break;
				case 3:
					b = 1 + rand() % makarony;
					makarony = makarony - b;
					dengi = dengi + ((b * z_makarony) * magaziny);
					break;
				case 4:
					b = 1 + rand() % krupy;
					krupy = krupy - b;
					dengi = dengi + ((b * z_krupy) * magaziny);
					break;
				case 5:
					b = 1 + rand() % myaso;
					myaso = myaso - b;
					dengi = dengi + ((b * z_myaso) * magaziny);
					break;
				case 6:
					b = 1 + rand() % ovoshchi;
					ovoshchi = ovoshchi - b;
					dengi = dengi + ((b * z_ovoshchi) * magaziny);
					break;
				case 7:
					b = 1 + rand() % frukty;
					frukty = frukty - b;
					dengi = dengi + ((b * z_frukty) * magaziny);
					break;
				case 8:
					b = 1 + rand() % napitki;
					napitki = napitki - b;
					dengi = dengi + ((b * z_napitki) * magaziny);
					break;
				case 9:
					b = 1 + rand() % yagody;
					yagody = yagody - b;
					dengi = dengi + ((b * z_yagody) * magaziny);
					break;
				case 10:
					b = 1 + rand() % sladosti;
					sladosti = sladosti - b;
					dengi = dengi + ((b * z_sladosti) * magaziny);
					break;
			}
			day++;
			a = 0;
			b = 0;
		}
		void zakupki()// Этот метод позволяет пополнять запасы
		{
			system("cls");
			cout << "Что купите?" << endl;
			cout << "1)Xлебо-булочные изделия" << endl;
			cout << "2)Кисломолочные изделия" << endl;
			cout << "3)Макаронные изделие" << endl;
			cout << "4)Крупы" << endl;
			cout << "5)Мясо и рыба" << endl;
			cout << "6)Овощи" << endl;
			cout << "7)Фруктов" << endl;
			cout << "8)Напитки" << endl;
			cout << "9)Ягоды" << endl;
			cout << "10)Конфеты, печенья и т.п." << endl;
			cout << "11)магазин" << endl;
			cin >> c;
			cout << "Сколько купите?" << endl;
			cin >> d;
			switch (c)
			{
			case 1: hleb = hleb + d; dengi = dengi - (d * z_hleb); break;
			case 2: moloko = moloko + d; dengi = dengi - (d * z_moloko); break;
			case 3: makarony = makarony + d; dengi = dengi - (d * z_makarony); break;
			case 4: krupy = krupy + d; dengi = dengi - (d * z_krupy); break;
			case 5: myaso = myaso + d; dengi = dengi - (d * z_myaso); break;
			case 6: ovoshchi = ovoshchi + d; dengi = dengi - (d * z_ovoshchi); break;
			case 7: frukty = frukty + d; dengi = dengi - (d * z_frukty); break;
			case 8: napitki = napitki + d; dengi = dengi - (d * z_napitki); break;
			case 9: yagody = yagody + d; dengi = dengi - (d * z_yagody); break;
			case 10: sladosti = sladosti + d; dengi = dengi - (d * z_sladosti); break;
			case 11: magaziny = magaziny + d; dengi = dengi - (d * z_magaziny); break;
			}
			c = 0;
			d = 0;
		}
};

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "Rus");
	magazin a; int vybor;
		if ((vybor < 0) or (vybor == 0) or (vybor > 0))
		{
			while (a.day < 365)
			{
				cout << "Кол-во денег: " << a.dengi << endl;
				cout << "Предпримите действие: " << endl;
				cout << "1) Информация " << endl;
				cout << "2) Купить товары/магазин " << endl;
				cout << "3) Следующий день " << endl;
				cout << "4) Закончить игру досрочно " << endl;
				cin >> vybor;
				if (vybor == 1) a.information();
				else if (vybor == 2) a.zakupki();
				else if (vybor == 3)
				{
					a.pokupki();
					continue;
				}
				else if (vybor == 4) break;
				if ((a.dengi <= 0) and (a.products == 0)) break;
			}
			if (a.dengi == 30000) cout << "Вы выиграли!"; else cout << "Вы проиграли";
		}
	}
	return 0;
}
