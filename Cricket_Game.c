//The program was made by Akshat Upadhyay
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    char i[50],w[50];
    int j,k,p,l,m,n;
    printf("Enter Player-1 Name:\n");
    scanf("%[^\n]%*c",i);
    printf("\nEnter Player-2 Name:\n");
    scanf("%[^\n]%*c",w);
    cc:
    printf("\n%s choose number of overs to play for:\n",i);
    printf("\nPress 0 \t for Super over match \nPress 1 \t for 5 over match \nPress 2 \t for 10 over match \nPress 3 \t for 20 over match \nPress 4 \t for 50 over match \nPress 5 \t for Test match\n\n");
    scanf("%d",&j);
    switch(j)
         {
           case 0: srand(time(0));
                   abc:
                   printf("\n\tToss Time!!!\nPress 1 \tfor Head \nPress 2 \tfor tail\n\n");
                   scanf("%d",&k);
                   if(k==1 || k==2)
                   {
                      l=(rand()%2)+1;
                      if(k==l)
                         {
                             printf("\n%s won the toss\n",i);
                             bcdefgh:
                             printf("\nPress 1 \tfor Batting \nPress 2 \tfor Fielding\n\n");
                             scanf("%d",&m);
                             int ov=0,ba=6,wk=2,runs=0,lll=1,ll;
                             switch(m)
                             {
                                 case 1: printf("\n\n%s opted for batting",i);
                                         printf("\n\nOvers remaining : \t%d\n",ov);
                                         printf("Balls remaining : \t%d\n",ba);
                                         printf("Wickets remaining : \t%d\n",wk);
                                         printf("Runs : \t%d\n",runs);
                                         printf("\n\nFirst Delivery\n");
                                         if(lll=1)
                                         {
                                             printf("\nReady \n\n");
                                             scanf("%d",&ll);
                                         }
                                         runs=Overs(ov,ba,wk,runs);
                                         if(lll=1)
                                         {
                                             printf("\nIt's Chasing time.Press any number when you are ready \n\n");
                                             scanf("%d",&ll);
                                         }
                                         Chase(ov,ba,wk,runs);
                                         break;

                                 case 2: printf("\n\n%s opted for fielding\n",i);
                                         printf("\n\nOvers remaining : \t%d\n",ov);
                                         printf("Balls remaining : \t%d\n",ba);
                                         printf("Wickets remaining : \t%d\n",wk);
                                         printf("Runs : \t%d\n",runs);
                                         printf("\n\nFirst Delivery\n");
                                         if(lll=1)
                                         {
                                             printf("\nReady \n\n");
                                             scanf("%d",&ll);
                                         }
                                         runs=Overs(ov,ba,wk,runs);
                                         if(lll=1)
                                         {
                                             printf("\nIt's Chasing time.Press any number when you are ready \n\n");
                                             scanf("%d",&ll);
                                         }
                                         Chase(ov,ba,wk,runs);
                                         break;

                                 default: printf("\n\nInvalid Entry Choose from 1 or 2\n");
                                          goto bcdefgh;
                             }
                                }
                          else
                          {
                              printf("\n%s won the toss\n",w);
                              cde:
                             printf("\nPress 1 \tfor Batting \nPress 2 \tfor Fielding\n\n");
                             scanf("%d",&m);
                             int ov=0,ba=6,wk=2,runs=0,lll=1,ll;
                             switch(m)
                             {
                                 case 1: printf("\n\n%s opted for batting\n",w);
                                         printf("\n\nOvers remaining : \t%d\n",ov);
                                         printf("Balls remaining : \t%d\n",ba);
                                         printf("Wickets remaining : \t%d\n",wk);
                                         printf("Runs : \t%d\n",runs);
                                         printf("\n\nFirst Delivery\n");
                                         if(lll=1)
                                         {
                                             printf("\nReady \n\n");
                                             scanf("%d",&ll);
                                         }
                                         runs=Overs(ov,ba,wk,runs);
                                         if(lll=1)
                                         {
                                             printf("\nIt's Chasing time.Press any number when you are ready \n\n");
                                             scanf("%d",&ll);
                                         }
                                         Chase(ov,ba,wk,runs);
                                         break;

                                 case 2: printf("\n\n%s opted for fielding\n",w);
                                         printf("\n\nOvers remaining : \t%d\n",ov);
                                         printf("Balls remaining : \t%d\n",ba);
                                         printf("Wickets remaining : \t%d\n",wk);
                                         printf("Runs : \t%d\n",runs);
                                         printf("\nFirst Delivery\n\n");
                                         if(lll=1)
                                         {
                                             printf("\nReady \n\n");
                                             scanf("%d",&ll);
                                         }
                                         runs=Overs(ov,ba,wk,runs);
                                         if(lll=1)
                                         {
                                             printf("\nIt's Chasing time.Press any number when you are ready \n\n");
                                             scanf("%d",&ll);
                                         }
                                         Chase(ov,ba,wk,runs);
                                         break;

                                 default: printf("\n\nInvalid Entry Choose from 1 or 2\n");
                                         goto cde;
                             }
                          }
                   }
                   else
                   {
                       printf("\n\nInvalid Entry Choose from 1 or 2\n");
                          goto abc;
                   }
                   break;

           case 1: srand(time(0));
                   pqr:
                   printf("\n\tToss Time!!!\nPress 1 \tfor Head \nPress 2 \tfor tail\n\n");
                   scanf("%d",&k);
                   if(k==1 || k==2)
                   {
                      l=(rand()%2)+1;
                      if(k==l)
                         {
                             printf("\n%s won the toss\n",i);
                             bcd:
                             printf("\nPress 1 \tfor Batting \nPress 2 \tfor Fielding\n\n");
                             scanf("%d",&m);
                             int ov=4,ba=6,wk=10,runs=0,lll=1,ll;
                             switch(m)
                             {
                                 case 1: printf("\n\n%s opted for batting",i);
                                         printf("\n\nOvers remaining : \t%d\n",ov);
                                         printf("Balls remaining : \t%d\n",ba);
                                         printf("Wickets remaining : \t%d\n",wk);
                                         printf("Runs : \t%d\n",runs);
                                         printf("\n\nFirst Delivery\n");
                                         if(lll=1)
                                         {
                                             printf("\nReady \n\n");
                                             scanf("%d",&ll);
                                         }
                                         runs=Overs(ov,ba,wk,runs);
                                         if(lll=1)
                                         {
                                             printf("\nIt's Chasing time.Press any number when you are ready \n\n");
                                             scanf("%d",&ll);
                                         }
                                         Chase(ov,ba,wk,runs);
                                         break;

                                 case 2: printf("\n\n%s opted for fielding\n",i);
                                         printf("\n\nOvers remaining : \t%d\n",ov);
                                         printf("Balls remaining : \t%d\n",ba);
                                         printf("Wickets remaining : \t%d\n",wk);
                                         printf("Runs : \t%d\n",runs);
                                         printf("\n\nFirst Delivery\n");
                                         if(lll=1)
                                         {
                                             printf("\nReady \n\n");
                                             scanf("%d",&ll);
                                         }
                                         runs=Overs(ov,ba,wk,runs);
                                         if(lll=1)
                                         {
                                             printf("\nIt's Chasing time.Press any number when you are ready \n\n");
                                             scanf("%d",&ll);
                                         }
                                         Chase(ov,ba,wk,runs);
                                         break;

                                 default: printf("\n\nInvalid Entry Choose from 1 or 2\n");
                                          goto bcd;
                             }
                                }
                          else
                          {
                              printf("\n%s won the toss\n",w);
                              cdefgh:
                             printf("\nPress 1 \tfor Batting \nPress 2 \tfor Fielding\n\n");
                             scanf("%d",&m);
                             int ov=4,ba=6,wk=10,runs=0,lll=1,ll;
                             switch(m)
                             {
                                 case 1: printf("\n\n%s opted for batting\n",w);
                                         printf("\n\nOvers remaining : \t%d\n",ov);
                                         printf("Balls remaining : \t%d\n",ba);
                                         printf("Wickets remaining : \t%d\n",wk);
                                         printf("Runs : \t%d\n",runs);
                                         printf("\n\nFirst Delivery\n");
                                         if(lll=1)
                                         {
                                             printf("\nReady \n\n");
                                             scanf("%d",&ll);
                                         }
                                         runs=Overs(ov,ba,wk,runs);
                                         if(lll=1)
                                         {
                                             printf("\nIt's Chasing time.Press any number when you are ready \n\n");
                                             scanf("%d",&ll);
                                         }
                                         Chase(ov,ba,wk,runs);
                                         break;

                                 case 2: printf("\n\n%s opted for fielding\n",w);
                                         printf("\n\nOvers remaining : \t%d\n",ov);
                                         printf("Balls remaining : \t%d\n",ba);
                                         printf("Wickets remaining : \t%d\n",wk);
                                         printf("Runs : \t%d\n",runs);
                                         printf("\nFirst Delivery\n\n");
                                         if(lll=1)
                                         {
                                             printf("\nReady \n\n");
                                             scanf("%d",&ll);
                                         }
                                         runs=Overs(ov,ba,wk,runs);
                                         if(lll=1)
                                         {
                                             printf("\nIt's Chasing time.Press any number when you are ready \n\n");
                                             scanf("%d",&ll);
                                         }
                                         Chase(ov,ba,wk,runs);
                                         break;

                                 default: printf("\n\nInvalid Entry Choose from 1 or 2\n");
                                         goto cdefgh;
                             }
                          }
                   }
                   else
                   {
                       printf("\n\nInvalid Entry Choose from 1 or 2\n");
                          goto pqr;
                   }
                   break;

          case 2: srand(time(0));
                   yyyy:
                   printf("\n\tToss Time!!!\nPress 1 \tfor Head \nPress 2 \tfor tail\n\n");
                   scanf("%d",&k);
                   if(k==1 || k==2)
                   {
                      l=(rand()%2)+1;
                      if(k==l)
                         {
                             printf("\n%s won the toss\n",i);
                             dddd:
                             printf("\nPress 1 \tfor Batting \nPress 2 \tfor Fielding\n\n");
                             scanf("%d",&m);
                             int ov=9,ba=6,wk=10,runs=0,lll=1,ll;
                             switch(m)
                             {
                                 case 1: printf("\n\n%s opted for batting",i);
                                         printf("\n\nOvers remaining : \t%d\n",ov);
                                         printf("Balls remaining : \t%d\n",ba);
                                         printf("Wickets remaining : \t%d\n",wk);
                                         printf("Runs : \t%d\n",runs);
                                         printf("\n\nFirst Delivery\n");
                                         if(lll=1)
                                         {
                                             printf("\nReady \n\n");
                                             scanf("%d",&ll);
                                         }
                                         runs=Overs(ov,ba,wk,runs);
                                         if(lll=1)
                                         {
                                             printf("\nIt's Chasing time.Press any number when you are ready \n\n");
                                             scanf("%d",&ll);
                                         }
                                         Chase(ov,ba,wk,runs);
                                         break;

                                 case 2: printf("\n\n%s opted for fielding\n",i);
                                         printf("\n\nOvers remaining : \t%d\n",ov);
                                         printf("Balls remaining : \t%d\n",ba);
                                         printf("Wickets remaining : \t%d\n",wk);
                                         printf("Runs : \t%d\n",runs);
                                         printf("\n\nFirst Delivery\n");
                                         if(lll=1)
                                         {
                                             printf("\nReady \n\n");
                                             scanf("%d",&ll);
                                         }
                                         runs=Overs(ov,ba,wk,runs);
                                         if(lll=1)
                                         {
                                             printf("\nIt's Chasing time.Press any number when you are ready \n\n");
                                             scanf("%d",&ll);
                                         }
                                         Chase(ov,ba,wk,runs);
                                         break;

                                 default: printf("\n\nInvalid Entry Choose from 1 or 2\n");
                                          goto dddd;
                             }
                                }
                          else
                          {
                              printf("\n%s won the toss\n",w);
                              sss:
                             printf("\nPress 1 \tfor Batting \nPress 2 \tfor Fielding\n\n");
                             scanf("%d",&m);
                             int ov=9,ba=6,wk=10,runs=0,lll=1,ll;
                             switch(m)
                             {
                                 case 1: printf("\n\n%s opted for batting\n",w);
                                         printf("\n\nOvers remaining : \t%d\n",ov);
                                         printf("Balls remaining : \t%d\n",ba);
                                         printf("Wickets remaining : \t%d\n",wk);
                                         printf("Runs : \t%d\n",runs);
                                         printf("\n\nFirst Delivery\n");
                                         if(lll=1)
                                         {
                                             printf("\nReady \n\n");
                                             scanf("%d",&ll);
                                         }
                                         runs=Overs(ov,ba,wk,runs);
                                         if(lll=1)
                                         {
                                             printf("\nIt's Chasing time.Press any number when you are ready \n\n");
                                             scanf("%d",&ll);
                                         }
                                         Chase(ov,ba,wk,runs);
                                         break;

                                 case 2: printf("\n\n%s opted for fielding\n",w);
                                         printf("\n\nOvers remaining : \t%d\n",ov);
                                         printf("Balls remaining : \t%d\n",ba);
                                         printf("Wickets remaining : \t%d\n",wk);
                                         printf("Runs : \t%d\n",runs);
                                         printf("\nFirst Delivery\n\n");
                                         if(lll=1)
                                         {
                                             printf("\nReady \n\n");
                                             scanf("%d",&ll);
                                         }
                                         runs=Overs(ov,ba,wk,runs);
                                         if(lll=1)
                                         {
                                             printf("\nIt's Chasing time.Press any number when you are ready \n\n");
                                             scanf("%d",&ll);
                                         }
                                         Chase(ov,ba,wk,runs);
                                         break;

                                 default: printf("\n\nInvalid Entry Choose from 1 or 2\n");
                                         goto sss;
                             }
                          }
                   }
                   else
                   {
                       printf("\n\nInvalid Entry Choose from 1 or 2\n");
                          goto yyyy;
                   }
                   break;

               case 3: srand(time(0));
                   ss:
                   printf("\n\tToss Time!!!\nPress 1 \tfor Head \nPress 2 \tfor tail\n\n");
                   scanf("%d",&k);
                   if(k==1 || k==2)
                   {
                      l=(rand()%2)+1;
                      if(k==l)
                         {
                             printf("\n%s won the toss\n",i);
                             ssss:
                             printf("\nPress 1 \tfor Batting \nPress 2 \tfor Fielding\n\n");
                             scanf("%d",&m);
                             int ov=19,ba=6,wk=10,runs=0,lll=1,ll;
                             switch(m)
                             {
                                 case 1: printf("\n\n%s opted for batting",i);
                                         printf("\n\nOvers remaining : \t%d\n",ov);
                                         printf("Balls remaining : \t%d\n",ba);
                                         printf("Wickets remaining : \t%d\n",wk);
                                         printf("Runs : \t%d\n",runs);
                                         printf("\n\nFirst Delivery\n");
                                         if(lll=1)
                                         {
                                             printf("\nReady \n\n");
                                             scanf("%d",&ll);
                                         }
                                         runs=Overs(ov,ba,wk,runs);
                                         if(lll=1)
                                         {
                                             printf("\nIt's Chasing time.Press any number when you are ready \n\n");
                                             scanf("%d",&ll);
                                         }
                                         Chase(ov,ba,wk,runs);
                                         break;

                                 case 2: printf("\n\n%s opted for fielding\n",i);
                                         printf("\n\nOvers remaining : \t%d\n",ov);
                                         printf("Balls remaining : \t%d\n",ba);
                                         printf("Wickets remaining : \t%d\n",wk);
                                         printf("Runs : \t%d\n",runs);
                                         printf("\n\nFirst Delivery\n");
                                         if(lll=1)
                                         {
                                             printf("\nReady \n\n");
                                             scanf("%d",&ll);
                                         }
                                         runs=Overs(ov,ba,wk,runs);
                                         if(lll=1)
                                         {
                                             printf("\nIt's Chasing time.Press any number when you are ready \n\n");
                                             scanf("%d",&ll);
                                         }
                                         Chase(ov,ba,wk,runs);
                                         break;

                                 default: printf("\n\nInvalid Entry Choose from 1 or 2\n");
                                          goto ssss;
                             }
                                }
                          else
                          {
                              printf("\n%s won the toss\n",w);
                              sst:
                             printf("\nPress 1 \tfor Batting \nPress 2 \tfor Fielding\n\n");
                             scanf("%d",&m);
                             int ov=19,ba=6,wk=10,runs=0,lll=1,ll;
                             switch(m)
                             {
                                 case 1: printf("\n\n%s opted for batting\n",w);
                                         printf("\n\nOvers remaining : \t%d\n",ov);
                                         printf("Balls remaining : \t%d\n",ba);
                                         printf("Wickets remaining : \t%d\n",wk);
                                         printf("Runs : \t%d\n",runs);
                                         printf("\n\nFirst Delivery\n");
                                         if(lll=1)
                                         {
                                             printf("\nReady \n\n");
                                             scanf("%d",&ll);
                                         }
                                         runs=Overs(ov,ba,wk,runs);
                                         if(lll=1)
                                         {
                                             printf("\nIt's Chasing time.Press any number when you are ready \n\n");
                                             scanf("%d",&ll);
                                         }
                                         Chase(ov,ba,wk,runs);
                                         break;

                                 case 2: printf("\n\n%s opted for fielding\n",w);
                                         printf("\n\nOvers remaining : \t%d\n",ov);
                                         printf("Balls remaining : \t%d\n",ba);
                                         printf("Wickets remaining : \t%d\n",wk);
                                         printf("Runs : \t%d\n",runs);
                                         printf("\nFirst Delivery\n\n");
                                         if(lll=1)
                                         {
                                             printf("\nReady \n\n");
                                             scanf("%d",&ll);
                                         }
                                         runs=Overs(ov,ba,wk,runs);
                                         if(lll=1)
                                         {
                                             printf("\nIt's Chasing time.Press any number when you are ready \n\n");
                                             scanf("%d",&ll);
                                         }
                                         Chase(ov,ba,wk,runs);
                                         break;

                                 default: printf("\n\nInvalid Entry Choose from 1 or 2\n");
                                         goto sst;
                             }
                          }
                   }
                   else
                   {
                       printf("\n\nInvalid Entry Choose from 1 or 2\n");
                          goto ss;
                   }
                   break;

              case 4: srand(time(0));
                   tr:
                   printf("\n\tToss Time!!!\nPress 1 \tfor Head \nPress 2 \tfor tail\n\n");
                   scanf("%d",&k);
                   if(k==1 || k==2)
                   {
                      l=(rand()%2)+1;
                      if(k==l)
                         {
                             printf("\n%s won the toss\n",i);
                             trr:
                             printf("\nPress 1 \tfor Batting \nPress 2 \tfor Fielding\n\n");
                             scanf("%d",&m);
                             int ov=49,ba=6,wk=10,runs=0,lll=1,ll;
                             switch(m)
                             {
                                 case 1: printf("\n\n%s opted for batting",i);
                                         printf("\n\nOvers remaining : \t%d\n",ov);
                                         printf("Balls remaining : \t%d\n",ba);
                                         printf("Wickets remaining : \t%d\n",wk);
                                         printf("Runs : \t%d\n",runs);
                                         printf("\n\nFirst Delivery\n");
                                         if(lll=1)
                                         {
                                             printf("\nReady \n\n");
                                             scanf("%d",&ll);
                                         }
                                         runs=Overs(ov,ba,wk,runs);
                                         if(lll=1)
                                         {
                                             printf("\nIt's Chasing time.Press any number when you are ready \n\n");
                                             scanf("%d",&ll);
                                         }
                                         Chase(ov,ba,wk,runs);
                                         break;

                                 case 2: printf("\n\n%s opted for fielding\n",i);
                                         printf("\n\nOvers remaining : \t%d\n",ov);
                                         printf("Balls remaining : \t%d\n",ba);
                                         printf("Wickets remaining : \t%d\n",wk);
                                         printf("Runs : \t%d\n",runs);
                                         printf("\n\nFirst Delivery\n");
                                         if(lll=1)
                                         {
                                             printf("\nReady \n\n");
                                             scanf("%d",&ll);
                                         }
                                         runs=Overs(ov,ba,wk,runs);
                                         if(lll=1)
                                         {
                                             printf("\nIt's Chasing time.Press any number when you are ready \n\n");
                                             scanf("%d",&ll);
                                         }
                                         Chase(ov,ba,wk,runs);
                                         break;

                                 default: printf("\n\nInvalid Entry Choose from 1 or 2\n");
                                          goto trr;
                             }
                                }
                          else
                          {
                              printf("\n%s won the toss\n",w);
                              trrr:
                             printf("\nPress 1 \tfor Batting \nPress 2 \tfor Fielding\n\n");
                             scanf("%d",&m);
                             int ov=49,ba=6,wk=10,runs=0,lll=1,ll;
                             switch(m)
                             {
                                 case 1: printf("\n\n%s opted for batting\n",w);
                                         printf("\n\nOvers remaining : \t%d\n",ov);
                                         printf("Balls remaining : \t%d\n",ba);
                                         printf("Wickets remaining : \t%d\n",wk);
                                         printf("Runs : \t%d\n",runs);
                                         printf("\n\nFirst Delivery\n");
                                         if(lll=1)
                                         {
                                             printf("\nReady \n\n");
                                             scanf("%d",&ll);
                                         }
                                         runs=Overs(ov,ba,wk,runs);
                                         if(lll=1)
                                         {
                                             printf("\nIt's Chasing time.Press any number when you are ready \n\n");
                                             scanf("%d",&ll);
                                         }
                                         Chase(ov,ba,wk,runs);
                                         break;

                                 case 2: printf("\n\n%s opted for fielding\n",w);
                                         printf("\n\nOvers remaining : \t%d\n",ov);
                                         printf("Balls remaining : \t%d\n",ba);
                                         printf("Wickets remaining : \t%d\n",wk);
                                         printf("Runs : \t%d\n",runs);
                                         printf("\nFirst Delivery\n\n");
                                         if(lll=1)
                                         {
                                             printf("\nReady \n\n");
                                             scanf("%d",&ll);
                                         }
                                         runs=Overs(ov,ba,wk,runs);
                                         if(lll=1)
                                         {
                                             printf("\nIt's Chasing time.Press any number when you are ready \n\n");
                                             scanf("%d",&ll);
                                         }
                                         Chase(ov,ba,wk,runs);
                                         break;

                                 default: printf("\n\nInvalid Entry Choose from 1 or 2\n");
                                         goto trrr;
                             }
                          }
                   }
                   else
                   {
                       printf("\n\nInvalid Entry Choose from 1 or 2\n");
                          goto tr;
                   }
                   break;

               case 5: srand(time(0));
                   pr:
                   printf("\n\tToss Time!!!\nPress 1 \tfor Head \nPress 2 \tfor tail\n\n");
                   scanf("%d",&k);
                   if(k==1 || k==2)
                   {
                      l=(rand()%2)+1;
                      if(k==l)
                         {
                             printf("\n%s won the toss\n",i);
                             prr:
                             printf("\nPress 1 \tfor Batting \nPress 2 \tfor Fielding\n\n");
                             scanf("%d",&m);
                             int ov=100,ba=6,wk=10,runs=0,lll=1,ll,srun=0,sruns=0;
                             switch(m)
                             {
                                 case 1: printf("\n\n%s opted for batting",i);
                                         printf("\n\nOvers remaining : \t%d\n",ov);
                                         printf("Balls remaining : \t%d\n",ba);
                                         printf("Wickets remaining : \t%d\n",wk);
                                         printf("Runs : \t%d\n",runs);
                                         printf("\n\nFirst Delivery of the Test Match\n");
                                         if(lll=1)
                                         {
                                             printf("\nReady \n\n");
                                             scanf("%d",&ll);
                                         }
                                         runs=Overs(ov,ba,wk,runs);
                                         if(lll=1)
                                         {
                                             printf("\nIt's Chasing time.Press any number when you are ready \n\n");
                                             scanf("%d",&ll);
                                         }
                                         srun=leadrun(ov,ba,wk,srun);
                                         int uuy;
                                         if(srun>runs)
                                         {
                                            uuy=srun-runs;
                                            printf("\nChasing Team Lead by %d Runs.\nPress any number to start Second Inning \n\n",uuy);
                                            scanf("%d",&ll);
                                         }
                                         else if(runs>srun)
                                         {
                                             uuy=runs-srun;
                                            printf("\nChasing Team Trail by %d Runs.\nPress any number to start Second Inning \n\n",uuy);
                                            scanf("%d",&ll);
                                         }
                                         sruns=leadruns(ov,ba,wk,sruns);
                                         int uux;
                                         {
                                            uux=(runs+sruns)-srun;
                                            printf("\nChasing Team Target = %d Runs.\nPress any number to start the chase \n\n",uux);
                                            scanf("%d",&ll);
                                         }

                                         Chase(ov,ba,wk,uux);
                                         break;

                                 case 2: printf("\n\n%s opted for fielding\n",i);
                                         printf("\n\nOvers remaining : \t%d\n",ov);
                                         printf("Balls remaining : \t%d\n",ba);
                                         printf("Wickets remaining : \t%d\n",wk);
                                         printf("Runs : \t%d\n",runs);
                                         printf("\n\nFirst Delivery of the Test Match\n");
                                         if(lll=1)
                                         {
                                             printf("\nReady \n\n");
                                             scanf("%d",&ll);
                                         }
                                         runs=Overs(ov,ba,wk,runs);
                                         if(lll=1)
                                         {
                                             printf("\nIt's Chasing time.Press any number when you are ready \n\n");
                                             scanf("%d",&ll);
                                         }
                                         srun=leadrun(ov,ba,wk,srun);
                                         int uuz;
                                         if(srun>runs)
                                         {
                                            uuz=srun-runs;
                                            printf("\nChasing Team Lead by %d Runs.\nPress any number to start Second Inning \n\n",uuz);
                                            scanf("%d",&ll);
                                         }
                                         else if(runs>srun)
                                         {
                                             uuy=runs-srun;
                                            printf("\nChasing Team Trail by %d Runs.\nPress any number to start Second Inning \n\n",uuy);
                                            scanf("%d",&ll);
                                         }
                                         sruns=leadruns(ov,ba,wk,sruns);
                                         int uuxx;
                                         {
                                            uuxx=(runs+sruns)-srun;
                                            printf("\nChasing Team Target = %d Runs.\nPress any number to start the chase \n\n",uuxx);
                                            scanf("%d",&ll);
                                         }

                                         Chase(ov,ba,wk,uuxx);
                                         break;

                                 default: printf("\n\nInvalid Entry Choose from 1 or 2\n");
                                          goto prr;
                             }
                                }
                          else
                          {
                              printf("\n%s won the toss\n",w);
                              prrr:
                             printf("\nPress 1 \tfor Batting \nPress 2 \tfor Fielding\n\n");
                             scanf("%d",&m);
                             int ov=100,ba=6,wk=10,runs=0,lll=1,ll,srun=0,sruns=0;
                             switch(m)
                             {
                                 case 1: printf("\n\n%s opted for batting\n",w);
                                         printf("\n\nOvers remaining : \t%d\n",ov);
                                         printf("Balls remaining : \t%d\n",ba);
                                         printf("Wickets remaining : \t%d\n",wk);
                                         printf("Runs : \t%d\n",runs);
                                         printf("\n\nFirst Delivery of the Test Match\n");
                                         if(lll=1)
                                         {
                                             printf("\nReady \n\n");
                                             scanf("%d",&ll);
                                         }
                                         runs=Overs(ov,ba,wk,runs);
                                         if(lll=1)
                                         {
                                             printf("\nIt's Chasing time.Press any number when you are ready \n\n");
                                             scanf("%d",&ll);
                                         }
                                         srun=leadrun(ov,ba,wk,srun);
                                         int uuyy;
                                         if(srun>runs)
                                         {
                                            uuyy=srun-runs;
                                            printf("\nChasing Team Lead by %d Runs.\nPress any number to start Second Inning \n\n",uuyy);
                                            scanf("%d",&ll);
                                         }
                                         else if(runs>srun)
                                         {
                                             uuyy=runs-srun;
                                            printf("\nChasing Team Trail by %d Runs.\nPress any number to start Second Inning \n\n",uuyy);
                                            scanf("%d",&ll);
                                         }
                                         sruns=leadruns(ov,ba,wk,sruns);
                                         int uuxy;
                                         {
                                            uuxy=(runs+sruns)-srun;
                                            printf("\nChasing Team Target = %d Runs.\nPress any number to start the chase \n\n",uuxy);
                                            scanf("%d",&ll);
                                         }

                                         Chase(ov,ba,wk,uuxy);
                                         break;

                                 case 2: printf("\n\n%s opted for fielding\n",w);
                                         printf("\n\nOvers remaining : \t%d\n",ov);
                                         printf("Balls remaining : \t%d\n",ba);
                                         printf("Wickets remaining : \t%d\n",wk);
                                         printf("Runs : \t%d\n",runs);
                                         printf("\n\nFirst Delivery of the Test Match\n");
                                         if(lll=1)
                                         {
                                             printf("\nReady \n\n");
                                             scanf("%d",&ll);
                                         }
                                         runs=Overs(ov,ba,wk,runs);
                                         if(lll=1)
                                         {
                                             printf("\nIt's Chasing time.Press any number when you are ready \n\n");
                                             scanf("%d",&ll);
                                         }
                                         srun=leadrun(ov,ba,wk,srun);
                                         int uuyx;
                                         if(srun>runs)
                                         {
                                            uuyx=srun-runs;
                                            printf("\nChasing Team Lead by %d Runs.\nPress any number to start Second Inning \n\n",uuyx);
                                            scanf("%d",&ll);
                                         }
                                         else if(runs>srun)
                                         {
                                             uuyx=runs-srun;
                                            printf("\nChasing Team Trail by %d Runs.\nPress any number to start Second Inning \n\n",uuyx);
                                            scanf("%d",&ll);
                                         }
                                         sruns=leadruns(ov,ba,wk,sruns);
                                         int uuxyx;
                                         {
                                            uuxyx=(runs+sruns)-srun;
                                            printf("\nChasing Team Target = %d Runs.\nPress any number to start the chase \n\n",uuxyx);
                                            scanf("%d",&ll);
                                         }

                                         Chase(ov,ba,wk,uuxyx);
                                         break;

                                 default: printf("\n\nInvalid Entry Choose from 1 or 2\n");
                                         goto prrr;
                             }
                          }
                   }
                   else
                   {
                       printf("\n\nInvalid Entry Choose from 1 or 2\n");
                          goto pr;
                   }
                   break;

              default: printf("\n\nInvalid Entry Choose \n");
                                         goto cc;
          }
  return 0;
}


