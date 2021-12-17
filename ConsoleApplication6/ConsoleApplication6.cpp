#include "stdafx.h"//дан массив A из N элементов, состоящий из нулей и еди - ниц.заменить единицы нулями и наоборот.
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <clocale>
#include<cstring>
#define A 10
#define B 50
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    char str[A][B], s[B], s1[B];
    int i, j, a, b, ind, len, k;
    char* start, * end, t;
    cout << "Введите кол-во строк, которое вы собираетесь написать: ";
    do
    {
        (cin >> k).get();
        if (k < A) break;
        else cout << "Кол-во строк не должно превышать 10-ти. Повторите попытку\n";
    } while (k > A);


    cout << "Введите строки(кол-во символов должно быть меньше 50):\n";
    for (i = 0; i < k; i++)
    {
        gets_s(str[i]);
    }

    cout << "Вы ввели:" << endl; 