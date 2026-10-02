#include<stdio.h>

void main()
{
    float level;

    printf("Enter water level in percentage: ");
    scanf("%f",&level);

    if(level > 80)
    {
        printf("Water Level: High - Turn OFF Pump");
    }
    else if(level >= 40 && level <= 80)
    {
        printf("Water Level: Normal");
    }
    else
    {
        printf("Water Level: Low - Turn ON Pump");
    }
}