int Overs(int aa,int bbb,int www,int rrr)
{
    while(aa>=0)
      {
      balls(aa,bbb,&www,&rrr);
      aa--;
      }
        printf("\n\nFirst Inning Ended\n\nTarget = %d\n",rrr+1);
        return(rrr+1);
}

void balls(int aaa,int bbbb,int *wwww,int *run)
{
    int c=1,p;
    while(bbbb>0 && *wwww>0)
    {   srand(time(0));
        int n;
        n=(rand()%7);
        switch(n)
           {
             case 0: *run+=n;
                   break;
             case 1: *run+=n;
                   break;
             case 2: *run+=n;
                   break;
             case 3: *run+=n;
                   break;
             case 4: *run+=n;
                   break;
             case 5: *wwww-=(n-4);
                   break;
             case 6: *run+=n;
                   break;
           }
        --bbbb;
        if(c==1)
        {
            printf("\n\nOvers remaining : \t%d\n",aaa);
            printf("Balls remaining : \t%d\n",bbbb);
            printf("Wickets remaining : \t%d\n",*wwww);
            if(n==5)
            {
                printf("Runs on this ball : \tWicket\n\n");
            }
            else
            {
                printf("Runs on this ball : \t%d\n\n",n);
            }
            printf("Total Runs : %d\n\n\n",*run);
            printf("Press Any Number to deliver next ball\n");
            scanf("%d",&p);
        }
    }
}

