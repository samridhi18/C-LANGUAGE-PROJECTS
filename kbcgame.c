#include<stdio.h>
#include<stdio.h>

void main()
{
 int i,a[10],n=0,m=10000;
 char c,s,S,q,Q,d,p;
 printf("\n\t\t________________________________________");

     printf("\n\t\t\t        WELCOME ");
     printf("\n\t\t\t          TO ");
     printf("\n\t\t\t     KBC QUIZ GAME ");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\tTEST YOUR KNOWLEDGE..SET YOUR HIGHSCORES!! ") ;
      printf("\n\n\t\tHere are some tips you might wanna know before playing:");
      printf("\n    \ttotal of 7 questions. Each right answer will be awarded Rs.10000!");
      printf("\n\t You will be given 4 options and each question has two correct answer");
     printf("\n\t\t________________________________________");
     printf("\n\t\t________________________________________");
     printf("\n\t\t -> Press P to start the game");

     printf("\n\t\t -> Press Q to quit             ");
     printf("\n\t\t________________________________________\n\n");
scanf("%s",&d);
if(d=='p' || d=='P')
{
     int r,lower=0,upper=5;
   time_t t;
   n = 5;
   srand((unsigned) time(&t));
r= rand()%6 ;

//set1 of ques

if(r==1)
   {

 for(i=1;i<=7;i++)
 {
  n=0;
  switch(i)
  {
  case 1:

   printf("\n\n\t\t1. Logic Building Includes:-");
		printf("\n\n\t\ta.Analytical approach\t\tb.Trust\n\n\t\tc.Bird eye view\t\t\td.Streamlining process\n");
   scanf("%s %s",&p,&q);
   printf("\n\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if(p=='a' && q=='c'  )
   {
     printf("\n\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\n\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.0 \n\n");
    i=7;
   }
   }
   else
   {
       printf("\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.0 \n\n");
       exit(1);
   }
   break;
  case 2:
   printf("\n\n2.\t\tGathering information Includes:-");
		printf("\n\n\t\ta.Interview\t\tb.Survey\n\n\t\tc.Questioning\t\td.Logic\n");
   scanf("%s %s",&p,&q);
   printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if( p=='a' && q=='c' )
   {
       m=m+m*10;
     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;
  case 3:
   printf("\n\n\t\t3.Communication Includes which of following skill:-");
		printf("\n\n\t\ta.Listening\t\tb.reporting\n\n\t\tc.Team-work\t\td.working\n");
   scanf("%s %s",&p,&q);
   printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if( p=='a' && q=='b' )
   {
       m=m+m*10;
     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;
  case 4:
   printf("\n\n4.\t\tRoot cause of problems can be analysed using:-");
		printf("\n\n\t\ta.Issue Tree\t\tb.Scatter plot\n\n\t\tc.Histogram\t\td.Scatter diagram\n");
  scanf("%s %s",&p,&q);
  printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if( p=='a' && q=='d' )
   {
        m=m+m*10;
     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;
  case 5:
   printf("\n\n\t\t5.Visualisation tool used for categorising causes of a problem");
		printf("\n\n\t\ta.Fishbone diagram\t\tb.Issue tree\n\n\t\tc.Cause and effect Diagram\td.Flowchart\n");
    scanf("%s %s",&p,&q);
    printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if(p=='a' && q=='c')
   {
       m=m+m*10;
     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;
  case 6:
   printf("\n\n\t\t6. Group discussion improves your:-");
		printf("\n\n\t\ta.Communication\t\tb.Speaking skills\n\n\t\tc.Logic \t\td.Patience\n");
   scanf("%s %s",&p,&q);
   printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if( p=='a' && q=='b' )
   {
        m=m+m*10;
     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;
  case 7:
    printf("\n\n\t\t7. A planning technique used to identify strength, weakness and project planning:-");
		printf("\n\n\t\ta.SWOT analysis\t\tb.Problem analysis\n\n\t\tc.Threat analysis\td.Survey analysis\n");
    scanf("%s %s",&p,&q);
    printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if(p=='a' && q=='c' )
   {
       printf("\t\t\n\n\n \t\t**************** CONGRATULATION ****************\n");
        m=m+m*10;
     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\t",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;

  default:
   break;
   }
   }
   }

  //set2 of ques
if(r==2)
{
   for(i=1;i<=7;i++)
 {
  n=0;
  switch(i)
  {
  case 1:
   printf("\n\n\t\t1. Which of the following is needed for success?");
		printf("\n\n\t\ta.Confidence\t\tb.Trust\n\n\t\tc.Respect\t\td.Observation\n");
   scanf("%s %s",&p,&q);
   printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if(p=='a' && q=='c' )
   {

     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.0 \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.0 \n\n",m);
       exit(1);
   }
   break;
  case 2:
   printf("\n\n\t\t2. Skill needed for CSE job:-");
		printf("\n\n\t\ta.Management\t\tb.Mathematics\n\n\t\tc.Creativity\t\td.Data-analysis\n");
   scanf("%s %s",&p,&q);
   printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if(p=='b' && q=='d' )
   {
        m=m+m*10;
     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;
  case 3:
   printf("\n\n\t\t3. How to improve analytical thinking?");
		printf("\n\n\t\ta.Be observant\t\tb.Execute programs\n\n\t\tc.Be happy\t\td.Play brain games\n");
   scanf("%s %s",&p,&q);
   printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if( p=='a' && q=='d' )
   {
       m=m+m*10;
     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;
  case 4:
   printf("\n\n\t\t4. How to approach analytical thinking skills");
		printf("\n\n\t\ta.Bird eye view\t\tb.Trust\n\n\t\tc.confidence\t\td.Break Problem\n");
  scanf("%s %s",&p,&q);
  printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if( p=='a' && q=='d')
   {
       m=m+m*10;
     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;
  case 5:
   printf("\n\n\t\t5. Analytical skills essentially requires:-");
		printf("\n\n\t\ta.Creativity\t\tb.Trust\n\n\t\tc.Research\t\td.Confidence\n");
    scanf("%s %s",&p,&q);
    printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if(p=='a' && q=='c' )
   {
        m=m+m*10;
     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;
  case 6:
   printf("\n\n\t\t6. Analytical tools include:-");
		printf("\n\n\t\ta.Brain storming\t\tb.Issue tree\n\n\t\tc.Happiness \t\t\td.Intelligence\n");
   scanf("%s %s",&p,&q);
   printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if( p=='a' && q=='b' )
   {
       m=m+m*10;
     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;
  case 7:
    printf("\n\n\t\t7. Identifying trends includes:-");
		printf("\n\n\t\ta.Time frame\t\tb.Interview\n\n\t\tc.Trust\t\t\td.Chart patterns\n");
    scanf("%s %s",&p,&q);
    printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if( p=='a' && q=='d')
   {
       printf("\t\t\n\n\n \t\t**************** CONGRATULATION ****************\n");
       m=m+m*10;
     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%100000000000\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;

  default:
   break;
   }
   }
}

    //set3 of ques
if(r==3)
   {
   for(i=1;i<=7;i++)
 {
  n=0;
  switch(i)
  {
  case 1:
   printf("\n\n\t\t1. Find the odd one out:-");
		printf("\n\n\t\ta.Laughter\t\tb.logic\n\n\t\tc.Help\t\t\td.Grief\n");
   scanf("%s %s",&p,&q);
   printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if(p=='c' && q=='d' )
   {

     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.0 \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;
  case 2:
   printf("\n\n\t\t2. To improve Analytical skills, play games like:-");
		printf("\n\n\t\ta.Sudoku\t\tb.Chess\n\n\t\tc.Badminton\t\td.Hide and seek\n");
  scanf("%s %s",&p,&q);
   printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if(p=='a' && q=='b' )
   {
       m=m+m*10;
     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;
  case 3:
   printf("\n\n\t\t3. Stimulation of idea generation is a part of:-");
		printf("\n\n\t\ta.Brain Games\t\tb.Brain storming\n\n\t\tc.Mathematics\t\td.Management\n");
   scanf("%s %s",&p,&q);
   printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if( p=='a' && q=='b' )
   {
       m=m+m*10;
     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;
  case 4:
   printf("\n\n\t\t4. Choose the odd one out");
		printf("\n\n\t\ta.Management\t\tb.Chemistry\n\n\t\tc.Communication\t\td.Happiness\n");
  scanf("%s %s",&p,&q);
  printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if(p=='c' && q=='d' )
   {
       m=m+m*10;
     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;
  case 5:
   printf("\n\n\t\t5. Deductive reasoning is apart of:-");
		printf("\n\n\t\ta.Essential skills\t\tb.Job skills\n\n\t\tc.Analytical approach\t\td.Life approach\n");
    scanf("%s %s",&p,&q);
    printf("\t\tAre You Sure??\n Press Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
  if(p=='a' && q=='c' )
   {
       m=m+m*10;
     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;
  case 6:
   printf("\n\n\t\t6. Breaking problem into smaller parts helps in:-");
		printf("\n\n\t\ta.Easy solution of your problem\t\t\tb.Saves your time\n\n\t\tc.Giving different ways to solve a problem\td.Improve concepts\n");
   scanf("%s %s",&p,&q);
   printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if(p=='a' && q=='c' )
   {
       m=m+m*10;
     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;
  case 7:
    printf("\n\n\t\t7. Analytical skills helpful at work are:-");
		printf("\n\n\t\ta.Executing programs\t\tb.Identifying trends\n\n\t\tc.Helping others\t\td.Deductive reasoning\n");
    scanf("%s %s",&p,&q);
    printf("\t\tAre You Sure??\n Press Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if(  p=='a' && q=='b' )
   {
       printf("\t\t\n\n\n \t\t**************** CONGRATULATION ****************\n");
       m=m+m*10;
     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%100000000000\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;

  default:
   break;
   }
   }
}

    //set4 of ques
 if(r==4)
  {
   for(i=1;i<=7;i++)
 {
  n=0;
  switch(i)
  {
  case 1:
   printf("\n\n\t\t1. Creating work flow diagram for understanding a problem is called:-");
		printf("\n\n\t\ta.Process mapping\t\tb.Scatter diagram\n\n\t\tc.7-S framework\t\t\td.Issue tree\n");
   scanf("%s %s",&p,&q);
   printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if( p=='a' && q=='b' )
   {

     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.0 \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.0 \n\n",m);
       exit(1);
   }
   break;
  case 2:
   printf("\n\n\t\t2. Major work skills include:-");
		printf("\n\n\t\ta.Streamlining process\t\tb.Process mapping\n\n\t\tc.Identifying trends\t\td.Execution\n");
   scanf("%s %s",&p,&q);
   printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if(p=='a' && q=='c')
   {
       m=m+m*10;
     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;
  case 3:
   printf("\n\n\t\t3. How to solve a complex problem?");
		printf("\n\n\t\ta.Analytical approach\t\tb.Break problem\n\n\t\tc.Direct approach\t\td.Indirect approach\n");
   scanf("%s %s",&p,&q);
   printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if( p=='a' && q=='b' )
   {
       m=m+m*10;
     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;
  case 4:
   printf("\n\n\t\t4. Thinking above decisions help us to:-");
		printf("\n\n\t\ta.Get better job\t\tb.Improve skills\n\n\t\tc.Increase income\t\td.Improving analytical thinking\n");
  scanf("%s %s",&p,&q);
  printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if(p=='b' && q=='d' )
   {
        m=m+m*10;
     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;
  case 5:
   printf("\n\n\t\t5. Team work includes:-");
		printf("\n\n\t\ta.Creativity\t\tb.Trust\n\n\t\tc.Communication\t\td.All above\n");
    scanf("%s %s",&p,&q);
    printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
  if(p=='a' && q=='c' )
   {
        m=m+m*10;
     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;
  case 6:
   printf("\n\n\t\t6. Which one is the lowest level of programming language among these:-");
		printf("\n\n\t\ta.C\t\tb.Java\n\n\t\tc.C++\t\td.Python\n");
   scanf("%s %s",&p,&q);
   printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
  if(p=='a' && q=='c' )
   {
       m=m+m*10;
     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;
  case 7:
    printf("\n\n\t\t7. Having confidence helps in building:-");
		printf("\n\n\t\ta.Success\t\tb.Improving thinking\n\n\t\tc.Personality\t\td.Mental ability\n");
    scanf("%s %s",&p,&q);
    printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
  if(p=='a' && q=='c' )
   {
       printf("\t\t\n\n\n \t\t**************** CONGRATULATION ****************\n");
        m=m+m*10;
     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.100000000000\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;

  default:
   break;
   }
   }
}

    //set5 of ques
if(r==5)
   {
   for(i=1;i<=7;i++)
 {
  n=0;
  switch(i)
  {
  case 1:
   printf("\n\n\t\t1. Success comes in life through:-");
		printf("\n\n\t\ta.Confidence\t\tb.Luck\n\n\t\tc.Hardwork\t\td.Option A and C\n");
   scanf("%s %s",&p,&q);
   printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if(p=='a' && q=='c' )
   {

     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.0 \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.0 \n\n",m);
       exit(1);
   }
   break;
  case 2:
   printf("\n\n\t\t2. To understand a problem better, one should:-");
		printf("\n\n\t\ta.Research\t\tb.Data analysis\n\n\t\tc.Collect data\t\td.Own Thinking\n");
   scanf("%s %s",&p,&q);
   printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if( p=='a' && q=='b' )
   {
        m=m+m*10;
     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;
  case 3:
   printf("\n\n\t\t3. Choose the odd one here");
		printf("\n\n\t\ta.Mathematics\t\tb.Programming Language\n\n\t\tc.Trouble Shooting\td.Brainstorming\n");
   scanf("%s %s",&p,&q);
   printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if( p=='c' && q=='d' )
   {
       m=m+m*10;
     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;
  case 4:
   printf("\n\n\t\t4. To increase mental ability one should do:-");
		printf("\n\n\t\ta.Sleep\t\tb.Play brain games\n\n\t\tc.Read books\td.Be observant\n");
  scanf("%s %s",&p,&q);
  printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if( p=='a' && q=='b' )
   {
        m=m+m*10;
     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;
  case 5:
   printf("\n\n\t\t5. Data analysis includes:-");
		printf("\n\n\t\ta.Survey\t\tb.Flow charts\n\n\t\tc.Analyzing records\td.All above\n");
    scanf("%s %s",&p,&q);
    printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if(p=='a' && q=='c' )
   {
       m=m+m*10;
     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;
  case 6:
   printf("\n\n\t\t6. Find the Odd one out:-");
		printf("\n\n\t\ta.Bird eye view\t\tb.Affinity Diagram\n\n\t\tc.Brainstorming\t\td.Issue Tree\n");
   scanf("%s %s",&p,&q);
   printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if(  p=='a' && q=='d' )
   {
       m=m+m*10;
     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.%d\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;
  case 7:
     printf("\n\n\t\t7. What helps us in judging the cause of a problem?");
		printf("\n\n\t\ta.Scatter diagram\t\tb.Fish-bone diagram\n\n\t\tc.Cause and root diagram\td.7-S framework\n");
    scanf("%s %s",&p,&q);
    printf("\t\tAre You Sure??\n\t\tPress Y->for Yes And N->for No\n");
   scanf("%s",&c);
   if(c=='y' || c=='Y')
   {
   if( p=='a' && q=='b' )
   {
       printf("\t\t\n\n\n \t\t**************** CONGRATULATION ****************\n");
        m=m+m*10;
     printf("\t\tYou have entered the correct answer\n\t\tNow you have wonRs.100000000000\n\t\tYour Next Question is \n\n",m);
   }
   else
   {
    printf("\t\tYou have entered the wrong answer\n\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
    i=7;
   }
    }
   else
   {
       printf("\t\tBetter Luck Next Time\n\t\tYou have earned Rs.%d \n\n",m);
       exit(1);
   }
   break;

  default:
   break;
   }
   }
}

}


   getch();
   }


