#include <stdio.h>
#define SIZE 20
#define CITY_SIZE 50

int compare(char *s1, char *s2);  // returns 1 if equal, 0 otherwise

int main(void) {
    printf("Program developed by Havi Arji\n");

    int seq[SIZE] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    char *city[SIZE] = {
        "Long Prairie","New Prague","St. Vincent","New Ulm","Red Lake",
        "Staples","Bow String","Detroit Lakes","Alexandria","Pipestone",
        "Morris","Milaca","Evergreen","Rush City","Nisswa","Cottage Grove",
        "Walker","Dumont","Granite Falls","Brandon"
    };

    char *date[SIZE] = {
        "1860-61","12/16/1860","12/28/1880","2/5/1881","2/6/17",
        "9/3/17","12/23/28","1/28/39","2/15/50","9/28/64",
        "7/9/75","3/5/79","4/16/79","5/14/79","7/26/79","4/24/81",
        "9/27/82","6/4/93","2/9/94","4/29/11"
    };

    float mag[SIZE] = {
        5.0,4.7,3.6,3.5,3.8,4.3,3.8,3.9,3.6,3.4,
        4.7,1.0,3.1,0.1,1.0,3.6,2.0,4.1,3.1,3.12
    };

    // Table header
    printf("#  %-20s %-12s %-10s %-12s\n", "Name", "Date", "Magnitude", "Damage Cost");
    printf("-----------------------------------------------------------------------\n");

    // Print rows and accumulate for averages
    double sumMag = 0.0, sumCost = 0.0;
    for (int i = 0; i < SIZE; i++) {
        double cost = mag[i] * 1000000.0;
        sumMag  += mag[i];
        sumCost += cost;
        printf("%-2d %-20s %-12s %-10.2f $%-11.0f\n",
               seq[i], city[i], date[i], mag[i], cost);
    }

    // Averages (shown below Brandon)
    printf("-----------------------------------------------------------------------\n");
    printf("Average (MN): Magnitude = %.2f, Damage Cost = $%.0f\n",
           sumMag / SIZE, sumCost / SIZE);

    // Continuous search loop
    char key[CITY_SIZE];
    while (1) {
        int found = 0;
        printf("\nEnter city (type 'quit' to exit): ");
        if (scanf("%49[^\n]%*c", key) != 1) break;   // read line, drop newline
        if (compare(key, "quit")) break;

        for (int i = 0; i < SIZE; i++) {
            if (compare(city[i], key)) {
                double cost = mag[i] * 1000000.0;
                printf("%s is found at position %d. Date = %s, Magnitude = %.2f, Damage = $%.0f\n",
                       key, seq[i], date[i], mag[i], cost);
                found = 1;
                break;
            }
        }
        if (found == 0) {
            printf("%s is not found in the array\n", key);
        }
    }
    return 0;
}

// Same as original: character-by-character exact match
int compare(char *s1, char *s2) {
    int i;
    for (i = 0; s1[i] == s2[i]; i++) {
        if (s1[i] == '\0') return 1;
    }
    return 0;
}