void Chase(int oo,int pp,int qq,int zz)
{
    int lll=1,ll;
    printf("\n\nSecond inning\n");
    if(lll=1)
          {
            printf("\n\nFirst Delivery.Press any number when you are ready.\n\n");
            scanf("%d",&ll);
          }
    Over(oo,pp,qq,zz);
}

void Over(int aa,int bbb,int www,int rrr)
{
    while(aa>=0)
      {
      ball(aa,bbb,&www,&rrr);
      aa--;
      }
        printf("\n\nThanx For Playing\n\n");
}

void ball(int aaa,int bbbb,int *wwww,int *run)
{
    int c=1,p;
    while(bbbb>0 && *wwww>0)
    {   srand(time(0));
        int n;
        n=(rand()%7);
        switch(n)
           {
             case 0: *run-=n;
                   break;
             case 1: *run-=n;
                   break;
             case 2: *run-=n;
                   break;
             case 3: *run-=n;
                   break;
             case 4: *run-=n;
                   break;
             case 5: *wwww-=(n-4);
                   break;
             case 6: *run-=n;
                   break;

           }
                          printf("\n\nOvers Number : \t\t%d\n",aaa);
                          printf("Balls Number : \t\t%d\n",bbbb);
                          printf("Wickets remaining : \t%d\n",*wwww);
                          if(n==5)
                               {
                                printf("Runs on this ball : \tWicket\n\n");
                               }
                          else
                               {
                                printf("Runs on this ball : \t%d\n\n",n);
                               }
                    if(*run<0)
                       {
                           printf("\n\nChasing Team wins by %d Wickets remaining\n\n",*wwww);
                           break;
                       }
                    else if(*run>0 && aaa==0 && bbbb==1 || *run>0 && *wwww==0)
                       {
                           printf("\n\nChasing Team loses by %d Runs\n\n",*run);
                           break;
                       }
                    else if(*run>0)
                               {
                                  printf("Runs Needed: \t%d\n\n",*run);
                                  --bbbb;
                               }
                if(c==1)
                    printf("\nPress Any Number to deliver next ball\n");
                               scanf("%d",&p);
    }
}


