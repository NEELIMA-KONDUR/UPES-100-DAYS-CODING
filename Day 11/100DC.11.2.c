// Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float cp, sp;
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);
    if (sp > cp)
        printf("Profit %.0f%%\n", ((sp - cp) / cp) * 100);
    else if (cp > sp)
        printf("Loss %.0f%%\n", ((cp - sp) / cp) * 100);
    else
        printf("No Profit No Loss\n");
    return 0;
}
