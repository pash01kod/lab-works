#include <iostream>

class Vector
{
public:
	int x, y;
	Vector add(Vector right)
	{
		Vector result;
		result.x = x + right.x;
		result.y = y + right.y;
		return result;
	}
	Vector sub(Vector right)
	{
		Vector result;
		result.x = x - right.x;
		result.y = y - right.y;
		return result;
	}
};

int main()
{
	Vector vec1, vec2;

	std::cout << "Enter the first vector: \n";
	std::cin >> vec1.x;
	std::cin >> vec1.y;

	std::cout << "Enter the second one: \n";
	std::cin >> vec2.x;
	std::cin >> vec2.y;

	Vector sum = vec1.add(vec2);
	Vector sub = vec1.sub(vec2);

	system("pause");
}