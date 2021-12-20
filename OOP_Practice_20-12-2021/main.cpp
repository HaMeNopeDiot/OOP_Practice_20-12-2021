#include <iostream>
#include <string>
#include "Toys.h"
#include "Tractors.h"
#include "Cars.h"
#include "Trailers.h"
#include "Bundle.h"

void coutInfo(Toys* _Cur);
int main()
{
    setlocale(LC_ALL, "rus");
    Toys* Array[4];
    Array[0] = new Cars(100, false, Toys::blue);
    Array[1] = new Tractors(200, true, 20);
    Array[2] = new Trailers(500, false, Toys::red);
    Array[3] = new Bundle(Array[2], 300, true, 200);
    for (int i = 0; i < 4; i++)
    {
        coutInfo(Array[i]);
    }
    return 0;
}
void coutInfo(Toys* _Cur)
{
    std::cout << _Cur->getInfo() << '\n';
}
