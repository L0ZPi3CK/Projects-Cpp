#pragma once
#include "PokerPlayer.h"
#include "Gunslinger.h"


class BadDude :	public PokerPlayer,public Gunslinger
{
public:
	BadDude() {};

	double Gdraw();		// Returns a double - type number that represent the time taken by the gunman to draw his revolver
	short Cdraw() { return PokerPlayer::Draw(); };		// Returns a number in range of 1-52 that represents card
	void Show();

};

