#include "HardCodedLine.h"
int HardCodedLine_counter = 0;

HardCodedLine::HardCodedLine(float x1, float y1, float x2, float y2)
{
	id = HardCodedLine_counter++;
	dir_x = x1-x2;
	dir_y = y2-y2;
	point_x = x1;
	point_y = y1;
	//TODO
	transformed_dir_x = 0;
	transformed_dir_y = 0;
	transformed_point_x = 0;
	transformed_point_y = 0;
}

HardCodedLine::HardCodedLine(){id = HardCodedLine_counter++;}
HardCodedLine::~HardCodedLine(){}

//TODO
void HardCodedLine::transform(float tx, float ty, float r){}

//TODO
float HardCodedLine::distance(float x, float y){return -1;}

