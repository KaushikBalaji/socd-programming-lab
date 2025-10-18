#include "headers.h"

float DeepMaths(int a, int b, int choice)
{

    switch (choice)
    {
    case 1:
        return Power(a, b);
    case 2:
        if (a <0)
            return -99;
        return Root(a, b);
    case 3:
        if (a <= 0 || b <= 0)
            return -99;
        return Logarithm(a, b);
    }
}