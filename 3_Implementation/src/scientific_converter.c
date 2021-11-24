#include <scientific_converter.h>

int trigo_mode(int func, int a)
{
    switch (func)
    {
        case 1:
         return sin(a);
        case 2:
        return cos(a);
        case 3:
        return tan(a);
        case 4:
        return cosec(a);
        case 5:
        return sec(a);
        case 6:
        return cot(a);
        default:
        return 0;
    }
}

int expon_mode(int func, int a)
{
    switch (func) 
    {
        case 1:
        return exp(a);
        case 2:
        return log(a);
        default:
        return 0;
    }
}

int const_mode(int func)
{
    switch (func) 
    {
      case 1:
      return 3.14
      case 2:
      return 2.718
      case 3:
      return 9.12x10^-31;
      default:
      return 0;
    }
}
