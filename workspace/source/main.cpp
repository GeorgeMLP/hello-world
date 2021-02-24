#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    n *= 2;
    std::cout << "Hello world! " << std::endl;
    int ans;
    for (int i = 0; i < n; i++)
    {
        ans *= i;
    }
    std::cout << ans << std::endl;
    system("pause");
    return 0;
}