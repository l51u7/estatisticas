#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define MAXCHAR 10000

int main(){

    FILE *fp;
    char row[MAXCHAR];

    fp = fopen("abril.csv","r");

    

    while (feof(fp) != true)
    {
        fgets(row, MAXCHAR, fp);
        printf("Row: %s", row);
    }
    

    return 0;
}