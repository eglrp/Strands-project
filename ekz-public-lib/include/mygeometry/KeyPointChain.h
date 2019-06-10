#ifndef KeyPointChain_H_
#define KeyPointChain_H_
#include "/home/younes/Bureau/Pointer2Labs/PFE/catkin_semantic/src/ekz-public-lib/include/mygeometry/KeyPoint2.h"
#include <vector>

using namespace std;

class KeyPoint2;
class KeyPointChain {
	public:
		vector<KeyPoint2 * > key_points;
 		int id;

		KeyPointChain(KeyPoint2 * kp);
		~KeyPointChain();

		void merge(KeyPointChain * chain);
};


#endif
