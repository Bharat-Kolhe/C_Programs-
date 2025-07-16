// Profit or Loss
#include <stdio.h>
int main()
{
    float cp, sp;
    scanf("%f %f", &cp, &sp);
    if (sp > cp)
        printf("Profit = %.2f", sp - cp);
    else if (cp > sp)
        printf("Loss = %.2f", cp - sp);
    else
        printf("No profit no loss");
    return 0;
}