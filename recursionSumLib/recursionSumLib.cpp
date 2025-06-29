// recursionSumLib.cpp : Определяет функции для статической библиотеки.
//

#include "pch.h"
#include "recursionSum.h"
//using namespace std;

// TODO: Это пример библиотечной функции.
int RecursionSum(int a, int b) {
    // Если a > b, меняем местами для корректного расчета
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    
    // Базовый случай рекурсии
    if (a == b) {
        return a;
    }

    // Рекурсивный случай
    return a + RecursionSum(a + 1, b);
}
