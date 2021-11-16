//Player.cpp 

#include "Player.h"

Player::Player()
{
}

Player::Player(std::string name, int age, int yearsPlayed, std::string position, std::string team, double boomOrBust, double heartbeat)
{
	this->name = name;
	this->age = age;
	this->yearsPlayed = yearsPlayed;
	this->position = position;
	this->team = team;
	this->boomOrBust = boomOrBust;
	this->heartbeat = heartbeat;
}

double Player::calcBoom(double boomOrBust)
{
	return boomOrBust;
}

double Player::calcBust(double boomOrBust)
{
	//The bust potential is just subtracting the boom potential from 2
	return (2 - boomOrBust);
}

QB::QB()
{
}

QB::QB(Player player, double compRate, double passYards, double passTDs, double interceptions)
{
	this->player = player;
	this->compRate = compRate;
	this->passYards = passYards;
	this->passTDs = passTDs;
	this->interceptions = interceptions;
}

double QB::average(double yearsPlayed, double stat)
{
	return stat / yearsPlayed;
}

double QB::calcScore(double passYards, double passTDs, double interceptions, double boomOrBust)
{
	double rawScore = (passYards * 0.04) + (passTDs * 4) - (interceptions * 2);
	double curvedScore = rawScore * boomOrBust;
	return curvedScore;
}

RB::RB()
{
}

RB::RB(Player player, double rushAttempts, double rushYards, double rushTDs, double fumbles)
{
	this->player = player;
	this->rushAttempts = rushAttempts;
	this->rushYards = rushYards;
	this->rushTDs = rushTDs;
	this->fumbles = fumbles;
}

double RB::average(double yearsPlayed, double stat)
{
	return stat / yearsPlayed;
}

double RB::calcScore(double rushYards, double rushTDs, double fumbles, double boomOrBust)
{
	double rawScore = (rushYards * 0.1) + (rushTDs * 6) + (fumbles * -2);
	double curvedScore = rawScore * boomOrBust;
	return curvedScore;
}

WR::WR()
{
}

WR::WR(Player player, double receptions, double recYards, double recTDs, double fumbles)
{
	this->player = player;
	this->receptions = receptions;
	this->recYards = recYards;
	this->recTDs = recTDs;
	this->fumbles = fumbles;
}

double WR::average(double yearsPlayed, double stat)
{
	return stat / yearsPlayed;
}

double WR::calcScore(double receptions, double recYards, double recTDs, double fumbles, double boomOrBust)
{
	double rawScore = (receptions) + (recYards * 0.1) + (recTDs * 6) + (fumbles * -2);
	double curvedScore = rawScore * boomOrBust;
	return curvedScore;
}

TE::TE()
{
}

TE::TE(Player player, double receptions, double recYards, double recTDs, double fumbles)
{
	this->player = player;
	this->receptions = receptions;
	this->recYards = recYards;
	this->recTDs = recTDs;
	this->fumbles = fumbles;
}

double TE::average(double yearsPlayed, double stat)
{
	return stat / yearsPlayed;
}

double TE::calcScore(double receptions, double recYards, double recTDs, double fumbles, double boomOrBust)
{
	double rawScore = (receptions) + (recYards * 0.1) + (recTDs * 6) + (fumbles * -2);
	double curvedScore = rawScore * boomOrBust;
	return curvedScore;
}
