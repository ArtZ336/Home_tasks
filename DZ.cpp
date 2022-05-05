#include <iostream>
using namespace std;

int main()
{
	//1
	/*double massa;
	cout << "Введите массу в тонах: ";
	cin >> massa;
	int tonna = int(massa);
	double kg = (massa - tonna) * 1000;
	int gr = (kg - (int)kg) * 1000 + 0.5;
	cout << tonna << " т. ";
	cout << int(kg) << " кг. ";
	cout << gr << " гр.\n";*/
	//2
	/*double day, hour, min, sec, time;
	cout << "Введите количество секунд: ";
	cin >> time;
	day = int(time) / 24 / 3600;
	hour = int(time / 3600);
	sec = time - (hour * 3600);
	min = int(sec / 60);
	sec = sec - (min * 60);
	cout << day << " дней " << hour << " часов " << min << " минут  " << sec << " секунд\n";*/
	//3
	double hour, min, sec;
	double hour1, min1, sec1;
	cout << "Введите время начало разговора: ";
	cin >> hour >> min >> sec;
	cout << "Введите время завершения разговора: ";
	cin >> hour1 >> min1 >> sec1;
	double diff_hour, diff_min, diff_sec;
	double cost, res;
	diff_hour = hour1 - hour;
	diff_min = (min1 - min) + (diff_hour / 60);
	diff_sec = (sec1 - sec) + (diff_min / 60);
	cost = 15 * 60 * 60;
	res = cost * diff_sec;
	cout << "Стоимость разговора: " << res;
}

