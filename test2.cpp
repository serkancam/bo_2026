#include <iostream>
using namespace std;

using namespace std;
int main()
{

   

    char kelime[11] = {'p', 'r', 'o', 'g', 'r', 'a',
'm', 'l', 'a', 'm', 'a'};
    for (int i = 10; i >= 0; i--)
    {
        cout << kelime[i] << " "; // Her harften sonra bir boşluk
    }
    return 0;
}
