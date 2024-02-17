#include <stdio.h>
#include <opencv2/openccv.hpp>

using namespace cv;

int main(int argc, char** argv){
  if (argc != 2){
    printf("Usage DisplayImage.out <Image_path>\n");
    return -1;
  }
  
  Mat image;
  image = imread(argv[1], 'IMREAD_COLOR');

  if ( !image.data ){
    printf("No image data \n");
    return -1;
  }
  namedWindow("Display Image", WINDOW_AUTOSIZE);
  imshow("Display Image", image);

  waitKey(0);

  return 0;
}
