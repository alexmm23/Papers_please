#pragma once
#include <iostream>
using namespace std;


class Player {
private:
	int score = 0;
	string family[5] = { "PADRE", "MADRE", "HERMANO MENOR", "ABUELA", "ABUELO" };
	

public:
	Player(int _score) {
		score = _score;
	}
	Player& operator ++() {
		score += 100;
		return *this;
	}
	Player& operator --() {
		score -= 50;
		return *this;
	}
	int getScore() { return score; };
	void setScore(int _score) { score = _score; };


};

//sobrecargar ++ para sumar 1 punto en caso de acierto
//sobrecargar -- para restar 1 punto en caso de error

//
//class Game {
//public:
//	void run();
//
//};