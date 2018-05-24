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


void welcome()
{
      clrscr();
      for(int i=0;i<=37;i++)
      {
	      cout<<"* ";
	      delay(50);
      }
      for(int a=0;a<25;a++)
      {
	      gotoxy(80,a);
	      cout<<"*";
	      delay(50);
      }
      for(i=1;i<=38;i++)
      {
	      gotoxy(1,i);
	      cout<<"* ";
	      delay(50);
      }
      for(i=0;i<=24;i++)
      {
	      cout<<"* ";
	      delay(50);
	      gotoxy(i,70);
      }
      cout<<"*";

      gotoxy(3,8);              //welcome w start

      for(i=0;i<=8;i++)
      {
      gotoxy(3,i+8);
      cout<<"";
      delay(30);
      }
      cout<<"";
      int l=16;

      for(i=0;l>=11;i++,l--)
       {
       gotoxy(i+4,l);
       cout<<"";
       delay(30);
       }
      int k=11;

      for(i=0;k<=16;i++,k++)
      {
      gotoxy(i+8,k);
      cout<<"";
      delay(30);
      }

     for(i=0;i<=8;i++)
     {
     gotoxy(14,i+8);
     cout<<"";
     delay(30);
     }                     //  w end

     for(i=0;i<=8;i++)    //start of e
	{
	gotoxy(16,i+8);
	cout<<"@";
	delay(30);
	}
	gotoxy(17,8);

    for(i=0;i<=3;i++)
       {
       cout<<" @";
       delay(30);
       }
	gotoxy(17,12);

    for(i=0;i<=3;i++)
       {
       cout<<" @";
       delay(30);
       }
	gotoxy(17,16);

    for(i=0;i<=3;i++)
       {
       cout<<" @";
       delay(30);
       }               //end of e



    for(i=0;i<=8;i++)       //start of l
	{
	gotoxy(27,i+8);
	cout<<"";
	delay(30);
	}

    for(i=0;i<=3;i++)
       {
       cout<<" ";
       delay(30);
       }                 //end of l

    gotoxy(43,8);                         //start of c

    for(i=0;i<=6;i++)
      {
      cout<<"#";
      delay(30);
      gotoxy(43-i,8);
      }

    for(i=0;i<=9;i++)
      {
      cout<<"#";
      delay(30);
      gotoxy(37,8+i);
      }
      gotoxy(38,16);

    for(i=0;i<=5;i++)
      {
      cout<<"#";
      delay(30);
      }
      gotoxy(52,8);                         //start of c

    for(i=0;i<=6;i++)                 //start of o
      {
      cout<<"";
      delay(30);
      gotoxy(52-i,8);
      }

    for(i=0;i<=9;i++)
      {
      cout<<"";
      delay(30);
      gotoxy(46,8+i);
      }
     gotoxy(47,16);

   for(i=0;i<=5;i++)
      {
      cout<<"";
      delay(30);
      }

   for(i=8;i>=0;i--)
   {
   gotoxy(53,16-i);
   cout<<"";
   delay(30);
    }                  //end of o

   gotoxy(54,16);  	//start of m

   for(i=0;i<=8;i++)
   {
   gotoxy(55,i+8);
   cout<<"$";
   delay(30);
    }
   gotoxy(55,16);
   cout<<"$";
   l=8;

   for(i=56;l<=13;i++,l++)
      {
      gotoxy(i,l);
	cout<<"$";
	delay(30);
      }
   k=13;

   for(i=60;k>7;i++,k--)
      {
      gotoxy(i,k);
	cout<<"$";
	delay(30);
      }

   for(i=8;i<=16;i++)
   {
   gotoxy(66,i);
   cout<<"$";
    delay(30);
    }                     //end of m

    for(i=8;i<=16;i++)    //start of e
	{
	gotoxy(68,i);
	cout<<"";
	delay(30);
	}
	gotoxy(69,8);

    for(i=0;i<=3;i++)
       {
       cout<<" ";
       delay(30);
       }
	gotoxy(69,12);

    for(i=0;i<=3;i++)
       {
       cout<<" ";
       delay(30);
       }
	gotoxy(69,16);

    for(i=0;i<=3;i++)
       {
       cout<<" ";
       delay(30);
       }               //end of e


    gotoxy(3,17);
    for(i=0;i<73;i++)
    {
    cout<<"=";
    delay(30);
    }

    delay(300);
    //to

    gotoxy(17,17);
    cout<<"\n*\t\t\t   ++++++++++++   ++++++++++   ";
    cout<<"\n*\t\t\t	||        |        |   ";
    cout<<"\n*\t\t\t	||        |        |   ";
    cout<<"\n*\t\t\t	||        |        |   ";
    cout<<"\n*\t\t\t	||        |        |   ";
    cout<<"\n*\t\t\t	||        ++++++++++  ";
    delay(3000);
    i=0;
    clrscr();

   for(int U=1,j=80;U<=80;U++,j--)
   {
   gotoxy(U,1);
   cout<<"";
   gotoxy(j,10);
   cout<<"";
   delay(30);
   }
   gotoxy(4,3);
   cout<<"     ||======))   ==========    ++++++++   ++++++++          $";
   cout<<"\n        ||      ))       ||              ++         ++         $ $";
   cout<<"\n        ||======))       ||            ++         ++          $   $";
   cout<<"\n        ||               ||          ++         ++           $$$$$$$";
   cout<<"\n        ||               ||        ++         ++   	    $       $";
   cout<<"\n        ||           ==========    ++++++++   ++++++++     $         $";
   delay(1000);


   for(int o=1,m=24,r=6;o<25;o++,m--,r+=3)
   {
     gotoxy(1,o);
     cout<<"";
     delay(80);
     gotoxy(80,m);
     cout<<"";
     gotoxy(r,23);
     cout<<"";
   }
   delay(500);


     gotoxy(1,11);
     cout<<"\n        ||=====||        $       ||            #      ||=====    ";
     cout<<"\n        ||     ||       $ $      ||           # #     ||              ";
     cout<<"\n        ||=====||      $   $     ||          #   #    ||         ";
     cout<<"\n        ||            $$$$$$$    ||         #######   ||              ";
     cout<<"\n        ||           $       $   ||=====   #       #  ||=====    ";
   delay(4000);
   up :
   gotoxy(10,20);
   cout<<"               PROCEED TO ORDERING (Y/N): ";
   char t;
   cin>>t;
   if(t=='n' || t=='N')
     {
     clrscr();
     cout<<"\n\n\n\n\t\t\t\tPROCESSING";
     cout<<" . ";
     delay(400);
     cout<<" . ";
     delay(400);
     cout<<" . ";
     delay(800);
     cout<<" . ";
     clrscr();
     goto up;
     }
   else if(t!='y' && t!='Y')
     {
     clrscr();
     cout<<"\n\n\n\n\t\t\t\tPROCESSING";
     cout<<" . ";
     delay(400);
     cout<<" . ";
     delay(400);
     cout<<" . ";
     delay(800);
     cout<<" . ";
     clrscr();
     cout<<"\n\n\n\n\t\t\t\tINVALID ENTRY\n\t\t\t\tTRY AGAIN";
     delay(2000);
     clrscr();
     goto up;
     }
     clrscr();
     cout<<"\n\n\n\n\t\t\t\tPROCESSING";
     cout<<" . ";
     delay(400);
     cout<<" . ";
     delay(400);
     cout<<" . ";
     delay(800);
     cout<<" . ";
     clrscr();
}


