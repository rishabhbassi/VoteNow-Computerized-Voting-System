#include<stdio.h>

#define CANDIDATE_COUNT

#define CANDIDATE1 "Joe"
#define CANDIDATE2 "Trump"
#define CANDIDATE3 "Rishabh"
#define CANDIDATE4 "Vansh"

int votesCount1 = 0, votesCount2 = 0, votesCount3 = 0, 
 votesCount4 = 0, NOTA = 0;

void castVote ()
{
  int choice;
  printf ("\n\n ### Please choose your Candidate ####\n\n");
  printf ("\n 1. %s", CANDIDATE1);
  printf ("\n 2. %s", CANDIDATE2);
  printf ("\n 3. %s", CANDIDATE3);
  printf ("\n 4. %s", CANDIDATE4);
  printf ("\n 5. %s", "NOTA");

  printf ("\n\n Input your choice (1 - 5) : ");
  scanf ("%d", &choice);

  switch (choice)
    {
    case 1:
      votesCount1++;
      break;
    case 2:
      votesCount2++;
      break;
    case 3:
      votesCount3++;
      break;
    case 4:
      votesCount4++;
      break;
    case 5:
      NOTA++;
      break;
    default:
      printf ("\n Error: Wrong Choice !! Please retry");
    }
  printf ("\n *Thank You for Using your Valuable vote !!*");
}

void votesCount ()
{
  printf ("\n\n ##### Voting Statics ####");
  printf ("\n   %s - %d ", CANDIDATE1, votesCount1);
  printf ("\n   %s - %d ", CANDIDATE2, votesCount2);
  printf ("\n   %s - %d ", CANDIDATE3, votesCount3);
  printf ("\n   %s - %d ", CANDIDATE4, votesCount4);
  printf ("\n   %s - %d ", "NOTA", NOTA);
}

void getLeadingCandidate ()
{
  printf ("\n\n#### Leading Candiate ####\n\n");
  if (votesCount1 > votesCount2 && votesCount1 > votesCount3
      && votesCount1 > votesCount4)
    printf ("       [%s]", CANDIDATE1);
  else if (votesCount2 > votesCount3 && votesCount2 > votesCount4
	   && votesCount2 > votesCount1)
    printf ("       [%s]", CANDIDATE2);
  else if (votesCount3 > votesCount4 && votesCount3 > votesCount2
	   && votesCount3 > votesCount1)
    printf ("       [%s]", CANDIDATE3);
  else if (votesCount4 > votesCount1 && votesCount4 > votesCount2
	   && votesCount4 > votesCount3)
    printf ("       [%s]", CANDIDATE4);
  else
    printf ("----- NO ONE IS WINNING AS OF NOW !!----");



}
void electionResult()
{
    int wonByVote;
    if (votesCount1 > votesCount2 && votesCount1 > votesCount3 && votesCount1 >votesCount4)
    {
        printf("\n**Joe won the election**\n\n");
        printf("Total votes of Joe : %d\n",votesCount1);
        wonByVote=votesCount1-votesCount2;
        printf("Joe won by %d votes to Trump\n",wonByVote);
        wonByVote=votesCount1-votesCount3;
        printf("Joe won by %d votes to Rishabh\n",wonByVote);
        wonByVote=votesCount1-votesCount4;
        printf("Joe won by %d votes to Vansh\n",wonByVote);
    }
    else if (votesCount2 > votesCount3 && votesCount2 > votesCount4 && votesCount2 > votesCount1)
    {
        printf("\n**Trump won the election**\n\n");
        printf("Total votes of Trump : %d\n",votesCount2);
        wonByVote=votesCount2-votesCount1;
        printf("Trump won by %d votes to Joe\n",wonByVote);
        wonByVote=votesCount2-votesCount3;
        printf("Trump won by %d votes to Rishabh\n",wonByVote);
        wonByVote=votesCount2-votesCount4;
        printf("Trump won by %d votes to Vansh\n",wonByVote);
    }
    else if (votesCount3 > votesCount4 && votesCount3 > votesCount2 && votesCount3 > votesCount1)
    {
        printf("\n**Rishabh won the election**\n\n");
        printf("Total votes of Rishabh : %d\n",votesCount3);
        wonByVote=votesCount3-votesCount1;
        printf("Rishabh won by %d votes to Joe\n",wonByVote);
        wonByVote=votesCount3-votesCount2;
        printf("Rishabh won by %d votes to Trump\n",wonByVote);
        wonByVote=votesCount3-votesCount4;
        printf("Rishabh won by %d votes to Vansh\n",wonByVote);
    }
   
    else if(votesCount4 > votesCount3 && votesCount4 > votesCount2 && votesCount4 > votesCount1)
    {
        printf("\n**Vansh won the election**\n\n");
        printf("Total votes of Vansh : %d\n",votesCount4);
        wonByVote=votesCount4-votesCount1;
        printf("Vansh won by %d votes to Joe\n",wonByVote);
        wonByVote=votesCount4-votesCount2;
        printf("Vansh won by %d votes to Trump\n",wonByVote);
        wonByVote=votesCount4-votesCount3;
        printf("Vansh won by %d votes to Rishabh\n",wonByVote);
    }
    
    else if(votesCount1 == votesCount2 || votesCount1 == votesCount3 || votesCount1 == votesCount4 ||
            votesCount2 == votesCount3 || votesCount2 == votesCount4 || votesCount3 == votesCount4)
    {
        printf("\nNO WINNER!! \n\n");
        printf("            Joe---Trump---Rishabh---Vansh\n");
        printf("Total Vote  %d      %d        %d       %d\n",votesCount1,votesCount2,votesCount3,votesCount4);
    }
}

int main ()
{
  int i;
  int choice;
  int nn;
  char id ,pwd;

  printf ("\n\n ###### Welcome to Election/Voting 2022 #####");
  printf("\n1.Login as administrator\n");
  printf("\n2.Login as Voter\n");
  scanf("%d",&nn);
  switch (nn)
  {
    case 1:
    printf ("Admin Id\n");
    printf ("PASSWORD\n");
    scanf("%c",&id);
    scanf("%c",&pwd);
    break;

    case 2:
    printf ("Voter Id\n");
    printf ("PASSWORD\n");
    scanf("%c",&id);
    scanf("%c",&pwd);
    break;
    }

    if(nn==1)
    {

  do
    {
      printf ("\n\n ###### Welcome to Election/Voting 2022 #####");
      printf ("\n 1. Find Vote Count");
      printf ("\n 2. Find leading Candidate");
      printf ("\n 3. Election Result");
      printf ("\n 0. Exit");

      printf ("\n\n Please enter your choice : ");
      scanf ("%d", &choice);

      switch (choice)
	{
	case 1:
	  votesCount ();
	  break;
	case 2:
	  getLeadingCandidate ();
	  break;
	case 3:
	  electionResult();
	  break;
	default:
	  printf ("\n Thank you for voting");
	}
    }
  while (choice != 0);
    }
    else{

    do
    {
      printf ("\n\n ###### Welcome to Election/Voting 2022 #####");
      printf ("\n 1. Cast the Vote");
      printf ("\n 2. Election Result");
      printf ("\n 0. Exit");

      printf ("\n\n Please enter your choice : ");
      scanf ("%d", &choice);

      switch (choice)
	{
	case 1:
	  castVote ();
	  break;
	case 2:
	  electionResult();
	  break;
	default:
	  printf ("\n Thank you for voting");
	}
    }
  while (choice != 0);
    }

return 0;
}