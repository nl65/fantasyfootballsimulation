//FantasyFB.cpp 

#include "Player.h"
#include "user_input.h"
#include <stdlib.h>
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
	displayInfo();

	//Creating the Player objects of each player
	Player * p1 = new Player("Lamar Jackson", 23, 3, "QB", "Baltimore Ravens", 0.9, 36);
	Player * p2 = new Player("Alex Smith", 36, 14, "QB", "Washington Football Team", 0.7, 45);
	Player * p3 = new Player("Jimmy Garoppolo", 29, 4, "QB", "San Francisco 49ers", 0.8, 39);

	Player * p4 = new Player("Todd Gurley", 26, 6, "RB", "Atlanta Falcons", 0.8, 39);
	Player * p5 = new Player("Clyde Edwards-Helaire", 21, 1, "RB", "Kansas City Chiefs", 1.3, 38);
	Player * p6 = new Player("Frank Gore", 37, 16, "RB", "New York Jets", 0.8, 44);

	Player * p7 = new Player("Antonio Brown", 32, 10, "WR", "Tampa Bay Buccaneers", 0.6, 40);
	Player * p8 = new Player("Will Fuller", 26, 5, "WR", "Houston Texans", 1.3, 44);
	Player * p9 = new Player("Josh Gordon", 29, 4, "WR", "Seattle Seahawks", 0.8, 47);

	Player * p10 = new Player("George Kittle", 27, 4, "TE", "San Francisco 49ers", 0.7, 40);
	Player * p11 = new Player("Darren Waller", 28, 3, "TE", "Las Vegas Raiders", 0.8, 38);
	Player * p12 = new Player("Hayden Hurst", 27, 3, "TE", "Atlanta Falcons", 1.3, 40);

	//Creating the subobjects by associating each player with his position
	QB * lamar = new QB(*p1, 63.8, 6545.0, 60.0, 16.0);
	QB * alex = new QB(*p2, 62.5, 35488.0, 197.0, 107.0);
	QB * jimmy = new QB(*p3, 67.5, 8042.0, 51.0, 26.0);

	RB * todd = new RB(*p4, 1446, 6049, 67, 16);
	RB * clyde = new RB(*p5, 167, 724, 4, 0);
	RB * frank = new RB(*p6, 3698, 15893, 80, 47);

	WR * antonio = new WR(*p7, 866, 11480, 75, 15);
	WR * will = new WR(*p8, 209, 3110, 24, 3);
	WR * josh = new WR(*p9, 247, 4252, 20, 1);

	TE * george = new TE(*p10, 253, 3419, 14, 1);
	TE * darren = new TE(*p11, 192, 2140, 12, 2);
	TE * hayden = new TE(*p12, 86, 987, 6, 0);

	//Creating an array of each position that contains the players
	QB qbs[3] = {*lamar, *alex, *jimmy};
	RB rbs[3] = {*todd, *clyde, *frank};
	WR wrs[3] = {*antonio, *will, *josh};
	TE tes[3] = {*george, *darren, *hayden};

	//Calculating the average of each stat for each player in each position

	//Quarterbacks: Average pass completion %, pass yards, pass touchdowns, interceptions
	cout << "----QUARTERBACKS----" << endl;
	double qbAveCompRate[3] = {lamar->compRate, alex->compRate, jimmy->compRate};
	double qbAvePassYards[3];
	double qbAvePassTDs[3];
	double qbAveInts[3];
	for(int i = 0; i < 3; i++)
	{
		qbAvePassYards[i] = qbs[i].average(qbs[i].player.yearsPlayed, qbs[i].passYards);
		qbAvePassTDs[i] = qbs[i].average(qbs[i].player.yearsPlayed, qbs[i].passTDs);
		qbAveInts[i] = qbs[i].average(qbs[i].player.yearsPlayed, qbs[i].interceptions);
		cout << "Player name: " << qbs[i].player.name << "; Age: " << qbs[i].player.age << "; Team: " << qbs[i].player.team << endl;
		cout << "Completion %: " << qbAveCompRate[i] << endl;
		cout << "Average Pass Yards: " << qbAvePassYards[i] << endl;
		cout << "Average Pass Touchdowns: " << qbAvePassTDs[i] << endl;
		cout << "Average Fumbles: " << qbAveInts[i] << endl;
		cout << "Boom Potential: " << qbs[i].calcBoom(qbs[i].player.boomOrBust) << endl;
		cout << "Bust Potential: " << qbs[i].calcBust(qbs[i].player.boomOrBust) << endl;
		cout << "Normal Heartbeat before game: " << qbs[i].player.heartbeat << endl << endl;
	}
        printf("***** Player Scenarios ******\n");
        printf("Lamar Jackson never throws the ball. This can be detrimental to his performance because he is a target for the defense.\n");
        printf("Alex Smith broke his leg in 2018. He went through 17 surgeries to get it fixed, but he should be more healthy now.\n");
        printf("Jimmy Garoppolo had a high ankle sprain.\n");

	//Runningbacks: Average rush attempts, rushh yards, rush touchdowns, fumbles
	cout << "\n----RUNNINGBACKS----" << endl;
	double rbAveRushAttempts[3];
	double rbAveRushYards[3];
	double rbAveRushTDs[3];
	double rbAveFumbles[3];
	for(int i = 0; i < 3; i++)
	{
		rbAveRushAttempts[i] = rbs[i].average(rbs[i].player.yearsPlayed, rbs[i].rushAttempts);
		rbAveRushYards[i] = rbs[i].average(rbs[i].player.yearsPlayed, rbs[i].rushYards);
		rbAveRushTDs[i] = rbs[i].average(rbs[i].player.yearsPlayed, rbs[i].rushTDs);
		rbAveFumbles[i] = rbs[i].average(rbs[i].player.yearsPlayed, rbs[i].fumbles);
		cout << "Player name: " << rbs[i].player.name << "; Age: " << rbs[i].player.age << "; Team: " << rbs[i].player.team << endl;
		cout << "Average Rush Attempts: " << rbAveRushAttempts[i] << endl;
		cout << "Average Rush Yards: " << rbAveRushYards[i] << endl;
		cout << "Average Rush Touchdowns: " << rbAveRushTDs[i] << endl;
		cout << "Average Fumbles: " << rbAveFumbles[i] << endl;
		cout << "Boom Potential: " << rbs[i].calcBoom(rbs[i].player.boomOrBust) << endl;
		cout << "Bust Potential: " << rbs[i].calcBust(rbs[i].player.boomOrBust) << endl;
		cout << "Normal Heartbeat before game: " << rbs[i].player.heartbeat << endl << endl;
	}
        printf("***** Player Scenarios ******\n");
        printf("Todd Gurley suffers from arthritis in his knees which made him tear his ACL in 2014. This impairs his running ability.\n");
        printf("Clyde Edwards-Helaire is 5'6 (way shorter than normal), but he is very elusive and nimble and hard to tackle.\n");
        printf("Frank Gore is one of the oldest runningbacks in the league right now. He has a higher change of getting CTE from his concussions.\n");


	//Wide Receivers: Average receptions, receiving yards, receiving touchdowns, fumbles
	cout << "\n----WIDE RECEIVERS----" << endl;
	double wrAveReceptions[3];
	double wrAveRecYards[3];
	double wrAveRecTDs[3];
	double wrAveFumbles[3];
	for(int i = 0; i < 3; i++)
	{
		wrAveReceptions[i] =wrs[i].average(wrs[i].player.yearsPlayed, wrs[i].receptions);
		wrAveRecYards[i] = wrs[i].average(wrs[i].player.yearsPlayed, wrs[i].recYards);
		wrAveRecTDs[i] = wrs[i].average(wrs[i].player.yearsPlayed, wrs[i].recTDs);
		wrAveFumbles[i] = wrs[i].average(wrs[i].player.yearsPlayed, wrs[i].fumbles);
		cout << "Player name: " << wrs[i].player.name << "; Age: " << wrs[i].player.age << "; Team: " << wrs[i].player.team << endl;
		cout << "Average Receptions: " << wrAveReceptions[i] << endl;
		cout << "Average Receiving Yards: " << wrAveRecYards[i] << endl;
		cout << "Average Receiving Touchdowns: " << wrAveRecTDs[i] << endl;
		cout << "Average Fumbles: " << wrAveFumbles[i] << endl;
		cout << "Boom Potential: " << wrs[i].calcBoom(wrs[i].player.boomOrBust) << endl;
		cout << "Bust Potential: " << wrs[i].calcBust(wrs[i].player.boomOrBust) << endl;
		cout << "Normal Heartbeat before game: " << wrs[i].player.heartbeat << endl << endl;
	}
        printf("***** Player Scenarios ******\n");
        printf("Antonio Brown has a history of bad behavior and attitude on NFL teams, and he got kicked off of the Raiders in 2019.\n");
        printf("Will Fuller took performance enhancing drugs this season and got suspended, but this improved his stats.\n");
        printf("Josh Gordon likes to smoke a lot of weed, even before it was legal.\n");

	//Tight Ends: Average receptions, receiving yards, receiving touchdowns, fumbles
	cout << "\n----TIGHT ENDS----" << endl;
	double teAveReceptions[3];
	double teAveRecYards[3];
	double teAveRecTDs[3];
	double teAveFumbles[3];
	for(int i = 0; i < 3; i++)
	{
		teAveReceptions[i] =tes[i].average(tes[i].player.yearsPlayed, tes[i].receptions);
		teAveRecYards[i] = tes[i].average(tes[i].player.yearsPlayed, tes[i].recYards);
		teAveRecTDs[i] = tes[i].average(tes[i].player.yearsPlayed, tes[i].recTDs);
		teAveFumbles[i] = tes[i].average(tes[i].player.yearsPlayed, tes[i].fumbles);
		cout << "Player name: " << tes[i].player.name << "; Age: " << tes[i].player.age << "; Team: " << tes[i].player.team << endl;
		cout << "Average Receptions: " << teAveReceptions[i] << endl;
		cout << "Average Receiving Yards: " << teAveRecYards[i] << endl;
		cout << "Average Receiving Touchdowns: " << teAveRecTDs[i] << endl;
		cout << "Average Fumbles: " << teAveFumbles[i] << endl;
		cout << "Boom Potential: " << tes[i].calcBoom(tes[i].player.boomOrBust) << endl;
		cout << "Bust Potential: " << tes[i].calcBust(tes[i].player.boomOrBust) << endl;
		cout << "Normal Heartbeat before game: " << tes[i].player.heartbeat << endl << endl;
	}
        printf("***** Player Scenarios ******\n");
        printf("George Kittle plays too physical, leading to him spraining his knee this season.\n");
        printf("Darren Waller used to have a drug addiction, but he went to rehab to get better.\n");
        printf("Hayden Hurst had depression in college, and he almost lost his life to suicide. He currently runs an organization that prevents suicide\n\n");


	//Player selections
	int num;
	double qbScore, rbScore, wrScore, teScore;
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
		qbScore = qbs[num-1].calcScore(qbAvePassYards[num-1], qbAvePassTDs[num-1], qbAveInts[num-1], qbs[num-1].player.boomOrBust);
	} else if (num == 2) {
		printf("you have selected Alex Smith\n");
		qbScore = qbs[num-1].calcScore(qbAvePassYards[num-1], qbAvePassTDs[num-1], qbAveInts[num-1], qbs[num-1].player.boomOrBust);
	} else if (num == 3) {
		printf("you have selected Jimmy Garropolo\n");
		qbScore = qbs[num-1].calcScore(qbAvePassYards[num-1], qbAvePassTDs[num-1], qbAveInts[num-1], qbs[num-1].player.boomOrBust);
        } else {
		printf("you have entered an invalid number\n");
		return 0;
	}
        printf("RB selection\n");
        printf("1. Todd Gurley\n");
        printf("2. Clyde Edwards-Helaire\n");
	printf("3. Frank Gore\n");
        printf("Please select the number: ");
	scanf("%d", &num);
	if (num == 1) {
		printf("you have selected Todd Gurley\n");
		rbScore = rbs[num-1].calcScore(rbAveRushYards[num-1], rbAveRushTDs[num-1], rbAveFumbles[num-1], rbs[num-1].player.boomOrBust);
	} else if (num == 2) {
		printf("you have selected Clyde Edwards-Helaire\n");
		rbScore = rbs[num-1].calcScore(rbAveRushYards[num-1], rbAveRushTDs[num-1], rbAveFumbles[num-1], rbs[num-1].player.boomOrBust);
	} else if (num == 3) {
		printf("you have selected Jimmy Frank Gore\n");
		rbScore = rbs[num-1].calcScore(rbAveRushYards[num-1], rbAveRushTDs[num-1], rbAveFumbles[num-1], rbs[num-1].player.boomOrBust);
        } else {
		printf("you have entered an invalid number\n");
		return 0;
	}
        printf("WR selection\n");
        printf("1. Antonio Brown\n");
        printf("2. Will Fuller\n");
	printf("3. Josh Gordon\n");
        printf("Please select the number: ");
	scanf("%d", &num);
	if (num == 1) {
		printf("you have selected Antonio Brown\n");
		wrScore = wrs[num-1].calcScore(wrAveReceptions[num-1], wrAveRecYards[num-1], wrAveRecTDs[num-1], wrAveFumbles[num-1], wrs[num-1].player.boomOrBust);
	} else if (num == 2) {
		printf("you have selected Will Fuller\n");
		wrScore = wrs[num-1].calcScore(wrAveReceptions[num-1], wrAveRecYards[num-1], wrAveRecTDs[num-1], wrAveFumbles[num-1], wrs[num-1].player.boomOrBust);
	} else if (num == 3) {
		printf("you have selected Josh Gordon\n");
		wrScore = wrs[num-1].calcScore(wrAveReceptions[num-1], wrAveRecYards[num-1], wrAveRecTDs[num-1], wrAveFumbles[num-1], wrs[num-1].player.boomOrBust);
        } else {
		printf("you have entered an invalid number\n");
		return 0;
	}
        printf("TE selection\n");
        printf("1. George Kittle\n");
        printf("2. Darren Waller\n");
	printf("3. Hayden Hurst\n");
        printf("Please select the number: ");
	scanf("%d", &num);
	if (num == 1) {
		printf("you have selected George Kittle\n");
		teScore = tes[num-1].calcScore(teAveReceptions[num-1], teAveRecYards[num-1], teAveRecTDs[num-1], teAveFumbles[num-1], tes[num-1].player.boomOrBust);
	} else if (num == 2) {
		printf("you have selected Darren Waller\n");
		teScore = tes[num-1].calcScore(teAveReceptions[num-1], teAveRecYards[num-1], teAveRecTDs[num-1], teAveFumbles[num-1], tes[num-1].player.boomOrBust);
	} else if (num == 3) {
		printf("you have selected Hayden Hurst\n");
		teScore = tes[num-1].calcScore(teAveReceptions[num-1], teAveRecYards[num-1], teAveRecTDs[num-1], teAveFumbles[num-1], tes[num-1].player.boomOrBust);
        } else {
		printf("you have entered an invalid number\n");
		return 0;
	}

	//Calculating the total score
	double totalScore = qbScore + rbScore + wrScore + teScore;
	cout << "The highest possible score is ~568" << endl;
	cout << "The lowest possible score is ~447" << endl;
	cout << "Your total score: " << totalScore << endl;
}
