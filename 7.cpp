#include <iostream>
#include <map>
#include <sstream>
#include <sstream>

int main()
{
	std::map<int, int[2]> grid;
	bool hit[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			hit[i][j] = false;
		}		
	}

	for (int i = 0; i < 3; i++)
	{
			std::string str;
			std::getline(std::cin, str);

			std::stringstream ss(str);
			for (int j = 0; j < 3; j++)
			{
				int a;
				ss >> a;
				grid[a][0] = i;
				grid[a][1] = j;
			}
	}

	int n;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		int b;
		std::cin >> b;
		if (auto it = grid.find(b); it != grid.end())
		{
			auto coord = it->second;
			hit[coord[0]][coord[1]] = true;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		auto row = true;
		for (int j = 0; j < 3; j++)
		{
			row &= hit[i][j];	
		}

		if (row)
		{
			std::cout << "Yes" << std::endl;
			return 0;
		}
	}

	for (int i = 0; i < 3; i++)
	{
		auto col = true;
		for (int j = 0; j < 3; j++)
		{
			col &= hit[j][i];
		}

		if (col)
		{
			std::cout << "Yes" << std::endl;
			return 0;
		}
	}


	auto left_d = true;
	for (int i = 0; i < 3; i++)
	{
		left_d &= hit[i][i];
	}

	if (left_d)
	{
		std::cout << "Yes" << std::endl;
		return 0;
	}

	auto right_d = true;
	for (int i = 0; i < 3; i++)
	{
		right_d &= hit[2-i][i];
	}

	if (right_d)
	{
		std::cout << "Yes" << std::endl;
		return 0;
	}

	std::cout << "No" << std::endl;	
	return 0;
}