void leadrun(int aaa,int bbb,int ccc,int ddd)
{
    int lll=1,ll;
    printf("\n\nChasing Team - First Inning\n");
    if(lll=1)
          {
            printf("\n\nFirst Delivery.Press any number when you are ready.\n\n");
            scanf("%d",&ll);
          }
          Ove(aaa,bbb,ccc,ddd);
          return(ddd);
}

int Ove(int aa,int bbb,int www,int rrr)
{
    while(aa>=0)
      {
      ballss(aa,bbb,&www,&rrr);
      aa--;
      }
        printf("\n\nFirst Inning Ended\n\nFirst Inning Score = %d\n",rrr);
        return(rrr);
}

void ballss(int aaa,int bbbb,int *wwww,int *run)
{
    int c=1,p;
    while(bbbb>0 && *wwww>0)
    {   srand(time(0));
        int n;
        n=(rand()%7);
        switch(n)
           {
             case 0: *run+=n;
                   break;
             case 1: *run+=n;
                   break;
             case 2: *run+=n;
                   break;
             case 3: *run+=n;
                   break;
             case 4: *run+=n;
                   break;
             case 5: *wwww-=(n-4);
                   break;
             case 6: *run+=n;
                   break;
           }
        --bbbb;
        if(c==1)
        {
            printf("\n\nOvers remaining : \t%d\n",aaa);
            printf("Balls remaining : \t%d\n",bbbb);
            printf("Wickets remaining : \t%d\n",*wwww);
            if(n==5)
            {
                printf("Runs on this ball : \tWicket\n\n");
            }
            else
            {
                printf("Runs on this ball : \t%d\n\n",n);
            }
            printf("Total Runs : %d\n\n\n",*run);
            printf("Press Any Number to deliver next ball\n");
            scanf("%d",&p);
        }
    }
}


