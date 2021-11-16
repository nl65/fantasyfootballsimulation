//Player.h 

#include <iostream>

class Player
{
	private:
	public:
		Player(std::string, int, int, std::string, std::string, double, double); //Constructor
		Player();		//Default Constructor
		std::string name;	//Their name
		int age;		//How old are they
		int yearsPlayed;	//How many years have they been playing in the NFL
		std::string position;	//Their position
		std::string team;	//Their current team
		double boomOrBust; 	//Boom or bust constant as the scaling factor based on their scenario
		double heartbeat;	//Resting heartbeat before games
		double calcBoom(double);//Calculates the boom potential of the player
		double calcBust(double);//Calculates the bust potential of the player
};

class QB : public Player
{
	public:
		QB(Player, double, double, double, double); //Constructor
		QB();			//Default Constructor
		Player player;		//Player class object
		double compRate;	//QB completion rate
		double passYards;	//QB passing yards
		double passTDs; 	//QB passing touchdowns
		double interceptions;	//QB interceptions
		double average(double, double);	//Calculates the average of every stat per season
		double calcScore(double, double, double, double); //Calculates the projected score of the player selected based on stats and scenario
};

class RB : public Player
{
	public:
		RB(Player, double, double, double, double); //Constructor
		RB();			//Default Constructor
		Player player;		//Player class object
		double rushAttempts;	//RB rushing attempts
		double rushYards;	//RB rushing yards
		double rushTDs;		//RB rushing touchdowns
		double fumbles;		//RB fumbles
		double average(double, double);	//Calculates the average of every stat per season
		double calcScore(double, double, double, double); //Calculates the projected score of the player selected based on stats and scenario

};

class WR : public Player
{
	public:
		WR(Player, double, double, double, double); //Constructor
		WR();			//Default Constructor
		Player player;		//Player class object
		double receptions; 	//WR receptions
		double recYards;	//WR receiving yards
		double recTDs;		//WR receiving touchdowns
		double fumbles;		//WR fumbles
		double average(double, double);	//Calculates the average of every stat per season
		double calcScore(double, double, double, double, double); //Calculates the projected score of the player selected based on stats and scenario
};

class TE : public Player
{
	public:
		TE(Player, double, double, double, double); //Constructor
		TE();			//Default Constructor
		Player player;		//Player class object
		double receptions;	//TE receptions
		double recYards;	//TE receiving yards
		double recTDs;		//TE receiving touchdowns
		double fumbles;		//TE fumbles
		double average(double, double);	//Calculates the average of every stat per season
		double calcScore(double, double, double, double, double); //Calculates the projected score of the player selected based on stats and scenario
};
