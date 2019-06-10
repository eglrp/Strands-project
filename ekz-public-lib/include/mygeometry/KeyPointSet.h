#ifndef KeyPointSet_H_
#define KeyPointSet_H_
#include "KeyPoint2.h"
#include <vector>

using namespace std;

class KeyPointSet {
	public:
		double stabilety_threshold;
		vector<KeyPoint2 * > valid_key_points;
		vector<KeyPoint2 * > invalid_key_points;
 	
		KeyPointSet();
		~KeyPointSet();

		void sortKeyPoints();
};


#endif
