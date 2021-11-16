#include<stdio.h> 
#include "user_input.h"

int displayInfo() 
{
	printf("\nWelcome to our Fantasy draft!\n");

 	printf("1. User will be given 3 players from each position (QB, RB, WR, TE, so 12 total) with statistics and descriptions of each player\n");
 	printf("2. They will draft one player from each position to their fantasy football team (4 players total)\n");
 	printf("3. The program will generate a potential score for the team based on who the user drafts.\n");
 	printf("4. Since there are 3 players from each position, there are 81 possible combinations for the fantasy team, which makes it fun.\n\n");
 	printf("-----------------------------------------------------------\n");

 	printf("There are three different types of scenarios that you have to consider before your selection\n");
 	printf("1. Weed/drugs - Some players like to smoke weed or take drugs before a game\n");
 	printf("2. Injury - Some players are prone to injury that can take them out for a season\n");
 	printf("3. Drama - Some players have off-field issues with other players on the team\n\n");
 	printf("-----------------------------------------------------------\n");

/* 	printf("***** Player Scenarios ******\n");
	printf("This is the qualitative data that is not shown in many sports fantasy programs. Use this information to pick your players\n");
	printf("Quarterbacks:\n");
	printf("Lamar Jackson never throws the ball. This can be detrimental to his performance because he is a target for the defense.\n");
	printf("Alex Smith broke his leg in 2018. He went through 17 surgeries to get it fixed, but he should be more healthy now.\n");
	printf("Jimmy Garoppolo had a high ankle sprain.\n");

	printf("Runningbacks:\n");
	printf("Todd Gurley suffers from arthritis in his knees which made him tear his ACL in 2014. This impairs his running ability.\n");
	printf("Clyde Edwards-Helaire is 5'6 (way shorter than normal), but he is very elusive and nimble and hard to tackle.\n");
	printf("Frank Gore is one of the oldest runningbacks in the league right now. He has a higher change of getting CTE from his concussions.\n");

	printf("Wide Receivers\n");
 	printf("Antonio Brown has a history of bad behavior and attitude on NFL teams, and he got kicked off of the Raiders in 2019.\n");
 	printf("Will Fuller took performance enhancing drugs this season and got suspended, but this improved his stats.\n");
	printf("Josh Gordon likes to smoke a lot of weed, even before it was legal.\n");

	printf("Tight Ends\n");
	printf("George Kittle plays too physical, leading to him spraining his knee this season.\n");
	printf("Darren Waller used to have a drug addiction, but he went to rehab to get better.\n");
	printf("Hayden Hurst had depression in college, and he almost lost his life to suicide. He currently runs an organization that prevents suicide\n");
*/
	return 0;
}

int choosePlayers()
{
	int num;

 	printf("Choose a team of 4 players based on their stats and story.\n");
 	printf("You will be given a score at the end.\n\n");
 	printf("------------------------------------------------------------\n");

 	printf("Please select the given players below based on the information provided. Your score will be evaluated at the end.\n");
 	printf("QB selection\n");
 	printf("1. Lamar Jackson\n");
 	printf("2. Alex Smith\n");
 	printf("3. Jimmy Garropolo\n");
 	printf("Please select the number: ");
 	scanf("%d", &num);
 	if (num == 1) {
 		printf("you have selected Lamar Jackson\n");
 	} else if (num == 2) {
 		printf("you have selected Alex Smith\n");
 	} else if (num == 3) {
 		printf("you have selected Jimmy Garropolo\n");
 	} else { 
 		printf("you have entered the wrong number\n");
 		return 0;
 	}

 	printf("RB selection\n");
 	printf("1. Todd Gurley\n");
 	printf("2. Clyde Edwards-Helaire\n");
 	printf("3. Frank Gore\n");
 	printf("Please select the number: ");
 	scanf("%d",&num);
 	if (num == 1) {
 		printf("you have selected Todd Gurley\n");
 	} else if (num == 2) {
 		printf("you have selected Clyde Edwards-Helaire\n");
 	} else if (num ==3 ) {
 		printf("you have selected Frank Gore\n");
 	} else{
		printf("you have entered the wrong number\n");
 		return 0;
 	}
 	printf("WR selection\n");
 	printf("1. Antonio Brown\n");
 	printf("2. Will Fuller\n");
 	printf("3. Josh Gordon\n");

 	printf("Please select the number: ");
 	scanf("%d",&num);
 	if (num == 1) {
 		printf("you have selected Antonio Brown\n");
 	} else if (num == 2) {
 		printf("you have selected Will Fuller\n");
 	} else if (num ==3 ) {
 		printf("you have selected Josh Gordon\n");
 	} else {
 		printf("you have entered the wrong number\n");
 		return 0;
 	}

 	printf("TE selection\n");
	printf("1. George Kittle\n");
	printf("2. Darren Waller\n");
	printf("3. Hayden hurst\n");

 	printf("Please select the number: ");
 	scanf("%d",&num);
 	if (num == 1) {
 		printf("you have selected George Kittle\n");
 	} else if (num == 2) {
 		printf("you have selected Darren Waller\n");
 	} else if (num ==3 ) {
 		printf("you have selected Hayden hurst\n");
 	} else {
 		printf("you have entered the wrong number\n");
 		return 0;
 	}

	printf("\nYou have selected your TEAM!\n");

 	return 0;
}
