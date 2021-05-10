#include <stdio.h>
#include <math.h>

int main()
{
    for (int i = 1; i < 100; i++)
    {
        int count = 0; // đếm số ước của a
        for (int j = 2; j <= sqrt(num); j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 0 && i > 1)
            printf("%d\n", );
    }

    return 0;
}
