#include <iostream>

// 1 - Enter numbers
// 

int main()
{
    int a = 0;
    int b = 0;
    int f = 0;

    std::cout << " Enter a : ";
    std::cin >> a;

    std::cout << " Enter b : ";
    std::cin >> b;

    std::cout << " Enter f : ";
    std::cin >> f;

    // (à + b — f / à) + f * a * a — (a + b)
    int result = (a + b - f / a) + f * a * a - (a + b);
    std::cout << "Result : " << result << std::endl;    

    return 0;
}


