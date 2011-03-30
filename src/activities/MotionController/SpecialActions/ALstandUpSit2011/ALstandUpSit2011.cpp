#include "ALstandUpSit2011.h"

#include "hal/robot/generic_nao/kAlBroker.h"

namespace {
SpecialActionRegistrar<ALstandUpSit2011>::Type temp("ALstandUpSit2011");
}

ALstandUpSit2011::ALstandUpSit2011() {
  Initialize();
  Logger::Instance().WriteMsg("SP:ALstandUpSit2011","Initialized!",Logger::ExtraInfo);
  
  try {
    motion = KAlBroker::Instance().GetBroker()->getMotionProxy();
  } catch (AL::ALError& e) {
    Logger::Instance().WriteMsg("SP:ALstandUpSit2011","Error in getting motion proxy",Logger::FatalError);
  }
  
}




void ALstandUpSit2011::Initialize() {
  
	names.reserve(25);
	times.arraySetSize(25);
	keys.arraySetSize(25);

	names.push_back("HeadYaw");
	times[0].arraySetSize(8);
	keys[0].arraySetSize(8);

	times[0][0] = 0.600000;
	keys[0][0] = AL::ALValue::array(0.00149204, AL::ALValue::array(3, -0.200000, -0.00000), AL::ALValue::array(3, 0.173333, 0.00000));
	times[0][1] = 1.12000;
	keys[0][1] = AL::ALValue::array(-0.279253, AL::ALValue::array(3, -0.173333, 0.0631496), AL::ALValue::array(3, 0.146667, -0.0534343));
	times[0][2] = 1.56000;
	keys[0][2] = AL::ALValue::array(-0.348260, AL::ALValue::array(3, -0.146667, 0.0260722), AL::ALValue::array(3, 0.213333, -0.0379232));
	times[0][3] = 2.20000;
	keys[0][3] = AL::ALValue::array(-0.471239, AL::ALValue::array(3, -0.213333, 0.0259762), AL::ALValue::array(3, 0.266667, -0.0324702));
	times[0][4] = 3.00000;
	keys[0][4] = AL::ALValue::array(-0.523599, AL::ALValue::array(3, -0.266667, -0.00000), AL::ALValue::array(3, 0.253333, 0.00000));
	times[0][5] = 3.76000;
	keys[0][5] = AL::ALValue::array(-0.286901, AL::ALValue::array(3, -0.253333, -0.0638546), AL::ALValue::array(3, 0.426667, 0.107545));
	times[0][6] = 5.04000;
	keys[0][6] = AL::ALValue::array(-0.00940132, AL::ALValue::array(3, -0.426667, -0.00000), AL::ALValue::array(3, 0.720000, 0.00000));
	times[0][7] = 7.20000;
	keys[0][7] = AL::ALValue::array(-0.00940132, AL::ALValue::array(3, -0.720000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("HeadPitch");
	times[1].arraySetSize(8);
	keys[1].arraySetSize(8);

	times[1][0] = 0.600000;
	keys[1][0] = AL::ALValue::array(0.371186, AL::ALValue::array(3, -0.200000, -0.00000), AL::ALValue::array(3, 0.173333, 0.00000));
	times[1][1] = 1.12000;
	keys[1][1] = AL::ALValue::array(0.369652, AL::ALValue::array(3, -0.173333, 0.00153415), AL::ALValue::array(3, 0.146667, -0.00129812));
	times[1][2] = 1.56000;
	keys[1][2] = AL::ALValue::array(0.226893, AL::ALValue::array(3, -0.146667, -0.00000), AL::ALValue::array(3, 0.213333, 0.00000));
	times[1][3] = 2.20000;
	keys[1][3] = AL::ALValue::array(0.275762, AL::ALValue::array(3, -0.213333, -0.00000), AL::ALValue::array(3, 0.266667, 0.00000));
	times[1][4] = 3.00000;
	keys[1][4] = AL::ALValue::array(0.157080, AL::ALValue::array(3, -0.266667, -0.00000), AL::ALValue::array(3, 0.253333, 0.00000));
	times[1][5] = 3.76000;
	keys[1][5] = AL::ALValue::array(0.349710, AL::ALValue::array(3, -0.253333, -0.0173071), AL::ALValue::array(3, 0.426667, 0.0291488));
	times[1][6] = 5.04000;
	keys[1][6] = AL::ALValue::array(0.378859, AL::ALValue::array(3, -0.426667, -0.00000), AL::ALValue::array(3, 0.720000, 0.00000));
	times[1][7] = 7.20000;
	keys[1][7] = AL::ALValue::array(0.378859, AL::ALValue::array(3, -0.720000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("LShoulderPitch");
	times[2].arraySetSize(10);
	keys[2].arraySetSize(10);

	times[2][0] = 0.600000;
	keys[2][0] = AL::ALValue::array(0.558334, AL::ALValue::array(3, -0.200000, -0.00000), AL::ALValue::array(3, 0.173333, 0.00000));
	times[2][1] = 1.12000;
	keys[2][1] = AL::ALValue::array(0.796104, AL::ALValue::array(3, -0.173333, -0.00000), AL::ALValue::array(3, 0.146667, 0.00000));
	times[2][2] = 1.56000;
	keys[2][2] = AL::ALValue::array(0.789967, AL::ALValue::array(3, -0.146667, -0.00000), AL::ALValue::array(3, 0.213333, 0.00000));
	times[2][3] = 2.20000;
	keys[2][3] = AL::ALValue::array(1.01393, AL::ALValue::array(3, -0.213333, -0.00000), AL::ALValue::array(3, 0.120000, 0.00000));
	times[2][4] = 2.56000;
	keys[2][4] = AL::ALValue::array(0.776162, AL::ALValue::array(3, -0.120000, 0.0200819), AL::ALValue::array(3, 0.146667, -0.0245446));
	times[2][5] = 3.00000;
	keys[2][5] = AL::ALValue::array(0.751617, AL::ALValue::array(3, -0.146667, -0.00000), AL::ALValue::array(3, 0.253333, 0.00000));
	times[2][6] = 3.76000;
	keys[2][6] = AL::ALValue::array(1.28545, AL::ALValue::array(3, -0.253333, -0.128014), AL::ALValue::array(3, 0.200000, 0.101064));
	times[2][7] = 4.36000;
	keys[2][7] = AL::ALValue::array(1.43885, AL::ALValue::array(3, -0.200000, -0.0469785), AL::ALValue::array(3, 0.226667, 0.0532423));
	times[2][8] = 5.04000;
	keys[2][8] = AL::ALValue::array(1.58611, AL::ALValue::array(3, -0.226667, -0.00000), AL::ALValue::array(3, 0.720000, 0.00000));
	times[2][9] = 7.20000;
	keys[2][9] = AL::ALValue::array(1.24863, AL::ALValue::array(3, -0.720000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("LShoulderRoll");
	times[3].arraySetSize(10);
	keys[3].arraySetSize(10);

	times[3][0] = 0.600000;
	keys[3][0] = AL::ALValue::array(0.243864, AL::ALValue::array(3, -0.200000, -0.00000), AL::ALValue::array(3, 0.173333, 0.00000));
	times[3][1] = 1.12000;
	keys[3][1] = AL::ALValue::array(0.415673, AL::ALValue::array(3, -0.173333, -0.0290052), AL::ALValue::array(3, 0.146667, 0.0245428));
	times[3][2] = 1.56000;
	keys[3][2] = AL::ALValue::array(0.440216, AL::ALValue::array(3, -0.146667, -0.00000), AL::ALValue::array(3, 0.213333, 0.00000));
	times[3][3] = 2.20000;
	keys[3][3] = AL::ALValue::array(0.378857, AL::ALValue::array(3, -0.213333, -0.00000), AL::ALValue::array(3, 0.120000, 0.00000));
	times[3][4] = 2.56000;
	keys[3][4] = AL::ALValue::array(0.438682, AL::ALValue::array(3, -0.120000, -0.0197884), AL::ALValue::array(3, 0.146667, 0.0241858));
	times[3][5] = 3.00000;
	keys[3][5] = AL::ALValue::array(0.510779, AL::ALValue::array(3, -0.146667, -0.00000), AL::ALValue::array(3, 0.253333, 0.00000));
	times[3][6] = 3.76000;
	keys[3][6] = AL::ALValue::array(0.0766580, AL::ALValue::array(3, -0.253333, -0.00000), AL::ALValue::array(3, 0.200000, 0.00000));
	times[3][7] = 4.36000;
	keys[3][7] = AL::ALValue::array(0.154892, AL::ALValue::array(3, -0.200000, -0.0782340), AL::ALValue::array(3, 0.226667, 0.0886652));
	times[3][8] = 5.04000;
	keys[3][8] = AL::ALValue::array(0.688724, AL::ALValue::array(3, -0.226667, -0.00000), AL::ALValue::array(3, 0.720000, 0.00000));
	times[3][9] = 7.20000;
	keys[3][9] = AL::ALValue::array(0.592082, AL::ALValue::array(3, -0.720000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("LElbowYaw");
	times[4].arraySetSize(10);
	keys[4].arraySetSize(10);

	times[4][0] = 0.600000;
	keys[4][0] = AL::ALValue::array(-0.544613, AL::ALValue::array(3, -0.200000, -0.00000), AL::ALValue::array(3, 0.173333, 0.00000));
	times[4][1] = 1.12000;
	keys[4][1] = AL::ALValue::array(-0.711819, AL::ALValue::array(3, -0.173333, 0.0290052), AL::ALValue::array(3, 0.146667, -0.0245428));
	times[4][2] = 1.56000;
	keys[4][2] = AL::ALValue::array(-0.736361, AL::ALValue::array(3, -0.146667, 0.0143741), AL::ALValue::array(3, 0.213333, -0.0209078));
	times[4][3] = 2.20000;
	keys[4][3] = AL::ALValue::array(-0.817664, AL::ALValue::array(3, -0.213333, -0.00000), AL::ALValue::array(3, 0.120000, 0.00000));
	times[4][4] = 2.56000;
	keys[4][4] = AL::ALValue::array(-0.297638, AL::ALValue::array(3, -0.120000, -0.0982527), AL::ALValue::array(3, 0.146667, 0.120087));
	times[4][5] = 3.00000;
	keys[4][5] = AL::ALValue::array(-0.162646, AL::ALValue::array(3, -0.146667, -0.00000), AL::ALValue::array(3, 0.253333, 0.00000));
	times[4][6] = 3.76000;
	keys[4][6] = AL::ALValue::array(-0.869820, AL::ALValue::array(3, -0.253333, 0.158588), AL::ALValue::array(3, 0.200000, -0.125201));
	times[4][7] = 4.36000;
	keys[4][7] = AL::ALValue::array(-1.01402, AL::ALValue::array(3, -0.200000, -0.00000), AL::ALValue::array(3, 0.226667, 0.00000));
	times[4][8] = 5.04000;
	keys[4][8] = AL::ALValue::array(-0.920441, AL::ALValue::array(3, -0.226667, -0.0517887), AL::ALValue::array(3, 0.720000, 0.164505));
	times[4][9] = 7.20000;
	keys[4][9] = AL::ALValue::array(-0.365133, AL::ALValue::array(3, -0.720000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("LElbowRoll");
	times[5].arraySetSize(10);
	keys[5].arraySetSize(10);

	times[5][0] = 0.600000;
	keys[5][0] = AL::ALValue::array(-1.06302, AL::ALValue::array(3, -0.200000, -0.00000), AL::ALValue::array(3, 0.173333, 0.00000));
	times[5][1] = 1.12000;
	keys[5][1] = AL::ALValue::array(-0.934165, AL::ALValue::array(3, -0.173333, -0.0487473), AL::ALValue::array(3, 0.146667, 0.0412477));
	times[5][2] = 1.56000;
	keys[5][2] = AL::ALValue::array(-0.793036, AL::ALValue::array(3, -0.146667, -0.00000), AL::ALValue::array(3, 0.213333, 0.00000));
	times[5][3] = 2.20000;
	keys[5][3] = AL::ALValue::array(-0.941834, AL::ALValue::array(3, -0.213333, 0.0585783), AL::ALValue::array(3, 0.120000, -0.0329503));
	times[5][4] = 2.56000;
	keys[5][4] = AL::ALValue::array(-1.06762, AL::ALValue::array(3, -0.120000, -0.00000), AL::ALValue::array(3, 0.146667, 0.00000));
	times[5][5] = 3.00000;
	keys[5][5] = AL::ALValue::array(-0.624296, AL::ALValue::array(3, -0.146667, -0.00000), AL::ALValue::array(3, 0.253333, 0.00000));
	times[5][6] = 3.76000;
	keys[5][6] = AL::ALValue::array(-0.891212, AL::ALValue::array(3, -0.253333, -0.00000), AL::ALValue::array(3, 0.200000, 0.00000));
	times[5][7] = 4.36000;
	keys[5][7] = AL::ALValue::array(-0.851328, AL::ALValue::array(3, -0.200000, -0.00000), AL::ALValue::array(3, 0.226667, 0.00000));
	times[5][8] = 5.04000;
	keys[5][8] = AL::ALValue::array(-1.23636, AL::ALValue::array(3, -0.226667, -0.00000), AL::ALValue::array(3, 0.720000, 0.00000));
	times[5][9] = 7.20000;
	keys[5][9] = AL::ALValue::array(-1.07836, AL::ALValue::array(3, -0.720000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("LWristYaw");
	times[6].arraySetSize(3);
	keys[6].arraySetSize(3);

	times[6][0] = 0.600000;
	keys[6][0] = AL::ALValue::array(-0.742498, AL::ALValue::array(3, -0.200000, -0.00000), AL::ALValue::array(3, 0.173333, 0.00000));
	times[6][1] = 1.12000;
	keys[6][1] = AL::ALValue::array(-0.771643, AL::ALValue::array(3, -0.173333, -0.00000), AL::ALValue::array(3, 0.146667, 0.00000));
	times[6][2] = 1.56000;
	keys[6][2] = AL::ALValue::array(-0.736361, AL::ALValue::array(3, -0.146667, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("LHand");
	times[7].arraySetSize(3);
	keys[7].arraySetSize(3);

	times[7][0] = 0.600000;
	keys[7][0] = AL::ALValue::array(0.000316824, AL::ALValue::array(3, -0.200000, -0.00000), AL::ALValue::array(3, 0.173333, 0.00000));
	times[7][1] = 1.12000;
	keys[7][1] = AL::ALValue::array(0.00116190, AL::ALValue::array(3, -0.173333, -0.000112506), AL::ALValue::array(3, 0.146667, 9.51972e-05));
	times[7][2] = 1.56000;
	keys[7][2] = AL::ALValue::array(0.00125709, AL::ALValue::array(3, -0.146667, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("RShoulderPitch");
	times[8].arraySetSize(11);
	keys[8].arraySetSize(11);

	times[8][0] = 0.600000;
	keys[8][0] = AL::ALValue::array(0.566087, AL::ALValue::array(3, -0.200000, -0.00000), AL::ALValue::array(3, 0.0800000, 0.00000));
	times[8][1] = 0.840000;
	keys[8][1] = AL::ALValue::array(0.733038, AL::ALValue::array(3, -0.0800000, -0.117056), AL::ALValue::array(3, 0.0933333, 0.136565));
	times[8][2] = 1.12000;
	keys[8][2] = AL::ALValue::array(1.32695, AL::ALValue::array(3, -0.0933333, -0.159911), AL::ALValue::array(3, 0.146667, 0.251289));
	times[8][3] = 1.56000;
	keys[8][3] = AL::ALValue::array(1.96664, AL::ALValue::array(3, -0.146667, -0.0817862), AL::ALValue::array(3, 0.213333, 0.118962));
	times[8][4] = 2.20000;
	keys[8][4] = AL::ALValue::array(2.08560, AL::ALValue::array(3, -0.213333, -0.00000), AL::ALValue::array(3, 0.266667, 0.00000));
	times[8][5] = 3.00000;
	keys[8][5] = AL::ALValue::array(2.06787, AL::ALValue::array(3, -0.266667, -0.00000), AL::ALValue::array(3, 0.133333, 0.00000));
	times[8][6] = 3.40000;
	keys[8][6] = AL::ALValue::array(2.08560, AL::ALValue::array(3, -0.133333, -0.00000), AL::ALValue::array(3, 0.120000, 0.00000));
	times[8][7] = 3.76000;
	keys[8][7] = AL::ALValue::array(2.02799, AL::ALValue::array(3, -0.120000, 0.0576134), AL::ALValue::array(3, 0.200000, -0.0960223));
	times[8][8] = 4.36000;
	keys[8][8] = AL::ALValue::array(1.61381, AL::ALValue::array(3, -0.200000, 0.0944362), AL::ALValue::array(3, 0.226667, -0.107028));
	times[8][9] = 5.04000;
	keys[8][9] = AL::ALValue::array(1.42359, AL::ALValue::array(3, -0.226667, 0.0317099), AL::ALValue::array(3, 0.720000, -0.100726));
	times[8][10] = 7.20000;
	keys[8][10] = AL::ALValue::array(1.21650, AL::ALValue::array(3, -0.720000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("RShoulderRoll");
	times[9].arraySetSize(10);
	keys[9].arraySetSize(10);

	times[9][0] = 0.600000;
	keys[9][0] = AL::ALValue::array(-0.351328, AL::ALValue::array(3, -0.200000, -0.00000), AL::ALValue::array(3, 0.173333, 0.00000));
	times[9][1] = 1.12000;
	keys[9][1] = AL::ALValue::array(-0.675003, AL::ALValue::array(3, -0.173333, -0.00000), AL::ALValue::array(3, 0.146667, 0.00000));
	times[9][2] = 1.56000;
	keys[9][2] = AL::ALValue::array(-0.638187, AL::ALValue::array(3, -0.146667, -0.0368160), AL::ALValue::array(3, 0.213333, 0.0535506));
	times[9][3] = 2.20000;
	keys[9][3] = AL::ALValue::array(-0.00869999, AL::ALValue::array(3, -0.213333, -0.00000), AL::ALValue::array(3, 0.266667, 0.00000));
	times[9][4] = 3.00000;
	keys[9][4] = AL::ALValue::array(-0.509331, AL::ALValue::array(3, -0.266667, 0.0889699), AL::ALValue::array(3, 0.133333, -0.0444849));
	times[9][5] = 3.40000;
	keys[9][5] = AL::ALValue::array(-0.553816, AL::ALValue::array(3, -0.133333, 0.00968841), AL::ALValue::array(3, 0.120000, -0.00871957));
	times[9][6] = 3.76000;
	keys[9][6] = AL::ALValue::array(-0.564555, AL::ALValue::array(3, -0.120000, 0.0107390), AL::ALValue::array(3, 0.200000, -0.0178983));
	times[9][7] = 4.36000;
	keys[9][7] = AL::ALValue::array(-0.665798, AL::ALValue::array(3, -0.200000, -0.00000), AL::ALValue::array(3, 0.226667, 0.00000));
	times[9][8] = 5.04000;
	keys[9][8] = AL::ALValue::array(-0.576826, AL::ALValue::array(3, -0.226667, -0.0321996), AL::ALValue::array(3, 0.720000, 0.102281));
	times[9][9] = 7.20000;
	keys[9][9] = AL::ALValue::array(-0.262356, AL::ALValue::array(3, -0.720000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("RElbowYaw");
	times[10].arraySetSize(10);
	keys[10].arraySetSize(10);

	times[10][0] = 0.600000;
	keys[10][0] = AL::ALValue::array(0.480100, AL::ALValue::array(3, -0.200000, -0.00000), AL::ALValue::array(3, 0.173333, 0.00000));
	times[10][1] = 1.12000;
	keys[10][1] = AL::ALValue::array(1.82235, AL::ALValue::array(3, -0.173333, -0.273756), AL::ALValue::array(3, 0.146667, 0.231640));
	times[10][2] = 1.56000;
	keys[10][2] = AL::ALValue::array(2.05399, AL::ALValue::array(3, -0.146667, -0.00000), AL::ALValue::array(3, 0.213333, 0.00000));
	times[10][3] = 2.20000;
	keys[10][3] = AL::ALValue::array(-0.0872665, AL::ALValue::array(3, -0.213333, -0.00000), AL::ALValue::array(3, 0.266667, 0.00000));
	times[10][4] = 3.00000;
	keys[10][4] = AL::ALValue::array(-0.0813440, AL::ALValue::array(3, -0.266667, -0.00233878), AL::ALValue::array(3, 0.133333, 0.00116939));
	times[10][5] = 3.40000;
	keys[10][5] = AL::ALValue::array(-0.0767419, AL::ALValue::array(3, -0.133333, -0.00269124), AL::ALValue::array(3, 0.120000, 0.00242211));
	times[10][6] = 3.76000;
	keys[10][6] = AL::ALValue::array(-0.0660040, AL::ALValue::array(3, -0.120000, -0.0107380), AL::ALValue::array(3, 0.200000, 0.0178966));
	times[10][7] = 4.36000;
	keys[10][7] = AL::ALValue::array(0.315962, AL::ALValue::array(3, -0.200000, -0.272764), AL::ALValue::array(3, 0.226667, 0.309133));
	times[10][8] = 5.04000;
	keys[10][8] = AL::ALValue::array(1.67969, AL::ALValue::array(3, -0.226667, -0.00000), AL::ALValue::array(3, 0.720000, 0.00000));
	times[10][9] = 7.20000;
	keys[10][9] = AL::ALValue::array(0.966378, AL::ALValue::array(3, -0.720000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("RElbowRoll");
	times[11].arraySetSize(10);
	keys[11].arraySetSize(10);

	times[11][0] = 0.600000;
	keys[11][0] = AL::ALValue::array(1.21650, AL::ALValue::array(3, -0.200000, -0.00000), AL::ALValue::array(3, 0.173333, 0.00000));
	times[11][1] = 1.12000;
	keys[11][1] = AL::ALValue::array(1.02936, AL::ALValue::array(3, -0.173333, 0.0966633), AL::ALValue::array(3, 0.146667, -0.0817920));
	times[11][2] = 1.56000;
	keys[11][2] = AL::ALValue::array(0.681137, AL::ALValue::array(3, -0.146667, 0.138608), AL::ALValue::array(3, 0.213333, -0.201611));
	times[11][3] = 2.20000;
	keys[11][3] = AL::ALValue::array(0.00869999, AL::ALValue::array(3, -0.213333, -0.00000), AL::ALValue::array(3, 0.266667, 0.00000));
	times[11][4] = 3.00000;
	keys[11][4] = AL::ALValue::array(0.0798099, AL::ALValue::array(3, -0.266667, -0.00000), AL::ALValue::array(3, 0.133333, 0.00000));
	times[11][5] = 3.40000;
	keys[11][5] = AL::ALValue::array(0.0598679, AL::ALValue::array(3, -0.133333, 0.0110340), AL::ALValue::array(3, 0.120000, -0.00993062));
	times[11][6] = 3.76000;
	keys[11][6] = AL::ALValue::array(0.0169160, AL::ALValue::array(3, -0.120000, -0.00000), AL::ALValue::array(3, 0.200000, 0.00000));
	times[11][7] = 4.36000;
	keys[11][7] = AL::ALValue::array(0.332920, AL::ALValue::array(3, -0.200000, -0.0750221), AL::ALValue::array(3, 0.226667, 0.0850251));
	times[11][8] = 5.04000;
	keys[11][8] = AL::ALValue::array(0.497058, AL::ALValue::array(3, -0.226667, -0.0510542), AL::ALValue::array(3, 0.720000, 0.162172));
	times[11][9] = 7.20000;
	keys[11][9] = AL::ALValue::array(0.972599, AL::ALValue::array(3, -0.720000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("RWristYaw");
	times[12].arraySetSize(3);
	keys[12].arraySetSize(3);

	times[12][0] = 0.600000;
	keys[12][0] = AL::ALValue::array(1.07529, AL::ALValue::array(3, -0.200000, -0.00000), AL::ALValue::array(3, 0.173333, 0.00000));
	times[12][1] = 1.12000;
	keys[12][1] = AL::ALValue::array(1.09523, AL::ALValue::array(3, -0.173333, -0.00000), AL::ALValue::array(3, 0.146667, 0.00000));
	times[12][2] = 1.56000;
	keys[12][2] = AL::ALValue::array(1.08756, AL::ALValue::array(3, -0.146667, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("RHand");
	times[13].arraySetSize(3);
	keys[13].arraySetSize(3);

	times[13][0] = 0.600000;
	keys[13][0] = AL::ALValue::array(0.000316824, AL::ALValue::array(3, -0.200000, -0.00000), AL::ALValue::array(3, 0.173333, 0.00000));
	times[13][1] = 1.12000;
	keys[13][1] = AL::ALValue::array(0.00220908, AL::ALValue::array(3, -0.173333, -0.000277531), AL::ALValue::array(3, 0.146667, 0.000234834));
	times[13][2] = 1.56000;
	keys[13][2] = AL::ALValue::array(0.00244391, AL::ALValue::array(3, -0.146667, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("LHipYawPitch");
	times[14].arraySetSize(9);
	keys[14].arraySetSize(9);

	times[14][0] = 0.600000;
	keys[14][0] = AL::ALValue::array(-0.676451, AL::ALValue::array(3, -0.200000, -0.00000), AL::ALValue::array(3, 0.173333, 0.00000));
	times[14][1] = 1.12000;
	keys[14][1] = AL::ALValue::array(-0.651727, AL::ALValue::array(3, -0.173333, -0.00000), AL::ALValue::array(3, 0.146667, 0.00000));
	times[14][2] = 1.56000;
	keys[14][2] = AL::ALValue::array(-0.751436, AL::ALValue::array(3, -0.146667, -0.00000), AL::ALValue::array(3, 0.480000, 0.00000));
	times[14][3] = 3.00000;
	keys[14][3] = AL::ALValue::array(-0.499093, AL::ALValue::array(3, -0.480000, -0.00000), AL::ALValue::array(3, 0.0933333, 0.00000));
	times[14][4] = 3.28000;
	keys[14][4] = AL::ALValue::array(-0.645590, AL::ALValue::array(3, -0.0933333, 0.0441958), AL::ALValue::array(3, 0.160000, -0.0757642));
	times[14][5] = 3.76000;
	keys[14][5] = AL::ALValue::array(-0.858972, AL::ALValue::array(3, -0.160000, -0.00000), AL::ALValue::array(3, 0.426667, 0.00000));
	times[14][6] = 5.04000;
	keys[14][6] = AL::ALValue::array(-0.434081, AL::ALValue::array(3, -0.426667, -0.120629), AL::ALValue::array(3, 0.253333, 0.0716235));
	times[14][7] = 5.80000;
	keys[14][7] = AL::ALValue::array(-0.282215, AL::ALValue::array(3, -0.253333, -0.0305854), AL::ALValue::array(3, 0.466667, 0.0563415));
	times[14][8] = 7.20000;
	keys[14][8] = AL::ALValue::array(-0.173300, AL::ALValue::array(3, -0.466667, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("LHipRoll");
	times[15].arraySetSize(10);
	keys[15].arraySetSize(10);

	times[15][0] = 0.600000;
	keys[15][0] = AL::ALValue::array(0.139636, AL::ALValue::array(3, -0.200000, -0.00000), AL::ALValue::array(3, 0.173333, 0.00000));
	times[15][1] = 1.12000;
	keys[15][1] = AL::ALValue::array(0.145012, AL::ALValue::array(3, -0.173333, -0.00152459), AL::ALValue::array(3, 0.146667, 0.00129004));
	times[15][2] = 1.56000;
	keys[15][2] = AL::ALValue::array(0.148080, AL::ALValue::array(3, -0.146667, -0.00306794), AL::ALValue::array(3, 0.213333, 0.00446247));
	times[15][3] = 2.20000;
	keys[15][3] = AL::ALValue::array(0.541052, AL::ALValue::array(3, -0.213333, -0.00000), AL::ALValue::array(3, 0.266667, 0.00000));
	times[15][4] = 3.00000;
	keys[15][4] = AL::ALValue::array(0.154976, AL::ALValue::array(3, -0.266667, 0.139831), AL::ALValue::array(3, 0.0933333, -0.0489407));
	times[15][5] = 3.28000;
	keys[15][5] = AL::ALValue::array(-0.0252621, AL::ALValue::array(3, -0.0933333, 0.0404660), AL::ALValue::array(3, 0.160000, -0.0693703));
	times[15][6] = 3.76000;
	keys[15][6] = AL::ALValue::array(-0.174533, AL::ALValue::array(3, -0.160000, -0.00000), AL::ALValue::array(3, 0.426667, 0.00000));
	times[15][7] = 5.04000;
	keys[15][7] = AL::ALValue::array(0.182588, AL::ALValue::array(3, -0.426667, -0.128592), AL::ALValue::array(3, 0.253333, 0.0763517));
	times[15][8] = 5.80000;
	keys[15][8] = AL::ALValue::array(0.440299, AL::ALValue::array(3, -0.253333, -0.00000), AL::ALValue::array(3, 0.466667, 0.00000));
	times[15][9] = 7.20000;
	keys[15][9] = AL::ALValue::array(0.130432, AL::ALValue::array(3, -0.466667, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("LHipPitch");
	times[16].arraySetSize(11);
	keys[16].arraySetSize(11);

	times[16][0] = 0.600000;
	keys[16][0] = AL::ALValue::array(-1.57077, AL::ALValue::array(3, -0.200000, -0.00000), AL::ALValue::array(3, 0.173333, 0.00000));
	times[16][1] = 1.12000;
	keys[16][1] = AL::ALValue::array(-1.57080, AL::ALValue::array(3, -0.173333, -0.00000), AL::ALValue::array(3, 0.146667, 0.00000));
	times[16][2] = 1.56000;
	keys[16][2] = AL::ALValue::array(-1.57080, AL::ALValue::array(3, -0.146667, -0.00000), AL::ALValue::array(3, 0.213333, 0.00000));
	times[16][3] = 2.20000;
	keys[16][3] = AL::ALValue::array(-1.57080, AL::ALValue::array(3, -0.213333, -0.00000), AL::ALValue::array(3, 0.266667, 0.00000));
	times[16][4] = 3.00000;
	keys[16][4] = AL::ALValue::array(-0.857056, AL::ALValue::array(3, -0.266667, -0.240724), AL::ALValue::array(3, 0.0933333, 0.0842534));
	times[16][5] = 3.28000;
	keys[16][5] = AL::ALValue::array(-0.595864, AL::ALValue::array(3, -0.0933333, -0.0988224), AL::ALValue::array(3, 0.160000, 0.169410));
	times[16][6] = 3.76000;
	keys[16][6] = AL::ALValue::array(-0.0523599, AL::ALValue::array(3, -0.160000, -0.00000), AL::ALValue::array(3, 0.200000, 0.00000));
	times[16][7] = 4.36000;
	keys[16][7] = AL::ALValue::array(-0.401426, AL::ALValue::array(3, -0.200000, 0.0996717), AL::ALValue::array(3, 0.226667, -0.112961));
	times[16][8] = 5.04000;
	keys[16][8] = AL::ALValue::array(-0.690259, AL::ALValue::array(3, -0.226667, 0.0556057), AL::ALValue::array(3, 0.253333, -0.0621476));
	times[16][9] = 5.80000;
	keys[16][9] = AL::ALValue::array(-0.754686, AL::ALValue::array(3, -0.253333, -0.00000), AL::ALValue::array(3, 0.466667, 0.00000));
	times[16][10] = 7.20000;
	keys[16][10] = AL::ALValue::array(-0.730143, AL::ALValue::array(3, -0.466667, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("LKneePitch");
	times[17].arraySetSize(10);
	keys[17].arraySetSize(10);

	times[17][0] = 0.600000;
	keys[17][0] = AL::ALValue::array(0.724006, AL::ALValue::array(3, -0.200000, -0.00000), AL::ALValue::array(3, 0.173333, 0.00000));
	times[17][1] = 1.12000;
	keys[17][1] = AL::ALValue::array(0.959235, AL::ALValue::array(3, -0.173333, -0.0831865), AL::ALValue::array(3, 0.146667, 0.0703885));
	times[17][2] = 1.56000;
	keys[17][2] = AL::ALValue::array(1.18473, AL::ALValue::array(3, -0.146667, -0.0972728), AL::ALValue::array(3, 0.213333, 0.141488));
	times[17][3] = 2.20000;
	keys[17][3] = AL::ALValue::array(1.67552, AL::ALValue::array(3, -0.213333, -0.150595), AL::ALValue::array(3, 0.266667, 0.188243));
	times[17][4] = 3.00000;
	keys[17][4] = AL::ALValue::array(2.20124, AL::ALValue::array(3, -0.266667, -0.00000), AL::ALValue::array(3, 0.0933333, 0.00000));
	times[17][5] = 3.28000;
	keys[17][5] = AL::ALValue::array(2.18337, AL::ALValue::array(3, -0.0933333, -0.00000), AL::ALValue::array(3, 0.160000, 0.00000));
	times[17][6] = 3.76000;
	keys[17][6] = AL::ALValue::array(2.26893, AL::ALValue::array(3, -0.160000, -0.00000), AL::ALValue::array(3, 0.426667, 0.00000));
	times[17][7] = 5.04000;
	keys[17][7] = AL::ALValue::array(2.00182, AL::ALValue::array(3, -0.426667, -0.00000), AL::ALValue::array(3, 0.253333, 0.00000));
	times[17][8] = 5.80000;
	keys[17][8] = AL::ALValue::array(2.11253, AL::ALValue::array(3, -0.253333, -0.00000), AL::ALValue::array(3, 0.466667, 0.00000));
	times[17][9] = 7.20000;
	keys[17][9] = AL::ALValue::array(1.61833, AL::ALValue::array(3, -0.466667, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("LAnklePitch");
	times[18].arraySetSize(10);
	keys[18].arraySetSize(10);

	times[18][0] = 0.600000;
	keys[18][0] = AL::ALValue::array(0.776162, AL::ALValue::array(3, -0.200000, -0.00000), AL::ALValue::array(3, 0.173333, 0.00000));
	times[18][1] = 1.12000;
	keys[18][1] = AL::ALValue::array(0.755417, AL::ALValue::array(3, -0.173333, -0.00000), AL::ALValue::array(3, 0.146667, 0.00000));
	times[18][2] = 1.56000;
	keys[18][2] = AL::ALValue::array(0.755417, AL::ALValue::array(3, -0.146667, -0.00000), AL::ALValue::array(3, 0.213333, 0.00000));
	times[18][3] = 2.20000;
	keys[18][3] = AL::ALValue::array(0.663225, AL::ALValue::array(3, -0.213333, 0.0921918), AL::ALValue::array(3, 0.266667, -0.115240));
	times[18][4] = 3.00000;
	keys[18][4] = AL::ALValue::array(-0.453786, AL::ALValue::array(3, -0.266667, 0.331828), AL::ALValue::array(3, 0.0933333, -0.116140));
	times[18][5] = 3.28000;
	keys[18][5] = AL::ALValue::array(-0.680678, AL::ALValue::array(3, -0.0933333, 0.0793053), AL::ALValue::array(3, 0.160000, -0.135952));
	times[18][6] = 3.76000;
	keys[18][6] = AL::ALValue::array(-1.09956, AL::ALValue::array(3, -0.160000, 0.0337341), AL::ALValue::array(3, 0.426667, -0.0899577));
	times[18][7] = 5.04000;
	keys[18][7] = AL::ALValue::array(-1.18952, AL::ALValue::array(3, -0.426667, -0.00000), AL::ALValue::array(3, 0.253333, 0.00000));
	times[18][8] = 5.80000;
	keys[18][8] = AL::ALValue::array(-1.18952, AL::ALValue::array(3, -0.253333, -0.00000), AL::ALValue::array(3, 0.466667, 0.00000));
	times[18][9] = 7.20000;
	keys[18][9] = AL::ALValue::array(-0.736361, AL::ALValue::array(3, -0.466667, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("LAnkleRoll");
	times[19].arraySetSize(10);
	keys[19].arraySetSize(10);

	times[19][0] = 0.600000;
	keys[19][0] = AL::ALValue::array(-0.0505800, AL::ALValue::array(3, -0.200000, -0.00000), AL::ALValue::array(3, 0.173333, 0.00000));
	times[19][1] = 1.12000;
	keys[19][1] = AL::ALValue::array(-0.00550388, AL::ALValue::array(3, -0.173333, -0.0139552), AL::ALValue::array(3, 0.146667, 0.0118082));
	times[19][2] = 1.56000;
	keys[19][2] = AL::ALValue::array(0.0267102, AL::ALValue::array(3, -0.146667, -0.00000), AL::ALValue::array(3, 0.213333, 0.00000));
	times[19][3] = 2.20000;
	keys[19][3] = AL::ALValue::array(-0.174533, AL::ALValue::array(3, -0.213333, 0.0625838), AL::ALValue::array(3, 0.266667, -0.0782298));
	times[19][4] = 3.00000;
	keys[19][4] = AL::ALValue::array(-0.395731, AL::ALValue::array(3, -0.266667, -0.00000), AL::ALValue::array(3, 0.0933333, 0.00000));
	times[19][5] = 3.28000;
	keys[19][5] = AL::ALValue::array(-0.0868059, AL::ALValue::array(3, -0.0933333, -0.00000), AL::ALValue::array(3, 0.160000, 0.00000));
	times[19][6] = 3.76000;
	keys[19][6] = AL::ALValue::array(-0.103788, AL::ALValue::array(3, -0.160000, -0.00000), AL::ALValue::array(3, 0.426667, 0.00000));
	times[19][7] = 5.04000;
	keys[19][7] = AL::ALValue::array(0.0107800, AL::ALValue::array(3, -0.426667, -0.00000), AL::ALValue::array(3, 0.253333, 0.00000));
	times[19][8] = 5.80000;
	keys[19][8] = AL::ALValue::array(-0.0168320, AL::ALValue::array(3, -0.253333, 0.0116944), AL::ALValue::array(3, 0.466667, -0.0215423));
	times[19][9] = 7.20000;
	keys[19][9] = AL::ALValue::array(-0.0889301, AL::ALValue::array(3, -0.466667, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("RHipRoll");
	times[20].arraySetSize(10);
	keys[20].arraySetSize(10);

	times[20][0] = 0.600000;
	keys[20][0] = AL::ALValue::array(-0.144154, AL::ALValue::array(3, -0.200000, -0.00000), AL::ALValue::array(3, 0.173333, 0.00000));
	times[20][1] = 1.12000;
	keys[20][1] = AL::ALValue::array(-0.133356, AL::ALValue::array(3, -0.173333, -0.00000), AL::ALValue::array(3, 0.146667, 0.00000));
	times[20][2] = 1.56000;
	keys[20][2] = AL::ALValue::array(-0.210056, AL::ALValue::array(3, -0.146667, 0.0553661), AL::ALValue::array(3, 0.213333, -0.0805325));
	times[20][3] = 2.20000;
	keys[20][3] = AL::ALValue::array(-0.541052, AL::ALValue::array(3, -0.213333, 0.0138956), AL::ALValue::array(3, 0.266667, -0.0173695));
	times[20][4] = 3.00000;
	keys[20][4] = AL::ALValue::array(-0.558422, AL::ALValue::array(3, -0.266667, 0.0173695), AL::ALValue::array(3, 0.0933333, -0.00607933));
	times[20][5] = 3.28000;
	keys[20][5] = AL::ALValue::array(-0.734684, AL::ALValue::array(3, -0.0933333, -0.00000), AL::ALValue::array(3, 0.160000, 0.00000));
	times[20][6] = 3.76000;
	keys[20][6] = AL::ALValue::array(-0.610865, AL::ALValue::array(3, -0.160000, -0.0436439), AL::ALValue::array(3, 0.426667, 0.116384));
	times[20][7] = 5.04000;
	keys[20][7] = AL::ALValue::array(-0.254602, AL::ALValue::array(3, -0.426667, -0.110767), AL::ALValue::array(3, 0.253333, 0.0657680));
	times[20][8] = 5.80000;
	keys[20][8] = AL::ALValue::array(-0.0812601, AL::ALValue::array(3, -0.253333, -0.00333100), AL::ALValue::array(3, 0.466667, 0.00613606));
	times[20][9] = 7.20000;
	keys[20][9] = AL::ALValue::array(-0.0751240, AL::ALValue::array(3, -0.466667, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("RHipPitch");
	times[21].arraySetSize(10);
	keys[21].arraySetSize(10);

	times[21][0] = 0.600000;
	keys[21][0] = AL::ALValue::array(-1.55245, AL::ALValue::array(3, -0.200000, -0.00000), AL::ALValue::array(3, 0.173333, 0.00000));
	times[21][1] = 1.12000;
	keys[21][1] = AL::ALValue::array(-1.57080, AL::ALValue::array(3, -0.173333, -0.00000), AL::ALValue::array(3, 0.146667, 0.00000));
	times[21][2] = 1.56000;
	keys[21][2] = AL::ALValue::array(-1.57080, AL::ALValue::array(3, -0.146667, -0.00000), AL::ALValue::array(3, 0.213333, 0.00000));
	times[21][3] = 2.20000;
	keys[21][3] = AL::ALValue::array(-1.57080, AL::ALValue::array(3, -0.213333, -0.00000), AL::ALValue::array(3, 0.266667, 0.00000));
	times[21][4] = 3.00000;
	keys[21][4] = AL::ALValue::array(-1.52484, AL::ALValue::array(3, -0.266667, -0.00000), AL::ALValue::array(3, 0.0933333, 0.00000));
	times[21][5] = 3.28000;
	keys[21][5] = AL::ALValue::array(-1.57080, AL::ALValue::array(3, -0.0933333, -0.00000), AL::ALValue::array(3, 0.160000, 0.00000));
	times[21][6] = 3.76000;
	keys[21][6] = AL::ALValue::array(-1.55965, AL::ALValue::array(3, -0.160000, -0.0111492), AL::ALValue::array(3, 0.426667, 0.0297312));
	times[21][7] = 5.04000;
	keys[21][7] = AL::ALValue::array(-0.849878, AL::ALValue::array(3, -0.426667, -0.184382), AL::ALValue::array(3, 0.253333, 0.109477));
	times[21][8] = 5.80000;
	keys[21][8] = AL::ALValue::array(-0.678069, AL::ALValue::array(3, -0.253333, -0.0158217), AL::ALValue::array(3, 0.466667, 0.0291452));
	times[21][9] = 7.20000;
	keys[21][9] = AL::ALValue::array(-0.648924, AL::ALValue::array(3, -0.466667, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("RKneePitch");
	times[22].arraySetSize(10);
	keys[22].arraySetSize(10);

	times[22][0] = 0.600000;
	keys[22][0] = AL::ALValue::array(0.843743, AL::ALValue::array(3, -0.200000, -0.00000), AL::ALValue::array(3, 0.173333, 0.00000));
	times[22][1] = 1.12000;
	keys[22][1] = AL::ALValue::array(0.954262, AL::ALValue::array(3, -0.173333, -0.0670402), AL::ALValue::array(3, 0.146667, 0.0567263));
	times[22][2] = 1.56000;
	keys[22][2] = AL::ALValue::array(1.21504, AL::ALValue::array(3, -0.146667, -0.0979481), AL::ALValue::array(3, 0.213333, 0.142470));
	times[22][3] = 2.20000;
	keys[22][3] = AL::ALValue::array(1.67552, AL::ALValue::array(3, -0.213333, -0.00000), AL::ALValue::array(3, 0.266667, 0.00000));
	times[22][4] = 3.00000;
	keys[22][4] = AL::ALValue::array(1.22173, AL::ALValue::array(3, -0.266667, -0.00000), AL::ALValue::array(3, 0.0933333, 0.00000));
	times[22][5] = 3.28000;
	keys[22][5] = AL::ALValue::array(1.27333, AL::ALValue::array(3, -0.0933333, -0.00000), AL::ALValue::array(3, 0.160000, 0.00000));
	times[22][6] = 3.76000;
	keys[22][6] = AL::ALValue::array(1.09956, AL::ALValue::array(3, -0.160000, 0.0616455), AL::ALValue::array(3, 0.426667, -0.164388));
	times[22][7] = 5.04000;
	keys[22][7] = AL::ALValue::array(0.595234, AL::ALValue::array(3, -0.426667, -0.00000), AL::ALValue::array(3, 0.253333, 0.00000));
	times[22][8] = 5.80000;
	keys[22][8] = AL::ALValue::array(1.44047, AL::ALValue::array(3, -0.253333, -0.0757801), AL::ALValue::array(3, 0.466667, 0.139595));
	times[22][9] = 7.20000;
	keys[22][9] = AL::ALValue::array(1.58006, AL::ALValue::array(3, -0.466667, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("RAnklePitch");
	times[23].arraySetSize(12);
	keys[23].arraySetSize(12);

	times[23][0] = 0.600000;
	keys[23][0] = AL::ALValue::array(0.785451, AL::ALValue::array(3, -0.200000, -0.00000), AL::ALValue::array(3, 0.173333, 0.00000));
	times[23][1] = 1.12000;
	keys[23][1] = AL::ALValue::array(0.760271, AL::ALValue::array(3, -0.173333, -0.00000), AL::ALValue::array(3, 0.146667, 0.00000));
	times[23][2] = 1.56000;
	keys[23][2] = AL::ALValue::array(0.760271, AL::ALValue::array(3, -0.146667, -0.00000), AL::ALValue::array(3, 0.213333, 0.00000));
	times[23][3] = 2.20000;
	keys[23][3] = AL::ALValue::array(0.663225, AL::ALValue::array(3, -0.213333, -0.00000), AL::ALValue::array(3, 0.266667, 0.00000));
	times[23][4] = 3.00000;
	keys[23][4] = AL::ALValue::array(0.785398, AL::ALValue::array(3, -0.266667, -0.00000), AL::ALValue::array(3, 0.0933333, 0.00000));
	times[23][5] = 3.28000;
	keys[23][5] = AL::ALValue::array(0.669765, AL::ALValue::array(3, -0.0933333, -0.00000), AL::ALValue::array(3, 0.160000, 0.00000));
	times[23][6] = 3.76000;
	keys[23][6] = AL::ALValue::array(0.785398, AL::ALValue::array(3, -0.160000, -0.00000), AL::ALValue::array(3, 0.200000, 0.00000));
	times[23][7] = 4.36000;
	keys[23][7] = AL::ALValue::array(0.785398, AL::ALValue::array(3, -0.200000, -0.00000), AL::ALValue::array(3, 0.120000, 0.00000));
	times[23][8] = 4.72000;
	keys[23][8] = AL::ALValue::array(0.541052, AL::ALValue::array(3, -0.120000, 0.0535906), AL::ALValue::array(3, 0.106667, -0.0476361));
	times[23][9] = 5.04000;
	keys[23][9] = AL::ALValue::array(0.481718, AL::ALValue::array(3, -0.106667, 0.0593342), AL::ALValue::array(3, 0.253333, -0.140919));
	times[23][10] = 5.80000;
	keys[23][10] = AL::ALValue::array(-0.369652, AL::ALValue::array(3, -0.253333, 0.148968), AL::ALValue::array(3, 0.466667, -0.274415));
	times[23][11] = 7.20000;
	keys[23][11] = AL::ALValue::array(-0.788433, AL::ALValue::array(3, -0.466667, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("RAnkleRoll");
	times[24].arraySetSize(13);
	keys[24].arraySetSize(13);

	times[24][0] = 0.600000;
	keys[24][0] = AL::ALValue::array(0.0491300, AL::ALValue::array(3, -0.200000, -0.00000), AL::ALValue::array(3, 0.173333, 0.00000));
	times[24][1] = 1.12000;
	keys[24][1] = AL::ALValue::array(0.000728916, AL::ALValue::array(3, -0.173333, 0.00181291), AL::ALValue::array(3, 0.146667, -0.00153400));
	times[24][2] = 1.56000;
	keys[24][2] = AL::ALValue::array(-0.000805084, AL::ALValue::array(3, -0.146667, -0.00000), AL::ALValue::array(3, 0.213333, 0.00000));
	times[24][3] = 2.20000;
	keys[24][3] = AL::ALValue::array(0.174533, AL::ALValue::array(3, -0.213333, -0.00000), AL::ALValue::array(3, 0.266667, 0.00000));
	times[24][4] = 3.00000;
	keys[24][4] = AL::ALValue::array(0.00928971, AL::ALValue::array(3, -0.266667, -0.00000), AL::ALValue::array(3, 0.0933333, 0.00000));
	times[24][5] = 3.28000;
	keys[24][5] = AL::ALValue::array(0.0743610, AL::ALValue::array(3, -0.0933333, -0.00000), AL::ALValue::array(3, 0.0800000, 0.00000));
	times[24][6] = 3.52000;
	keys[24][6] = AL::ALValue::array(-0.157080, AL::ALValue::array(3, -0.0800000, -0.00000), AL::ALValue::array(3, 0.0800000, 0.00000));
	times[24][7] = 3.76000;
	keys[24][7] = AL::ALValue::array(-0.104720, AL::ALValue::array(3, -0.0800000, -0.0382310), AL::ALValue::array(3, 0.200000, 0.0955776));
	times[24][8] = 4.36000;
	keys[24][8] = AL::ALValue::array(0.244346, AL::ALValue::array(3, -0.200000, -0.0945387), AL::ALValue::array(3, 0.120000, 0.0567232));
	times[24][9] = 4.72000;
	keys[24][9] = AL::ALValue::array(0.349066, AL::ALValue::array(3, -0.120000, -0.0345800), AL::ALValue::array(3, 0.106667, 0.0307378));
	times[24][10] = 5.04000;
	keys[24][10] = AL::ALValue::array(0.440299, AL::ALValue::array(3, -0.106667, -0.00000), AL::ALValue::array(3, 0.253333, 0.00000));
	times[24][11] = 5.80000;
	keys[24][11] = AL::ALValue::array(0.423426, AL::ALValue::array(3, -0.253333, 0.0168739), AL::ALValue::array(3, 0.466667, -0.0310834));
	times[24][12] = 7.20000;
	keys[24][12] = AL::ALValue::array(0.0905480, AL::ALValue::array(3, -0.466667, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));
 
}

int ALstandUpSit2011::ExecutePost() {
  return  motion->post.angleInterpolationBezier(names, times, keys); 
} 
