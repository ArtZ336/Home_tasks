#include <iostream>
using namespace std;

int main()
{
	//1
	/*double sum, proc;
	cout << "Введите сумму денег: ";
	cin >> sum;
	cout << "Введите процент годовых: ";
	cin >> proc;
	proc = (proc / 100.0) / 12;
	cout << "В месяц: " << sum * proc;*/
	//2
	/*int price, sum;
	cout << "Введите цену товара: ";
	cin >> price;
	cout << "Введите сумму денег: ";
	cin >> sum;
	int res = sum / price;
	cout << "Можео купить: " <<  res << "\n";
	cout << "Сдача: " << sum % price;*/
	//3
	double length, width, height;
	double N, M, R;
	cout << "Введите длину, ширину, высоту дома: ";
	cin >> length >> width >> height;
	cout << "Введите сколько краски нужно на 1м2, процент не стен, стоимость 1 литра красти: ";
	cin >> N >> M >> R;
	double S = 2 * (width * height + height * length);
	cout << S * N * (M / 100) / M << "л краски нужно\n";
	cout << S / (N * R) << " - стоимость краски\n";
}
