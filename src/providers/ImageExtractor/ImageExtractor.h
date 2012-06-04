#ifndef SENSORS_H
#define SENSORS_H

#include <vector>
#include <map>
#include <string>



#include "architecture/executables/IProvider.h"
#include "architecture/narukom/pub_sub/blackboard.h"
#include "hal/robot/generic_nao/KImageExtractor.h"
#include "hal/smart_timer.h"
#include "messages/Kimage.pb.h"



PROVIDER_START
class ImageExtractor:   public IProvider
{
	public:
        static const unsigned camerarefreshmillisec=1000;
        ImageExtractor(KSystem::ThreadConfig &c, Narukom&n):
        EndPoint("ImageExtractor"),
        IProvider("ImageExtractor",c,n),_blk("ImageExtractorBlackboard"),imext(){
            _blk.attachTo(*n.get_message_queue());
            lastrefresh=boost::posix_time::microsec_clock::universal_time()-boost::posix_time::microseconds(camerarefreshmillisec+10);
            UserInit();
        };
		int PROVIDER_VISIBLE IEX_DIRECTIVE_HOT Execute();

		void PROVIDER_VISIBLE UserInit();
		const std::string PROVIDER_VISIBLE GetName() const
		{
			return "ImageExtractor";
		}
		PROVIDER_VISIBLE ~ImageExtractor()
		{

		}
    private:
        Blackboard _blk;
        KImageExtractor imext;
        KSystem::smart_timer t;
        KImageDeepCopy imstore;
        KRawImage outmsg;
        boost::posix_time::ptime lastrefresh;


};
PROVIDER_END
#endif
