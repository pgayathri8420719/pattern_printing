#include <iostream>

void SquarePattern(int side)
{
    for (int  i= 1; i <= side; i++)
    {
        for (int j = 1; j <= side; j++)
        {
            std::cout <<"* ";
        }
        std::cout<<std::endl;
    }
}

int main()
{
    int unitNumber = 0;
    std::cout<<"Enter number of units for the square side\n";
    std::cin>>unitNumber;

    SquarePattern(unitNumber);

    return 0;
}