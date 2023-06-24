#include <stdio.h>
#include "splash.h"
#include<string.h>
#include"login.h"
#include"menu.h"
#include"struct.h"


void animal_details(void) ///getting animal details using structure
{
    struct animal
    {
        int serial_no;
        char name[30];
        int cell_no;
        char food[30];
    };
    struct animal one[36]; ///struct to get animal details
    int i;
    char s1[20],s2[20],s3[20],s4[20];
    FILE *fp;
    fp=fopen("animal.txt","r");
    printf("Serial no\t Name\t\t Cell no\t  food\n\n");

    /**
    *@brief reading animal data from file
    */

    for(i=0;i<35;i++){
        fscanf(fp,"%d",&one[i].serial_no);
        fscanf(fp," %s", one[i].name);
        fscanf(fp,"%d",&one[i].cell_no);
        fscanf(fp," %s", one[i].food);
    }
    for(i=0;i<7;i++){
        printf("%d\t\t",one[i].serial_no);
        printf("%s\t ",one[i].name);
        printf("%d\t\t",one[i].cell_no);
        printf("%s\t",one[i].food);
        printf("\n");
    }
    for(i=7;i<29;i++){
        printf("%d\t\t",one[i].serial_no);
        printf("%s\t\t",one[i].name);
        printf(" %d\t\t",one[i].cell_no);
        printf("%s\t",one[i].food);
        printf("\n");
    }
        printf("%d\t  ",one[29].serial_no);
        printf("%s\t ",one[29].name);
        printf("%d\t\t",one[29].cell_no);
        printf("%s\t",one[29].food);
        printf("\n\n\n");

    printf("SPECIAL CATEGORY: \n");
    for(i=30;i<35;i++){
        printf("%d\t\t",one[i].serial_no);
        printf("%s\t ",one[i].name);
        printf("%d\t\t",one[i].cell_no);
        printf("%s\t",one[i].food);
        printf("\n");
    }
    printf("\n\n***Please beware of Cell no 555,do not go very near of the cell***\n");
    int number;
    printf("Enter 0 to return to main menu\n");
    scanf("%d",&number);
    if(number==0){
        menu_driven();
    }
}
