#include <stdio.h>
#include <stdlib.h>
/* Author:Angel Selva Rodriguez
   Description: This program displays Fahrenheit and Celsius
*/

main()
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;   // lower limit of temperature table //
    upper = 300; // upper limit//
    step = 20; //step size//

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%d \t %d \n ", fahr, celsius);
        fahr = fahr + step;

    }
}
