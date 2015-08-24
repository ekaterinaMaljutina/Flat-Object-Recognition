
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/objdetect/objdetect.hpp"
#include "opencv2\nonfree\features2d.hpp"

using namespace cv;

void FindFeatureUseSURF(const Mat image)
{
	int minHessian = 400;

	SurfFeatureDetector detector( minHessian );

	vector<KeyPoint> keypoints_object;

	detector.detect( image, keypoints_object );
	
}



int main(int argc, const char **argv)
{   
    return 0;
}
