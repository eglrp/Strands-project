#ifndef KeyPoint2_H_
#define KeyPoint2_H_
#include "../FeatureDescriptor/FeatureDescriptor.h"

#include <Eigen/Core>
#include <algorithm>
#include <vector>
#include "Point2.h"
#include "KeyPointChain.h"


class KeyPointChain;

class KeyPoint2 {
	public:
		int index_number;
		FeatureDescriptor * descriptor;
		Point2 * point;
		bool valid;
		int r;
		int g;
		int b;

		float w;
		float h;

		float stabilety;
		vector< pair <int , float > > cluster_distance_pairs;
		KeyPointChain * chain;
		int frame_id;
		KeyPoint2();
		~KeyPoint2();
		void print();
		void sortDistances();
};

#endif

