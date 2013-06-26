#ifndef HardCodedLine_H_
#define HardCodedLine_H_
class HardCodedLine
{
	public:
	int id;

	float dir_x;
	float dir_y;
	float point_x;
	float point_y;

	float transformed_dir_x;
	float transformed_dir_y;
	float transformed_point_x;
	float transformed_point_y;
	
	HardCodedLine(float x1, float y1, float x2, float y2);	
	HardCodedLine();
	~HardCodedLine();
	void transform(float tx, float ty, float r);
	float distance(float x, float y);
};
#endif
