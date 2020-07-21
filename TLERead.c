/* Simple Program to read Two Line Element sets of data.
   Copy Line 1 and Line 2 into the strcpy(...) within the "..."
    Rename to main.c if it doesnt work and compile again using gcc -o main main.c. 
    Ensure you are in the right directory before compiling.
 */
 
#include "stdio.h"
#include "stdlib.h"
#include "string.h"


void main()
{

    char line1[70];
    char line2[70];

    // Insert TLE Line 1 here
    strcpy(line1,"1 23455U 94089A   97320.90946019  .00000140  00000-0  10191-3 0  2621"); 
    
    // Insert TLE Line 2 Here
    strcpy(line2, "2 23455  99.0090 272.6745 0008546 223.1686 136.8816 14.11711747148495");     

    
    // Satellite Number
    printf("Satellite Number: %c%c%c%c%c\n", *(line1 + 2), *(line1 + 3), *(line1 + 4), *(line1 + 5), *(line1 + 6));

    // Classification
    if( *(line1 + 7) == 'U')
    {
       printf("Unclassified Satellite\n");
    }
    else
    {    
       printf("Classified Satellite\n");
    }
   
    // International Satellite Designator
    printf("Launch Year: '%c%c\n", *(line1 + 9), *(line1 + 10));
    printf("Launch Number: %c%c%c\n", *(line1 + 11), *(line1 + 12), *(line1 + 13));

    // Motion Data
    printf("Ballistic Coefficient: %c%c%c%c%c%c%c%c%c%c\n", *(line1 + 33), *(line1 + 34), *(line1 + 35), *(line1 + 36), *(line1 + 37), *(line1 + 38), *(line1 + 39), *(line1 + 40), *(line1 + 41), *(line1 + 42));
    printf("Second Time Derivative: %c%c%c%c%c%c%c%c\n", *(line1 + 44), *(line1 + 45), *(line1 + 46), *(line1 + 47), *(line1 + 48), *(line1 + 49), *(line1 + 50), *(line1 + 51));

    // BSTAR Drag Term
    printf("Radiation Pressure Coefficient: %c%c%c%c%c%c%c%c\n", *(line1 + 53), *(line1 + 54), *(line1 + 55), *(line1 + 56), *(line1 + 57), *(line1 + 58), *(line1 + 59), *(line1 + 60));


    // Satellite Motion Data
    printf("Inclination (deg): %c%c%c%c%c%c%c%c\n", *(line2 + 8), *(line2 + 9), *(line2 + 10), *(line2 + 11), *(line2 + 12), *(line2 + 13), *(line2 + 14), *(line2 + 15));
    printf("Right ascension of Ascneding Node (deg): %c%c%c%c%c%c%c%c\n", *(line2 + 17), *(line2 + 18), *(line2 + 19), *(line2 + 20), *(line2 + 21), *(line2 + 22), *(line2 + 23), *(line2 + 24));
    printf("Eccentricity: %c%c%c%c%c%c%c\n", *(line2 + 26), *(line2 + 27), *(line2 + 28), *(line2 + 29), *(line2 + 30), *(line2 + 31), *(line2 + 32));
    printf("Argument of Periapsis (deg): %c%c%c%c%c%c%c%c\n", *(line2 + 34), *(line2 + 35), *(line2 + 36), *(line2 + 37), *(line2 + 38), *(line2 + 39), *(line2 + 40), *(line2 + 41));
    printf("Mean Anomaly (deg): %c%c%c%c%c%c%c%c\n", *(line2 + 43), *(line2 + 44), *(line2 + 45), *(line2 + 46), *(line2 + 47), *(line2 + 48), *(line2 + 49), *(line2 + 50));
    printf("Mean Motion (rev/day): %c%c%c%c%c%c%c%c%c%c%c\n", *(line2 + 52), *(line2 + 53), *(line2 + 54), *(line2 + 55), *(line2 + 56), *(line2 + 57), *(line2 + 58), *(line2 + 59), *(line2 + 60), *(line2 + 61), *(line2 + 62));
    printf("Revolutions @ Epoch (revs): %c%c%c%c%c\n", *(line2 + 63), *(line2 + 64), *(line2 + 65), *(line2 + 66), *(line2 + 67));

}
 
 
