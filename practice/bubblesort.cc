#include <iostream>//iostream...標準入出力オブジェクトを提供
#include <vector>//動的配列クラス http://vivi.dyndns.org/tech/cpp/vector.html
using namespace std;//stdの省略を宣言？

int main()
{
	int		n;
	short	swap_check = 1;
	int		num;
	cout << "Enter the amount of numbers to sort: ";
	cin >> n;
	vector<int> numbers;
	cout << "Enter " << n << " numbers: ";

	for (int i = 0; i < n; i++)
	{
		cin >> num;
		numbers.push_back(num);//配列のうしろに追加
	}

	for (int i = 0; (i < n) && (swap_check == 1); i++)
	{
			swap_check = 0;
			for (int j = 0; j < n - 1 - i; j++)
			{
				if (numbers[j] > numbers[j + 1])
				{
					swap_check = 1;
					swap(numbers[j], numbers[j + 1]);
				}
			}
	}

	cout << "\nSorted Array : ";
	for (int i = 0; i < numbers.size(); i++)
	{
		if (i != numbers.size() - 1)
		{
			cout << numbers[i] << ", ";
		}
		else
		{
			cout << numbers[i] << endl;
		}
	}
	return 0;
}