void detail()
{
     cout<<"\n\n\n\n\t\t\t\tPROCESSING";
     cout<<" . ";
     delay(400);
     cout<<" . ";
     delay(400);
     cout<<" . ";
     delay(800);
     cout<<" . ";
     clrscr();
     cout<<"\n\n\t\t\tENTER YOUR NAME : ";
     gets(pp1.name);
     cout<<"\n\n\t\t\tENTER YOUR PHONE NUMBER : ";
     cin>>pp1.number;
     if(mode=='1')
     {
	 cout<<"\n\n\t\t\tENTER YOUR ADDRESS : ";
	 gets(pp1.address);
	 clrscr();
     }
     else if(mode=='3')
     {
	 cout<<"\n\n\t\t\tENTER YOUR ADDRESS : ";
	 gets(pp1.address);
	 clrscr();
     }
     else if(mode=='2')
     {
     strcpy(pp1.address,"NOT APPLICABLE");
     }
     cout<<"\n\n\n\n\t\t\t\tPROCESSING";
     cout<<" . ";
     delay(400);
     cout<<" . ";
     delay(400);
     cout<<" . ";
     delay(800);
     cout<<" . ";
     clrscr();
}


void menu()
{
    clrscr();
    cout<<"\n\t\t\t||    ||  ******  |*    |   *    * ";
    cout<<"\n\t\t\t| |  | |  |_____  | *   |   *    * ";
    cout<<"\n\t\t\t|  ||  |  |       |  *  |   *    * ";
    cout<<"\n\t\t\t|      |  ******  |    *|   ******";
    cout<<"\n\t\t   ---------------------------------------------";
    cout<<"\n\n\n   S.NO ||  PRODUCT NAME      ||  PRICE(Rs)||\t  DESCRIPTION";
    cout<<"\n   -----------------------------------------------------------";
    cout<<"\n   * 1  ||  VEG PIZZA         ||  650      ||    -Thin crust layed with exotic\n\t\t\t\t\t         cheese and red tomatoes";
    cout<<"\n   * 2  ||  GARLIC BREAD      ||  350      ||    -Handmade bread filled with   \t\t\t\t\t                 Garlic and covered with cheese";
    cout<<"    * 3  ||  GRILLED SANDWICH  ||  250      ||    -American Bread stuffed with \n\t\t\t\t\t         mashed potatoes and cheese ";
    cout<<"\n   * 4  ||  LATTE             ||  200      ||    -Ghanian cocoa dipped in dark \n\t\t\t\t\t         sugar and dissolved in cow milk";
    cout<<"   * 5  ||  SODA WATER        ||  150      ||   -Juice of fresh mountain lemon \t\t\t\t\t                 with fresh soda water";
    int a=0;
    cout<<"\n\n\t\tYOUR CHOICE : ";
    cin>>a;
    cout<<"\n\t\tQUANTITY : ";
    cin>>quantity;
    clrscr();
    cout<<"\n\n\n\n\t\t\t\tPROCESSING";
    cout<<" . ";
    delay(400);
    cout<<" . ";
    delay(400);
    cout<<" . ";
    delay(800);
    cout<<" . ";
    clrscr();
    order(a,quantity);
}




