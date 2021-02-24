#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    n *= 2;
    std::cout << "Hello world! " << std::endl;
    int ans = 1;
    for (int i = 1; i < n; i++)
    {
        ans *= i;
    }
    std::cout << ans << std::endl;
    std::cout << "another push" << std::endl;
    system("pause");
    return 0;
}