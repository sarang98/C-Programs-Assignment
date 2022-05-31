#include<stdio.h>
#include<string.h>
#define PLAYERS 50
struct cricket 
{
	char pName[50];
	char tName[50];
	float batAvg;
};
int main()
{
	struct cricket c[PLAYERS],t;
	int j;
	for(int i=0;i<PLAYERS;i++)
	{
		printf("Enter player name : ");
		scanf("%s",c[i].pName);
		printf("Enter team name : ");
		scanf("%s",c[i].tName);
		printf("Enter batAvg : ");
		scanf("%f",&c[i].batAvg);
	}
	
	for(int i=0;i<PLAYERS-1;i++)
	{
		for(j=i;j<PLAYERS;j++)
		{
			if(strcmp(c[i].tName,c[j].tName)>0)
   			{
			    t=c[i];
			    c[i]=c[j];
			    c[j]=t;
			}
  		}
 	}
	j=0;
	printf("\n Team Name \t Batting Average \t Player Name");
	for(int i=0;i<PLAYERS;i++)
	{
		printf("\n %s \t\t %f \t\t %s",c[i].tName,c[i].batAvg,c[i].pName);
	}
	printf("\n");
	return 0;
}
