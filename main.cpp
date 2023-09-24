#include <iostream>

constexpr int N_ELEMENTS = 100; // 101-re kell írni a 0-tól való kezdés miatt

int main()
{
    int *b = new int[NELEMENTS];  // hibás név
    std::cout << '1-100 ertekek duplazasa' // nincs ;
    for (int i = 1;) //hiányos a feltétel
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) //hibás a feltétel
    {
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // nincs megadva érték
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
