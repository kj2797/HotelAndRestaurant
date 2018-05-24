/*
Code will come here
*/

#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
#include<string.h>
#include<dos.h>
#include<ctype.h>
#include<graphics.h>
#include<stdio.h>


void welcome();
void detail();
void menu();
void bill();
void pay();
int order(int,long double);
void end();
void endanimation();


int i=0;
long double sum=0,quantity;
char mode;


struct
{                      //run the program on windows 7
    char name[30];
    char number[20];
    char address[100];
}pp1;
struct
{
    int sno;
    int name;
    long double quantity;
    long double amount;
}billdetail[5];


void main()            //starting of main
{
   START :
   welcome();
   clrscr();
   select :
   cout<<"\n\n\n\n\t\t\tORDER : \n\t\t\t\t1 : TAKE AWAY\n\t\t\t\t2 : HAVING IT HERE\n\t\t\t\t3 : HOME DELIVERY\n\t\t\t\t4 : EXIT\n\n\t\t\t\tYOUR CHOICE : ";
   cin>>mode;
   clrscr();
   if(mode=='1')
   {
     detail();
     menu();
     bill();
     pay();
     end();
   }
   else if(mode=='2')
   {
     detail();
     menu();
     bill();
     pay();
     end();

   }
   else if(mode=='3')
   {
     detail();
     menu();
     bill();
     pay();
     end();

   }
   else if(mode=='4')
     goto end;
   else
   {
     cout<<"\n\n\n\n\t\t\t\tINVALID ENTRY\n\t\t\t\tTRY AGAIN";
     delay(2000);
     clrscr();
     goto select;
   }
   clrscr();
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t     WOULD YOU LIKE TO ORDER AGAIN(Y/N) : ";
   char yesno;
   cin>>yesno;
   if(yesno=='y' || yesno=='Y')
     goto START;
   endanimation();
   end :

}                            //end of main() function
