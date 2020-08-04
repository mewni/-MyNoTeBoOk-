#include <stdio.h>
#include <stdlib.h> //for exit()
#include <time.h>

int main() {

    system("getmac");
    system("hostname");

    FILE*fp;  //File pointer to hold reference to our file
    FILE*fptr;
    int n,i;
    char c;
    time_t t;
    time(&t);
    fp = fopen("C:\\Users\\Mewni\\Documents\\CA_Assignment\\text.txt", "w");

    printf("\nInput 20 numbers :) \n");
    for(i=1; i<=20; i++) {
        printf("\nNumber %d: ",i);
        scanf("%d", &n);
        printf("%d | Number You Entered: %d Square Of the Number: %d Computer Time: %s", i, n, n*n, ctime(&t));
        fprintf(fp, "%d | Number You Entered: %d Square Of the Number: %d Computer Time: %s", i, n, n*n, ctime(&t));
    }

    // close the file
    fclose(fp);

    // open the file
    fptr = fopen("C:\\Users\\Mewni\\Documents\\CA_Assignment\\text.txt", "r");  // open file in (r) read mode
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }

    // Read content from file
    c = fgetc(fptr);
    while (c != EOF)
    {
        time_t now;
        time(&now);
        printf ("%c", c);
        c = fgetc(fptr);

        if(c=='\n')
        {
            printf(" Read at: %s", ctime(&now));
        }
    }

    // close the file
    fclose(fptr);
    return 0;
}
