#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include"rlutil.h"
#include<time.h>
char mat[3][3]={'1','2','3','4','5','6','7','8','9'};
char player1[20],player2[20];
int chance=1;
void delay(clock_t a)
{
    clock_t start;
    start  = clock();
    while(clock()-start<a)
    {

    }
}
void drawboard(){
    gotoxy(60,4);
    char name[50]=" TIC TAC TOE =============";
    for(int i=0;name[i]!='\0';i++)
        {
        printf("%c",name[i]);
        if(i==12)
            gotoxy(60,5);
    }
  printf("\n");
  printf("                                                           %c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,203,205,205,205,203,205,205,205,187);//1
  printf("                                                           %c%c%c%c%c%c%c%c%c%c%c%c%c\n",186,0,mat[0][0],0,186,0,mat[0][1],0,186,0,mat[0][2],0,186);//2
  printf("                                                           %c%c%c%c%c%c%c%c%c%c%c%c%c\n",204,205,205,205,206,205,205,205,206,205,205,205,185);//3
  printf("                                                           %c%c%c%c%c%c%c%c%c%c%c%c%c\n",186,0,mat[1][0],0,186,0,mat[1][1],0,186,0,mat[1][2],0,186);//4
  printf("                                                           %c%c%c%c%c%c%c%c%c%c%c%c%c\n",204,205,205,205,206,205,205,205,206,205,205,205,185);//5
  printf("                                                           %c%c%c%c%c%c%c%c%c%c%c%c%c\n",186,0,mat[2][0],0,186,0,mat[2][1],0,186,0,mat[2][2],0,186);//6
  printf("                                                           %c%c%c%c%c%c%c%c%c%c%c%c%c\n",200,205,205,205,202,205,205,205,202,205,205,205,188);//7
  printf("\n");
}
int checkwin(){
if(mat[0][0]=='X'&& mat[1][1]=='X'&& mat[2][2]=='X')//1st diagonal
    return 0;
if(mat[0][2]=='X'&& mat[1][1]=='X'&& mat[2][0]=='X')//2nd diagonal
    return 0;
if(mat[0][0]=='X'&& mat[1][0]=='X'&& mat[2][0]=='X')//1st col
     return 0;
if(mat[0][1]=='X'&& mat[1][1]=='X'&& mat[2][1]=='X')//2nd col
     return 0;
if(mat[0][2]=='X'&& mat[1][2]=='X'&& mat[2][2]=='X')//3rd col
     return 0;
if(mat[0][0]=='X'&& mat[0][1]=='X'&& mat[0][2]=='X')//1st row
     return 0;
if(mat[1][0]=='X'&& mat[1][1]=='X'&& mat[1][2]=='X')//2nd row
     return 0;
if(mat[2][0]=='X'&& mat[2][1]=='X'&& mat[2][2]=='X')//3rd row
     return 0;
else if(mat[0][0]=='O'&& mat[1][1]=='O'&& mat[2][2]=='O')//1st diagonal
    return 1;
else if(mat[0][2]=='O'&& mat[1][1]=='O'&& mat[2][0]=='O')//2nd diagonal
    return 1;
else if(mat[0][0]=='O'&& mat[1][0]=='O'&& mat[2][0]=='O')//1st col
     return 1;
else if(mat[0][1]=='O'&& mat[1][1]=='O'&& mat[2][1]=='O')//2nd col
     return 1;
else if(mat[0][2]=='O'&& mat[1][2]=='O'&& mat[2][2]=='O')//3rd col
     return 1;
else if(mat[0][0]=='O'&& mat[0][1]=='O'&& mat[0][2]=='O')//1st row
     return 1;
else if(mat[1][0]=='O'&& mat[1][1]=='O'&& mat[1][2]=='O')//2nd row
     return 1;
else if(mat[2][0]=='O'&& mat[2][1]=='O'&& mat[2][2]=='O')//3rd row
     return 1;
else
    return -1;
}
void TIC_TAC_TOE()
{
char a = 'X';
char p;
char l;
p=a;
l=p;
char b='O';
    int i, j;
    printf("\t\t\t\t\t\t");
    char str1[5][20] =
    {
        {a,a,a,a,a,0,0,b,b,b,0,0,0,a,a,a,a,0},
        {0,0,a,0,0,0,0,0,b,0,0,0,0,a,0,0,0,0},
        {0,0,a,0,0,0,0,0,b,0,0,0,0,a,0,0,0,0},
        {0,0,a,0,0,0,0,0,b,0,0,0,0,a,0,0,0,0},
        {0,0,a,0,0,0,0,b,b,b,0,0,0,a,a,a,a,0,},
    };
    char str2[5][20] =
    {
        {p,p,p,p,p,0,0,b,b,b,b,0,0,p,p,p,p,p},
        {0,0,p,0,0,0,0,b,0,0,b,0,0,p,0,0,0,0},
        {0,0,p,0,0,0,0,b,b,b,b,0,0,p,0,0,0,0},
        {0,0,p,0,0,0,0,b,0,0,b,0,0,p,0,0,0,0},
        {0,0,p,0,0,0,0,b,0,0,b,0,0,p,p,p,p,p},
    };
    char str3[5][20] =
    {
        {l,l,l,l,l,0,0,b,b,b,b,0,0,l,l,l,l,l},
        {0,0,l,0,0,0,0,b,0,0,b,0,0,l,0,0,0,0},
        {0,0,l,0,0,0,0,b,0,0,b,0,0,l,l,l,l,0},
        {0,0,l,0,0,0,0,b,0,0,b,0,0,l,0,0,0,0},
        {0,0,l,0,0,0,0,b,b,b,b,0,0,l,l,l,l,l},
    };
    setColor(1);
        for(i = 0; i < 3; i++)
        {
            printf("\n");
        }
        for(i = 0; i < 5; i++)
        {
            for(j = 0; j < 18; j++)
            {
                if(str1[i][j]==b)
                    setColor(7);
                else
                    setColor(1);

                printf("%c",str1[i][j]);
                delay(50);
            }
            printf("\n");
        }
        for(i = 0; i < 5; i++)
        {
            printf("\t\t\t");
            for(j = 0; j < 18; j++)
            {
                if(str2[i][j]==b)
                    setColor(7);
                else
                    setColor(1);

                printf("%c",str2[i][j]);
                delay(50);
            }
            printf("\n");
        }
        for(i = 0; i < 5; i++)
        {
            printf("\t\t\t\t\t\t");
            for(j = 0; j < 18; j++)
            {
                if(str3[i][j]==b)
                    setColor(7);
                else
                    setColor(1);

                printf("%c",str3[i][j]);
                delay(50);
            }
            printf("\n");
        }
        Sleep(40);

}
void get_input(){
    int i,j,check;
    char no;
  while(1){
        chance=chance==0?1:0;
        setColor(4);
         printf("\n\n\nTurn for %s__\n",player1);
         scanf("%c",&no);
        fflush(stdin);
        if(48<no&&no<58)
        {
        for(i=0;i<3;i++){
             for(j=0;j<3;j++){
                    if(mat[i][j]!='X'&&mat[i][j]!='O')
                    {
                  if(no==mat[i][j]){
                        if(chance==0)
                            mat[i][j]='X';
                  }
                 }
        }

  }}
  if (no!=50&&no!=52&&no!=54&&no!=56&&no!=49&&no!=51&&no!=53&&no!=55&&no!=57)
  {setColor(6);
    printf("\a\a invalid entry..\n");
  }
  setColor(2);
  system("cls");
  drawboard();
  check=checkwin();
  if(check==0){
        system("color 06");
        setColor(15);
      printf("\n\nCongratulations");
      setColor(1);
      printf(" %s ",player1);
      setColor(15);
      printf("You won\n");
      chance=1;
      break;
  }
  else if((check==-1)&&mat[0][0]!='1'&&mat[0][1]!='2'&&mat[0][2]!='3'&&mat[1][0]!='4'&&mat[1][1]!='5'&&mat[1][2]!='6'&&mat[2][0]!='7'&&mat[2][1]!='8'&&mat[2][2]!='9')
    {
        system("color 06");
        setColor(4);
      printf("\n\n  Match Draw   \n");

      chance=1;
      break;
          }
   chance=chance==0?1:0;//ternary operator used instead of if else to change color from 1 to 0 and 0 to 1
   setColor(2);
     printf("\n\n\nTurn for %s__\n",player2);
      scanf("%c",&no);
   fflush(stdin);
    if(48<no&&no<58)
        {
        for(i=0;i<3;i++){
             for(j=0;j<3;j++){
                    if(mat[i][j]!='X'&&mat[i][j]!='O')
                    {
                  if(no==mat[i][j]){
                        if(chance==1)
                            mat[i][j]='O';
                  }
                 }
        }

  }}
  if (no!=50&&no!=52&&no!=54&&no!=56&&no!=49&&no!=51&&no!=53&&no!=55&&no!=57)
    {
        setColor(4);
    printf("\a\a invalid entry X X\n");
    }
    setColor(6);
  system("cls");
  setColor(4);
  drawboard();
  check=checkwin();
  if(check==1){
        system("color 06");
        setColor(15);
      printf("\n\nCongratulations");
      setColor(1);
      printf(" %s ",player2);
      setColor(15);
      printf("You won\n");
      break;

   }
   else if((check==-1)&&mat[0][0]!='1'&&mat[0][1]!='2'&&mat[0][2]!='3'&&mat[1][0]!='4'&&mat[1][1]!='5'&&mat[1][2]!='6'&&mat[2][0]!='7'&&mat[2][1]!='8'&&mat[2][2]!='9')
    {system("color 06");
        setColor(4);
      printf("\n\n  Match Draw   \n");

      chance=1;
      break;
          }
}

}
int main()
{
    system("color 01");

   // menu
  int ch;
  char choice;
printf("\a");
//gotoxy(37,8);
 TIC_TAC_TOE();
 int count=2;
 char praveen[40]="----DEVELOPED BY PRAVEEN KUMAR";
 setColor(4);
 printf("\n\t\t\t\t\t\t\t\t");
 for(int i = 0;i<strlen(praveen);i++)
        {
            printf("%c",praveen[i]);
            delay(200);
        }
 setColor(6);
 gotoxy(55,24);
 printf("please wait");
 gotoxy(50,25);
        for(int i = 0; i < 10; i++)
        {
            delay(200);
            printf("%c%c",254,254);
        }
  Label :
  system("color 03");
  system("cls");
  int k=49;
  for(int i=0;i<3;i++)
    for(int j=0;j<3;j++)
     {
         mat[i][j]=k;
         k++;
    }
    gotoxy(30,6);
    for(int i = 0; i <85; i++)
    {
            printf("%c", 205);
    }
    gotoxy(65,7);
  printf("1.Start the game");
  gotoxy(65,9);
  printf("2.Quit the game");
  gotoxy(65,11);
  printf("3.How to play");
  gotoxy(30,13);
  for(int i = 0; i <85; i++)
    {
            printf("%c", 205);
    }
  printf("\n\nEnter your choice__\n");
  scanf("%d",&ch);
  fflush(stdin);
  switch(ch){
     case 1 :{ system("cls");
              printf("\nWho will play for 'X'\n");
              setColor(4);
              fflush(stdin);
              gets(player1);
              setColor(15);
              printf("\nWelcome %s your sign is X\n",player1);
            p:setColor(3);
              printf("\nWho will play for 'O'\n");
              setColor(2);
              fflush(stdin);
              gets(player2);
              if(strcmp(player2,player1)==0)
              {setColor(6);
                  printf("\nplease select a different name\n");
                  fflush(stdin);
                  goto p;
              }
              setColor(15);
              printf("\nWelcome %s your sign is O\n",player2);
              printf("\n\n\n");
              setColor(1);
              system("pause");
              system("color 04");
              system("cls");
              drawboard();
              get_input();
              setColor(15);
              printf("\n\tGAME OVER\n\n");
              setColor(1);
              system("pause");
              goto Label;
	      break ;
	      }
     case 2 :{
             system("cls");
             setColor(15);
             printf("\nAre you sure you want to exit?\n");
             setColor(4);
             printf("    y-yes      ");
             setColor(1);
             printf("n-no\n");
             setColor(3);
             scanf("%s",&choice);
             if(choice=='y')
                exit(0);
             else
                goto Label;
	      break ;
	      }
     case 3 : {
	      system("cls");
	      printf("\n\n\n\n");
	      setColor(6);
	      printf("\t>>>>INSTRUCTIONS\n\n");
              printf("\t %c1.This is a two player game,there will be a square(3,3) grid \n\n\t  one will be given 'X',other 'O'.\n\n",175);
              printf("\t %c2.The one with 'X' will get 5 chances,the one with 'O' will get 4 chances.\n\n",175);
              printf("\t %c3.A person wins if he gets three same signs in any one row or column or diagonal.\n\n",175);
              printf("\t %c4.If INSTRUCTION 3 does not occur till the end, the game will end up as a draw\n\n",175);
              setColor(4);
              printf("\t %c5.If a person try to select an illegal box,the move will be passed to the other person\n\n",175);
              printf("\n");
              setColor(1);
              system("pause");
              goto Label;
	     break ;
     }
     default:
         {
        setColor(4);
        printf("\nPlease select valid any one of the above three choices\n");
        setColor(4);
        system("pause");
        goto Label;
        break;
	     }

  }
    return 0;
}
