#include <cassert>
#include <iostream>

class Fraction
{
private:
    int m_numerator;
    int m_denominator;

public:
    Fraction(int numerator = 0, int denominator = 1)
    {
        assert(denominator != 0);
        m_numerator = numerator;
        m_denominator = denominator;
    }

    void getResult()
    {
        if (m_denominator > m_numerator)
        {
            std::cout << m_numerator << "/" << m_denominator << " is correct\n";
        }
        else
        {
            std::cout << "Your fraction is not corect\n";
        }
    }

};

int main()
{
    

    int num, denum;
    std::cout << "Enter the numerator and denominator: ";
    std::cin >> num;
    std::cin >> denum;

    Fraction fraction(num, denum);

    fraction.getResult();

    system("pause");

}