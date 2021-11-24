#include <scientific_converter.h>

int func=0;
int a=0;
void scientific_converter_menu(void);

int main(int func, int a) 
{
    printf("\n=====Scientific Converter=====\n");
    while(1)
    {
        scientific_converter_menu();
    }
}

void scientific_converter_menu(void)
{
    printf("\nAvailable modes\n");
    printf("\n1. Trigonometry\n2. Exponential\n3. Constant\n4. Exit");
    printf("\nEnter your choice\n\n");
    scanf("%d", &mode);
    
    if (4 == mode)
    {
        printf("\nThank you... ");
        exit(0);
    }
    
    switch (mode)
    {
        case 1:
        printf("Trigonometry");
        printf("Available Operations");
        printf("\n1. Sine\n2. Cosine\n3. Tangent\n4. Cosecant\n5. Secant\n6. Cotangent\n");
        scanf("%d %d", &func, &a);

        int trigo_mode(int func, int a);
        getchar();
        break;

         case 2:
        printf("Exponential");
        printf("Available Operations");
        printf("\n1. Power of e\n2. Logorithm\n");
        scanf("%d %d", &func, &a);

        int expon_mode(int func, int a);
        getchar();
        break;

       case 3:
        printf("Constant functions");
        printf("Available Operations");
        printf("\n1. Physical constants\n");
        scanf("%d", &func);

        int const_mode(int func);
        printf("\n1. Phi\n2. e\n3. Mass of electron\n");
        getchar();
        break;

        default:
        printf("\n\tEnter correct input");
         break; 
    }
}
