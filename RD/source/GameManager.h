#pragma once
/*
	class GameManager: takes charge of the game objects. Keeps track of the
		game process.
*/

#include "Player.h"

class GameManager
{
public:
	~GameManager();

	int getCash() const;
    static int CLOCK();
	static GameManager & getInstance();

	void addCash(int);
		
	void newGame();
	void endGame();
	bool playAgain();

private:
	int _cashAccum;	//Total cash accumulated
    int _clock = 0; //Keep track of the turn

	GameManager();  //We make it private so we cannot call getInstance from out the class.
		
	//Helper methods
	void resetCash();

};
