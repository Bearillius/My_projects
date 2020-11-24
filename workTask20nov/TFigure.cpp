#include "TFigure.h"

TFigure::TFigure(void){
	sides = NULL;}

TFigure::TFigure(int sides_qty){
	sides = new TCoord*[sides_qty];
	for(int i = 0; i < sides_qty; i++){
		sides[i] = new TCoord[2];
	}
}


TFigure::~TFigure(void){
	if (sides)
	{
		delete sides;
	}
