#include "Computer.h"
#include <vector>

int main()
{
	vector<Computer> arr;
	arr.push_back(Computer("HP", 1.2, 4, 0, 20000));
	arr.push_back(Computer("Acer", 3.2, 16, 0, 35000));
	arr.push_back(Computer("MSI", 6.4, 32, 0, 64000));
	arr.push_back(Computer("HP", 3.2, 8, 1, 32000));

	for (int i = 0; i < arr.size(); i++)
	{
		arr[i].show();
		cout << endl;

	}
}