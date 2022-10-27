#pragma once
#include <iostream>
using namespace std;


class Player {
private:
	int score = 0;
	

public:
	Player(int _score) {
		score = _score;
	}
	Player& operator ++() {
		score += 10;
		return *this;
	}
	Player& operator --() {
		score -= 5;
		return *this;
	}
	int getScore() { return score; };
	void setScore(int _score) { score = _score; };


};

//sobrecargar ++ para sumar 1 punto en caso de acierto
//sobrecargar -- para restar 1 punto en caso de error

class Game {
public:
	void run();

};