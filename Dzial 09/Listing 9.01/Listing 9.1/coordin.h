#pragma once
// coordin.h
// deklaracje struktur:
#ifndef COORDIN_H_
#define COORDIN_H_

struct polar
{
    double distance; // odleglosc od poczatku okladu wspolrzednych
    double angle; // odchylenie od osi

};

struct rect
{
    double x;
    double y;
};

// prototypy
polar rect_to_polar(rect xypost);
void show_polar(polar dapos);
#endif

