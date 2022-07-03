#include "PokerPlayer.h"

short PokerPlayer::Draw()
{
	return (rand() % 52 + 1);
}

void PokerPlayer::Show()
{
	Person::Show();
	std::cout << "Card Number: " << Draw() << std::endl;
}
/*
void PokerPlayer::Set()
{
	Person::Set();
}*/