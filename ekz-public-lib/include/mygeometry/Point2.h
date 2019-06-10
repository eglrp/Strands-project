#ifndef Point2_H_
#define Point2_H_
#include <Eigen/Core>
class KeyPoint;
class Point2
{

	public:
	KeyPoint * keypoint;
	float x;
	float y;
	float z;
	float w;
	float h;
	Eigen::Vector3f pos;
	Point2(float x_, float y_, float z_, float w_,float h_);
	Point2();
	~Point2();
	void print();
	float distance(Point2 * point);
};
#endif
