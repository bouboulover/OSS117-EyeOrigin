// Projet OSS117 : Eye origin 
// Version 0.0 
// Théo Falgarone, Alexis Hubert, Tristan Maunier, Christian Te


#ifndef PROTOCOL_CONSTANTS_H
#define PROTOCOL_CONSTANTS_H

#include <string>
#include <cmath>

//Parametres
const int nbpos = 7 ;
const int nbangleh = 5 ;
const int nbanglev = 3 ;
const int point = 9 ;
const int nbcombangle = nbangleh * nbanglev ;

//Positions camera
const std::string Position[nbpos] = {"Gauche 10 cm","Droite 10 cm","Gauche 20.5 cm","Droite 20.5 cm","Gauche 35 cm","Centre 35 cm","Droite 35 cm"} ;

//Angles horizontaux
const std::string Angle_horizontal[nbangleh] = {"-10°","-5°","0°","+5°","+10°"} ;

//Angles verticaux
const std::string Angle_vertical[nbanglev] = {"0°","+5°","+10°"} ;


#endif
