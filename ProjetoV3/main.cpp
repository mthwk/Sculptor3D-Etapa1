#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <cmath>

#include "sculptor.h"

using namespace std;

int main(){

    Sculptor Placa(100,75,100);

        //Base da placa mãe
    Placa.setColor(0.042,0.259,0.039,1);
    Placa.putBox(0,70,0,2,0,90);

       //Resistor 1(150Ohm) - Corpo
    Placa.setColor(0.80,0.68,0.43,1);
    Placa.putSphere(60,13,30,8);
    Placa.putSphere(60,13,56,8);
    Placa.putEllipsoid(60,13,43,5,5,10);
    Placa.setColor(0.318,0.161,0.016,1);
    Placa.putEllipsoid(60,13,40,5,4,2);
    Placa.setColor(0.004, 0.267, 0.192,1);
    Placa.putEllipsoid(60,13,43,5,5,3);
    Placa.setColor(0.318,0.161,0.016,1);
    Placa.putEllipsoid(60,13,44,5,4,2);
    Placa.setColor(0.639, 0.584, 0.141,1);
    Placa.putEllipsoid(60,13,48,5,4,2);
        //Resistor1 - Perna1
    Placa.setColor(0.75,0.72,0.66,1);
    Placa.putBox(30,31,6,7,32,36);
    Placa.putBox(30,31,5,6,34,38);
    Placa.putBox(30,31,1,6,37,38);
        //Resistor1 - Perna2
    Placa.setColor(0.75,0.72,0.66,1);
    Placa.putBox(30,31,5,6,8,12);
    Placa.putBox(30,31,4,5,6,10);
    Placa.putBox(30,31,1,5,6,7);

        //Resistor 2 (47kOhm) - Corpo
    Placa.setColor(0.80,0.68,0.43,1);
    Placa.putSphere(90,13,30,8);
    Placa.putSphere(90,13,56,8);
    Placa.putEllipsoid(90,13,43,5,5,10);
    Placa.setColor(0.918, 0.827, 0.008,1);
    Placa.putEllipsoid(90,13,40,5,4,2);
    Placa.setColor(0.596, 0.325, 0.788,1);
    Placa.putEllipsoid(90,13,43,5,5,3);
    Placa.setColor(0.949, 0.353, 0.027,1);
    Placa.putEllipsoid(90,13,44,5,4,2);
    Placa.setColor(0.639, 0.639, 0.616,1);
    Placa.putEllipsoid(90,13,48,5,4,2);
        //Resistor2 - Perna1
    Placa.setColor(0.75,0.72,0.66,1);
    Placa.putBox(45,46,6,7,32,36);
    Placa.putBox(45,46,5,6,34,38);
    Placa.putBox(45,46,1,6,37,38);
        //Resistor2 - Perna2
    Placa.setColor(0.75,0.72,0.66,1);
    Placa.putBox(45,46,6,7,8,12);
    Placa.putBox(45,46,5,6,6,10);
    Placa.putBox(45,46,1,6,6,7);

        //Capacitor
    Placa.setColor(0.08,0.08,0.08,1);
    Placa.putEllipsoid(110,15,110,10,10,20);
    Placa.cutBox(52,60,2,15,43,47);
    Placa.cutBox(52,60,2,15,63,67);
        //Capacitor - Perna1
    Placa.setColor(0.75,0.72,0.66,1);
    Placa.putBox(55,56,7,8,43,47);
    Placa.putBox(55,56,6,7,41,45);
    Placa.putBox(55,56,2,6,41,42);
        //Capacitor - Perna2
    Placa.putBox(55,56,7,8,63,67);
    Placa.putBox(55,56,6,7,65,69);
    Placa.putBox(55,56,2,6,68,69);

        //LED - Corpo
    Placa.setColor(0.81,0.05,0.04,0.60);
    Placa.putEllipsoid(60,24,110,9,15,9);
    Placa.cutBox(25,35,4,9,50,65);
    Placa.cutBox(25,35,11,21,50,65);
    Placa.putEllipsoid(60,24,110,7,15,7);
    Placa.cutBox(25,35,4,9,50,65);
        //LED - Perna1
    Placa.setColor(0.75,0.72,0.66,1);
    Placa.putVoxel(30,8,57);
    Placa.putVoxel(30,7,57);
    Placa.putVoxel(30,6,58);
    Placa.putVoxel(30,5,58);
    Placa.putVoxel(30,4,58);
    Placa.putVoxel(30,3,59);
    Placa.putVoxel(30,2,59);
        //LED - Perna2
    Placa.putBox(30,31,2,9,53,55);
    Placa.cutVoxel(30,2,53);
    Placa.cutVoxel(30,3,53);
    Placa.cutVoxel(30,4,53);
    Placa.cutVoxel(30,5,53);
    Placa.cutVoxel(30,6,53);
    Placa.cutVoxel(30,7,53);
    Placa.cutVoxel(30,8,53);

        //Transistor - Corpo
    Placa.setColor(0.08,0.08,0.08,1);
    Placa.putEllipsoid(60,20,150,9,15,9);
    Placa.cutBox(25,35,3,9,65,83);
    Placa.cutBox(25,28,4,20,70,80);
        //Transistor - Perna1
    Placa.setColor(0.75,0.72,0.66,1);
    Placa.putBox(30,31,1,9,75,76);
        //Transistor - Perna2
    Placa.putBox(30,31,7,9,73,74);
    Placa.putBox(30,31,4,7,72,73);
    Placa.putBox(30,31,1,4,71,72);
        //Transistor - Perna3
    Placa.putBox(30,31,7,9,77,78);
    Placa.putBox(30,31,4,7,78,79);
    Placa.putBox(30,31,1,4,79,80);

        //Pin Header (Fonte) - Corpo
    Placa.setColor(0.08,0.08,0.08,1);
    Placa.putBox(14,17,4,8,49,52);
    Placa.putBox(14,17,4,8,54,57);
    Placa.putBox(15,16,5,7,52,54);
        //Pin Header (Fonte) - Pernas
    Placa.setColor(0.75,0.72,0.66,1);
    Placa.putBox(15,16,1,17,50,51);
    Placa.putBox(15,16,1,17,55,56);

        //Trilhas
    Placa.setColor(0.114,0.471,0.106,1);
    Placa.putBox(15,16,1,2,25,51);
    Placa.putBox(16,23,1,2,25,26);
    Placa.putBox(22,23,1,2,6,25);
    Placa.putBox(23,46,1,2,6,7);
    Placa.putBox(30,31,1,2,38,54);
    Placa.putBox(30,31,1,2,59,72);

    Placa.putBox(15,16,1,2,56,66);
    Placa.putBox(16,23,1,2,65,66);
    Placa.putBox(23,24,1,2,65,80);
    Placa.putBox(23,31,1,2,79,80);

    Placa.putBox(31,46,1,2,75,76);
    Placa.putBox(45,46,1,2,37,76);
    Placa.putBox(46,56,1,2,68,69);

        //Furos da placa
    Placa.cutSphere(15,1,15,10);
    Placa.cutSphere(121,1,15,10);
    Placa.cutEllipsoid(15,1,163,10,20,10);
    Placa.cutEllipsoid(121,1,163,10,20,10);

    Placa.writeOFF((char*)"Placa.off");

    return 0;
}
