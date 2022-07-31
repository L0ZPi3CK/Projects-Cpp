#pragma once
class Tv
{
private:
	int state;		// wlaczony lub wylaczony
	int volume;		// poziom glosnosci
	int maxchannel;	// maksymalna liczba kanalow
	int channel;	// akutalnie wybrany kanal
	int mode;		// antena lub telewizja kablowa
	int input;		// televizja lub DVD

public:
	friend class Remote;		// Klasa Remote ma dostep do prywatnych danych Tv

	enum { Off, On };
	enum { MinVal, MaxVal = 20 };
	enum { Antenna, Cable };
	enum { TV, DVD };

	Tv(int s = Off, int mc = 125) : state(s), volume(5), maxchannel(mc), channel(2), mode(Cable), input(TV) {}

	void onOff() { state = (state == On) ? Off : On; }
	bool isOn() const { return state == On; }
	bool volUp();
	bool volDown();
	void chanUp();
	void chanDown();

	void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
	void set_input() { input = (input == TV) ? DVD : TV; }
	void settings() const;	// wyswietla wszystkie ustawienia
};


class Remote
{
private:
	int mode;		// kontroluje TV lub DVD
public:
	Remote (int m = Tv::TV) : mode(m)	{}

	bool volUp(Tv& t) { return t.volUp(); }
	bool volDown(Tv& t) { return t.volDown(); }
	void onOff(Tv& t) { t.onOff(); }
	void chanUp(Tv& t) { t.chanUp(); }
	void chanDown(Tv& t) { t.chanDown(); }
	void set_chan(Tv& t, int c) { t.channel = c; }
	void set_mode(Tv& t) { t.set_mode(); }
	void set_input(Tv& t) { t.set_input(); }
};

