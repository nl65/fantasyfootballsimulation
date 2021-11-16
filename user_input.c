#include<stdio.h> 
int main() {
int num;
printf("Welcome to our Fantasy draft!\n");

 printf("Choose a team of 4 players based on their stats and story.\n");
 printf("You will be given a score at the end.\n\n");
 printf("------------------------------------------------------------\n");
 printf("1. User will be given 3 players from each position (QB, RB, WR, TE, so 12 total) with statistics and descriptions of each player\n");
 printf("2. They will draft one player from each position to their fantasy football team (4 players total)\n");
 printf("3. The program will generate a potential score for the team based on who the user drafts.\n");
 printf("4. Since there are 3 players from each position, there are 81 possible combinations for the fantasy team, which makes it fun.\n\n");
 printf("-----------------------------------------------------------\n");
 printf("There are three scenarios that you have to consider before your selection\n");
 printf("1. Weed/drugs - Some players like to smoke weed or take drugs before a game\n");
 printf("2. Injury - Some players are prone to injury that can take them out for a season\n");
 printf("3. Drama - Some players have off-field issues with other players on the team\n\n");
 printf("-----------------------------------------------------------\n");
 printf("***** Daily update news on the players ******\n");
 printf("Will Fuller took performance enhancing drugs this season and had a statline of 53 receptions, 879 yards, 8 touchdowns in 11 games.\n");
 printf("Antonio Brown has a history of bad behavior and had a statline of 20 receptions, 168 yards and 0 touchdowns in 4 games.\n\n");
 printf("Please select the given players below\n");
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
 } else {
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
