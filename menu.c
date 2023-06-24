#include <stdio.h>
#include "splash.h"
#include<string.h>
#include"login.h"
#include"menu.h"
#include"struct.h"

void menu_driven(void)
{
    printf("\n\n");
    printf("Enter 1 to see Animal details\n");
    printf("Enter 2 to see ZOO day and time\n");
    printf("Enter 3 to Book ticket\n");
    printf("Enter 4 to know about the Zoo\n\n");

    int number;
    printf("please enter any option between 1 to 4\n");
    scanf("%d",&number);

    if(number==1){
        animal_details();
    }

    if(number==2){
        Zoo_schedule();
    }
    if(number==3){
        ticket();
    }
    if(number==4){
        details();
    }
}

void Zoo_schedule(void)
{
    printf("April - october: 9am to 6pm\n");
    printf("November - March: 8am to 5pm\n");
    printf("Note: Zoo is closed every Sunday, in saturday it is 10am to 3pm\n\n");
    int number;
    printf("Enter 0 to return to main menu\n");
    scanf("%d",&number);
    if(number==0){
        menu_driven();
    }
}
void ticket(void)
{
    printf("enter 1 for regular ticket\n");
    printf("enter 2 for Vip ticket\n");
    int number;
    scanf("%d",&number);
    if(number==1){
        printf("price: 250tk\n");
        printf("price: 100tk for kids\n");
        int ticket;
        printf("enter 1 to buy ticket\n");
        scanf("%d",&ticket);
        if(ticket==1){
            int ticket_no;
            printf("please enter how many ticket you want to buy\n");
            scanf("%d",&ticket_no);
            int ticket_no_kids;
            printf("please enter how many kids ticket you want to buy\n");
            scanf("%d",&ticket_no_kids);
            int total=(ticket_no*250)+(ticket_no_kids*100);
            printf("Your total is %d\n",total);
            printf("Please pay your total bill\nyou can use bkash,nogod,rocket\n");
            char number[12];
            int payment;
            printf("please select your payment method:enter number corresponding to name\n");
            printf("1.bkash\n");
            printf("2.nogod\n");
            printf("3.rocket\n");
            printf("4.if you have no money\n");
            scanf("%d",&payment);
            if(payment==1){
                printf("WELCOME! to bkash\n");
                printf("enter your mobile no:\n");
                scanf(" %s",number);
                if(strlen(number)==11){
                    printf("Payment %d tk is successfull\n",total);
                    menu_driven();
                }
                else{
                    printf("Invalid mobile no\n");
                    menu_driven();
                }
            }
            else if(payment==2){
                printf("WELCOME! to nogod\n");
                printf("enter your mobile no:\n");
                scanf(" %s",number);
                if(strlen(number)==11){
                    printf("Payment %d tk is successfull\n",total);
                    menu_driven();
                }
                else{
                    printf("Invalid mobile no\n");
                    menu_driven();
                }
            }
            else if(payment==3){
                printf("WELCOME! to rocket\n");
                printf("enter your mobile no:\n");
                scanf(" %s",number);
                if(strlen(number)==11){
                    printf("Payment %d tk is successfull\n",total);
                    menu_driven();
                }
                else{
                    printf("Invalid mobile no\n");
                    menu_driven();
                }
            }
            else if(payment==4){
                printf("if you are a student of North south university it is free to visit\n");
                printf("enter your nsu id:\n");
                scanf(" %s", number);
                int r=strcmp(number,"2312314042");
                if(r==0){
                    printf("successfull,please bring your nsu id while visiting\n");
                    menu_driven();
                }
                else{
                    printf("Invalid nsu id\n");
                    menu_driven();
                }
            }
            else{
                printf("you have not choose any valid option,\t payment unsuccesfull\n ");
                menu_driven();
            }
        }
        else{
            menu_driven();
        }
    }
    if(number==2){
        printf("VIP ticket:1000 tk\n");
        printf("you can horse ride,elephant ride while roaming\n");
        int ticket;
        printf("enter 1 to buy ticket\n");
        scanf("%d",&ticket);
        if(ticket==1){
            int ticket_no;
            printf("please enter how many ticket you want to buy\n");
            scanf("%d",&ticket_no);
            int total=1000*ticket_no;
            printf("Total is %d\n",total);
            printf("Please pay your total bill\n,you can use bkash,nogod,rocket\n");
            char number[12];
            int payment;
            printf("please select your payment method:enter number corresponding to name\n");
            printf("1.bkash\n");
            printf("2.nogod\n");
            printf("3.rocket\n");
            scanf("%d",&payment);
            if(payment==1){
                printf("WELCOME! to bkash\n");
                printf("enter your mobile no:\n");
                scanf(" %s",number);
                if(strlen(number)==11){
                    printf("Payment %d tk is successfull\n",total);
                    menu_driven();
                }
                else{
                    printf("Invalid mobile no\n");
                    menu_driven();
                }
            }
            else if(payment==2){
                printf("WELCOME! to nogod\n");
                printf("enter your mobile no:\n");
                scanf(" %s",number);
                if(strlen(number)==11){
                    printf("Payment %d tk is successfull\n",total);
                    menu_driven();
                }
                else{
                    printf("Invalid mobile no\n");
                    menu_driven();
                }
            }
            else if(payment==3){
                printf("WELCOME! to rocket\n");
                printf("enter your mobile no:\n");
                scanf(" %s",number);
                if(strlen(number)==11){
                    printf("Payment %d tk is successfull\n",total);
                    menu_driven();
                }
                else{
                    printf("Invalid mobile no\n");
                    menu_driven();
                }
            }
            else{
                printf("you have not choose a valid option\tpayment unsuccesfull\n ");
                menu_driven();
            }
        }
        else{
            menu_driven();
        }
    }
}

void details(void)
{
    printf("Welcome to WildLands Animal park\n");
    printf("WildLands Animal park is located in Rook Island.It was founded by Tanmoy Mahmud,a student of NSU in 2023.Every month Visitors around the come to visit it.");
    printf("There are more than 30 animals too see,Lion,elephant,Tiger,Giraffe are some examples.You can also see some rare animals here.The Zoo open at 9/10am to 5/6pm depending on seasons.you can book ticket in person or you can book online ");
    printf("there is a discount for kids.For NSU student it is completely free to visit,they just have to bring their NSU id card.\n");
    int number;
    printf("\nenter 0 to return to main menu\n");
    scanf("%d",&number);

    if(number==0){
        menu_driven();
    }
}


