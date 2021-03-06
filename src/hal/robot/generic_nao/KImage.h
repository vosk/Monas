#ifndef KIMAGE_H
#define KIMAGE_H
#include <string.h>
#include <cmath>

/*
class KImageDeepCopy
{
public:
	int width;
	int height;
	int nChannels;
	char* imageData;
	KImageDeepCopy() : width(0), height(0), nChannels(0), imageData(0) {}
	~KImageDeepCopy()
	{
		clean();
	}
	void clean()
	{
		if(imageData != 0) delete [] imageData;
	}
	int imageSize()
	{
		return width * height * nChannels;
	};
	void copyFrom(void *data, int w, int h, int c)
	{
		if(w * h * c != imageSize())
		{
			clean();
			imageData = (char *)new  long long [(int)ceil(((float)w * h * c) / (sizeof(long long)) )]; //Make allingment as good as possible
		}


		width = w;
		height = h;
		nChannels = c;
		//imageData=(char *)data;
		//imageData=( char *)data;
		for(int i=0;i<height;i++)
		{
			for(int j=0;j<width*nChannels/32;j++)
			{
				__builtin_prefetch(((char *)data)+i*width*nChannels+(j+2)*32);
				//sleep(0);
				memcpy(imageData+i*width*nChannels+j*32, ((char *)data)+i*width*nChannels+j*32, 32);
			}
//			sleep(0);
		usleep(1);
		}


	}
};
*/


class KImageConst
{
public:
	int width;
	int height;
	int nChannels;
	const char* imageData;
	KImageConst() : width(0), height(0), nChannels(0), imageData(0) {}
	~KImageConst()
	{
		clean();
	}
	void clean()
	{
		/*if(imageData!=0) delete [] imageData;*/
	}
	int imageSize()
	{
		return width * height * nChannels;
	};
	void copyFrom(const void *data, int w, int h, int c)
	{
		/*if(w*h*c!=imageSize())
		{
			//clean();
			//imageData=(char *)new  long long [(int)ceil(((float)w*h*c)/(sizeof(long long)) )];//Make allingment as good as possible
		}*/
		width = w;
		height = h;
		nChannels = c;
		imageData = (const  char *)data;
		//memcpy(imageData,data,height*width*nChannels);
	}
};

#endif
