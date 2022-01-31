#ifndef MOVE_H_
#define MOVE_H_

class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0);			// x = a, y = b;
	void showmove()const;						//show x,y
	Move add(const Move& m)const;
	//sumuje x obiektu m i x obiektu wywolujacego, y obiektu m i y obiektu wywolujacego, tworzy nowy obiekt,
	//inicjalizuje go obliczonymi sumami x i y i zwraca tak zainicjalizowany obiekt

	void reset(double a = 0, double b = 0);		// x = a, y = b;
};

#endif // !MOVE_H_