void leadruns(int aaa,int bbb,int ccc,int ddd)
{
    int lll=1,ll;
    printf("\n\nBatting Team - Second Inning\n");
    if(lll=1)
          {
            printf("\n\nFirst Delivery.Press any number when you are ready.\n\n");
            scanf("%d",&ll);
          }
          Overss(aaa,bbb,ccc,ddd);
          return(ddd);
}

int Overss(int aa,int bbb,int www,int rrr)
{
    while(aa>=0)
      {
      ballsss(aa,bbb,&www,&rrr);
      aa--;
      }
        printf("\n\nFirst Inning Ended\n\nFirst Inning Score = %d\n",rrr);
        return(rrr);
}

void ballsss(int aaa,int bbbb,int *wwww,int *run)
{
    int c=1,p;
    while(bbbb>0 && *wwww>0)
    {   srand(time(0));
        int n;
        n=(rand()%7);
        switch(n)
           {
             case 0: *run+=n;
                   break;
             case 1: *run+=n;
                   break;
             case 2: *run+=n;
                   break;
             case 3: *run+=n;
                   break;
             case 4: *run+=n;
                   break;
             case 5: *wwww-=(n-4);
                   break;
             case 6: *run+=n;
                   break;
           }
        --bbbb;
        if(c==1)
        {
            printf("\n\nOvers remaining : \t%d\n",aaa);
            printf("Balls remaining : \t%d\n",bbbb);
            printf("Wickets remaining : \t%d\n",*wwww);
            if(n==5)
            {
                printf("Runs on this ball : \tWicket\n\n");
            }
            else
            {
                printf("Runs on this ball : \t%d\n\n",n);
            }
            printf("Total Runs : %d\n\n\n",*run);
            printf("Press Any Number to deliver next ball\n");
            scanf("%d",&p);
        }
    }
}

