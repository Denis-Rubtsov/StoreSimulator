#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime> // ����������� ������ ���������
using namespace std;

class magazin // ������ �����, � ������� ���������� ��� �����
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
		int d;// ������ ������ ����������

	public:
		magazin()
		{

		}
		void information() //���� ����� ���������� ���-�� � ���� ������� � ���������, � ����� ����
		{
			system("cls");
			cout << "���-�� �����-�������� �������: " << hleb << endl;
			cout << "���� �����-�������� �������: " << z_hleb << endl;
			cout << "���-�� ������������� �������: " << moloko << endl;
			cout << "���� ������������� �������: " << z_moloko << endl;
			cout << "���-�� ���������� �������: " << makarony << endl;
			cout << "���� ���������� �������: " << z_makarony << endl;
			cout << "���-�� ����: " << krupy << endl;
			cout << "���� ����: " << z_krupy << endl;
			cout << "���-�� ���� � ����: " << myaso << endl;
			cout << "���� ���� � ����: " << z_myaso << endl;
			cout << "���-�� ������: " << ovoshchi << endl;
			cout << "���� ������: " << z_ovoshchi << endl;
			cout << "���-�� �������: " << frukty << endl;
			cout << "���� �������: " << z_frukty << endl;
			cout << "���-�� ��������: " << napitki << endl;
			cout << "���� ��������: " << z_napitki << endl;
			cout << "���-�� ����: " << yagody << endl;
			cout << "���� ����: " << z_yagody << endl;
			cout << "���-�� ������, ������� � �.�.: " << sladosti << endl;
			cout << "���� ������, ������� � �.�.: " << z_sladosti << endl;
			cout << "���-�� ���������: " << magaziny << endl;
			cout << "���� ��������: " << z_magaziny << endl;
			cout << "����: " << day << endl;
		}
		void pokupki() //���� ����� ��������� ������� �����������
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
		void zakupki()// ���� ����� ��������� ��������� ������
		{
			system("cls");
			cout << "��� ������?" << endl;
			cout << "1)X����-�������� �������" << endl;
			cout << "2)������������� �������" << endl;
			cout << "3)���������� �������" << endl;
			cout << "4)�����" << endl;
			cout << "5)���� � ����" << endl;
			cout << "6)�����" << endl;
			cout << "7)�������" << endl;
			cout << "8)�������" << endl;
			cout << "9)�����" << endl;
			cout << "10)�������, ������� � �.�." << endl;
			cout << "11)�������" << endl;
			cin >> c;
			cout << "������� ������?" << endl;
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
				cout << "���-�� �����: " << a.dengi << endl;
				cout << "����������� ��������: " << endl;
				cout << "1) ���������� " << endl;
				cout << "2) ������ ������/������� " << endl;
				cout << "3) ��������� ���� " << endl;
				cout << "4) ��������� ���� �������� " << endl;
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
			if (a.dengi == 30000) cout << "�� ��������!"; else cout << "�� ���������";
		}
	}
	return 0;
}
