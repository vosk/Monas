#include "ALstandUpFront2011.h"

#include "hal/robot/generic_nao/kAlBroker.h"

namespace {
SpecialActionRegistrar<ALstandUpFront2011>::Type temp("ALstandUpFront2011");
}

ALstandUpFront2011::ALstandUpFront2011() {
  Initialize();
  Logger::Instance().WriteMsg("SP:ALstandUpFront2011","Initialized!",Logger::ExtraInfo);
  
  try {
    motion = KAlBroker::Instance().GetBroker()->getMotionProxy();
  } catch (AL::ALError& e) {
    Logger::Instance().WriteMsg("SP:ALstandUpFront2011","Error in getting motion proxy",Logger::FatalError);
  }
  
}




void ALstandUpFront2011::Initialize() {  

	names.reserve(25);
	times.arraySetSize(25);
	keys.arraySetSize(25);

	names.push_back("HeadYaw");
	times[0].arraySetSize(8);
	keys[0].arraySetSize(8);

	times[0][0] = 0.500000;
	keys[0][0] = AL::ALValue::array(0.174533, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.0666667, 0.00000));
	times[0][1] = 0.700000;
	keys[0][1] = AL::ALValue::array(-0.226893, AL::ALValue::array(3, -0.0666667, -0.00000), AL::ALValue::array(3, 0.166667, 0.00000));
	times[0][2] = 1.20000;
	keys[0][2] = AL::ALValue::array(0.286234, AL::ALValue::array(3, -0.166667, -0.0174533), AL::ALValue::array(3, 0.100000, 0.0104720));
	times[0][3] = 1.50000;
	keys[0][3] = AL::ALValue::array(0.296706, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[0][4] = 1.80000;
	keys[0][4] = AL::ALValue::array(-0.296706, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[0][5] = 2.10000;
	keys[0][5] = AL::ALValue::array(0.0523599, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[0][6] = 2.40000;
	keys[0][6] = AL::ALValue::array(-0.390954, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.300000, 0.00000));
	times[0][7] = 3.30000;
	keys[0][7] = AL::ALValue::array(0.0674540, AL::ALValue::array(3, -0.300000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("HeadPitch");
	times[1].arraySetSize(8);
	keys[1].arraySetSize(8);

	times[1][0] = 0.500000;
	keys[1][0] = AL::ALValue::array(-0.576826, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.0666667, 0.00000));
	times[1][1] = 0.700000;
	keys[1][1] = AL::ALValue::array(-0.547679, AL::ALValue::array(3, -0.0666667, -0.0291470), AL::ALValue::array(3, 0.166667, 0.0728676));
	times[1][2] = 1.20000;
	keys[1][2] = AL::ALValue::array(0.107338, AL::ALValue::array(3, -0.166667, -0.221365), AL::ALValue::array(3, 0.100000, 0.132819));
	times[1][3] = 1.50000;
	keys[1][3] = AL::ALValue::array(0.514872, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[1][4] = 1.80000;
	keys[1][4] = AL::ALValue::array(0.371186, AL::ALValue::array(3, -0.100000, 0.103265), AL::ALValue::array(3, 0.100000, -0.103265));
	times[1][5] = 2.10000;
	keys[1][5] = AL::ALValue::array(-0.104720, AL::ALValue::array(3, -0.100000, 0.150843), AL::ALValue::array(3, 0.100000, -0.150843));
	times[1][6] = 2.40000;
	keys[1][6] = AL::ALValue::array(-0.533873, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.300000, 0.00000));
	times[1][7] = 3.30000;
	keys[1][7] = AL::ALValue::array(0.127409, AL::ALValue::array(3, -0.300000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("LShoulderPitch");
	times[2].arraySetSize(8);
	keys[2].arraySetSize(8);

	times[2][0] = 0.500000;
	keys[2][0] = AL::ALValue::array(0.0843280, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.0666667, 0.00000));
	times[2][1] = 0.700000;
	keys[2][1] = AL::ALValue::array(-1.51146, AL::ALValue::array(3, -0.0666667, -0.00000), AL::ALValue::array(3, 0.166667, 0.00000));
	times[2][2] = 1.20000;
	keys[2][2] = AL::ALValue::array(-1.25025, AL::ALValue::array(3, -0.166667, -0.261202), AL::ALValue::array(3, 0.100000, 0.156721));
	times[2][3] = 1.50000;
	keys[2][3] = AL::ALValue::array(0.0720561, AL::ALValue::array(3, -0.100000, -0.334330), AL::ALValue::array(3, 0.100000, 0.334330));
	times[2][4] = 1.80000;
	keys[2][4] = AL::ALValue::array(0.755728, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[2][5] = 2.10000;
	keys[2][5] = AL::ALValue::array(0.750492, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[2][6] = 2.40000;
	keys[2][6] = AL::ALValue::array(1.29154, AL::ALValue::array(3, -0.100000, -0.0702744), AL::ALValue::array(3, 0.300000, 0.210823));
	times[2][7] = 3.30000;
	keys[2][7] = AL::ALValue::array(1.59378, AL::ALValue::array(3, -0.300000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("LShoulderRoll");
	times[3].arraySetSize(8);
	keys[3].arraySetSize(8);

	times[3][0] = 0.500000;
	keys[3][0] = AL::ALValue::array(1.30027, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.0666667, 0.00000));
	times[3][1] = 0.700000;
	keys[3][1] = AL::ALValue::array(0.0168320, AL::ALValue::array(3, -0.0666667, -0.00000), AL::ALValue::array(3, 0.166667, 0.00000));
	times[3][2] = 1.20000;
	keys[3][2] = AL::ALValue::array(0.0766580, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[3][3] = 1.50000;
	keys[3][3] = AL::ALValue::array(0.0705221, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[3][4] = 1.80000;
	keys[3][4] = AL::ALValue::array(0.938987, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[3][5] = 2.10000;
	keys[3][5] = AL::ALValue::array(0.677188, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[3][6] = 2.40000;
	keys[3][6] = AL::ALValue::array(0.846485, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.300000, 0.00000));
	times[3][7] = 3.30000;
	keys[3][7] = AL::ALValue::array(0.217786, AL::ALValue::array(3, -0.300000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("LElbowYaw");
	times[4].arraySetSize(8);
	keys[4].arraySetSize(8);

	times[4][0] = 0.500000;
	keys[4][0] = AL::ALValue::array(-2.07694, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.0666667, 0.00000));
	times[4][1] = 0.700000;
	keys[4][1] = AL::ALValue::array(-1.58006, AL::ALValue::array(3, -0.0666667, -0.00000), AL::ALValue::array(3, 0.166667, 0.00000));
	times[4][2] = 1.20000;
	keys[4][2] = AL::ALValue::array(-1.60461, AL::ALValue::array(3, -0.166667, 0.0245429), AL::ALValue::array(3, 0.100000, -0.0147257));
	times[4][3] = 1.50000;
	keys[4][3] = AL::ALValue::array(-1.78715, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[4][4] = 1.80000;
	keys[4][4] = AL::ALValue::array(-1.24791, AL::ALValue::array(3, -0.100000, -0.135758), AL::ALValue::array(3, 0.100000, 0.135758));
	times[4][5] = 2.10000;
	keys[4][5] = AL::ALValue::array(-0.972599, AL::ALValue::array(3, -0.100000, -0.0126676), AL::ALValue::array(3, 0.100000, 0.0126676));
	times[4][6] = 2.40000;
	keys[4][6] = AL::ALValue::array(-0.959931, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.300000, 0.00000));
	times[4][7] = 3.30000;
	keys[4][7] = AL::ALValue::array(-1.01862, AL::ALValue::array(3, -0.300000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("LElbowRoll");
	times[5].arraySetSize(8);
	keys[5].arraySetSize(8);

	times[5][0] = 0.500000;
	keys[5][0] = AL::ALValue::array(-0.0349066, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.0666667, 0.00000));
	times[5][1] = 0.700000;
	keys[5][1] = AL::ALValue::array(-0.352778, AL::ALValue::array(3, -0.0666667, 0.0574473), AL::ALValue::array(3, 0.166667, -0.143618));
	times[5][2] = 1.20000;
	keys[5][2] = AL::ALValue::array(-0.638103, AL::ALValue::array(3, -0.166667, 0.103865), AL::ALValue::array(3, 0.100000, -0.0623187));
	times[5][3] = 1.50000;
	keys[5][3] = AL::ALValue::array(-0.851328, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[5][4] = 1.80000;
	keys[5][4] = AL::ALValue::array(-0.733038, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[5][5] = 2.10000;
	keys[5][5] = AL::ALValue::array(-0.736529, AL::ALValue::array(3, -0.100000, 0.00349067), AL::ALValue::array(3, 0.100000, -0.00349067));
	times[5][6] = 2.40000;
	keys[5][6] = AL::ALValue::array(-1.15506, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.300000, 0.00000));
	times[5][7] = 3.30000;
	keys[5][7] = AL::ALValue::array(-0.681054, AL::ALValue::array(3, -0.300000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("LWristYaw");
	times[6].arraySetSize(8);
	keys[6].arraySetSize(8);

	times[6][0] = 0.500000;
	keys[6][0] = AL::ALValue::array(-1.55092, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.0666667, 0.00000));
	times[6][1] = 0.700000;
	keys[6][1] = AL::ALValue::array(-1.55092, AL::ALValue::array(3, -0.0666667, -0.00000), AL::ALValue::array(3, 0.166667, 0.00000));
	times[6][2] = 1.20000;
	keys[6][2] = AL::ALValue::array(-1.51717, AL::ALValue::array(3, -0.166667, -0.0214119), AL::ALValue::array(3, 0.100000, 0.0128472));
	times[6][3] = 1.50000;
	keys[6][3] = AL::ALValue::array(-1.44814, AL::ALValue::array(3, -0.100000, -0.0181523), AL::ALValue::array(3, 0.100000, 0.0181523));
	times[6][4] = 1.80000;
	keys[6][4] = AL::ALValue::array(-1.40825, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[6][5] = 2.10000;
	keys[6][5] = AL::ALValue::array(-1.40825, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[6][6] = 2.40000;
	keys[6][6] = AL::ALValue::array(-0.544543, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.300000, 0.00000));
	times[6][7] = 3.30000;
	keys[6][7] = AL::ALValue::array(-0.710284, AL::ALValue::array(3, -0.300000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("LHand");
	times[7].arraySetSize(8);
	keys[7].arraySetSize(8);

	times[7][0] = 0.500000;
	keys[7][0] = AL::ALValue::array(0.00102227, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.0666667, 0.00000));
	times[7][1] = 0.700000;
	keys[7][1] = AL::ALValue::array(0.000343179, AL::ALValue::array(3, -0.0666667, -0.00000), AL::ALValue::array(3, 0.166667, 0.00000));
	times[7][2] = 1.20000;
	keys[7][2] = AL::ALValue::array(0.000711284, AL::ALValue::array(3, -0.166667, -0.000126933), AL::ALValue::array(3, 0.100000, 7.61598e-05));
	times[7][3] = 1.50000;
	keys[7][3] = AL::ALValue::array(0.000952458, AL::ALValue::array(3, -0.100000, -4.86577e-05), AL::ALValue::array(3, 0.100000, 4.86577e-05));
	times[7][4] = 1.80000;
	keys[7][4] = AL::ALValue::array(0.00100323, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[7][5] = 2.10000;
	keys[7][5] = AL::ALValue::array(0.000958805, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[7][6] = 2.40000;
	keys[7][6] = AL::ALValue::array(0.00100323, AL::ALValue::array(3, -0.100000, -4.44256e-05), AL::ALValue::array(3, 0.300000, 0.000133277));
	times[7][7] = 3.30000;
	keys[7][7] = AL::ALValue::array(0.00455100, AL::ALValue::array(3, -0.300000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("RShoulderPitch");
	times[8].arraySetSize(8);
	keys[8].arraySetSize(8);

	times[8][0] = 0.500000;
	keys[8][0] = AL::ALValue::array(-0.0275701, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.0666667, 0.00000));
	times[8][1] = 0.700000;
	keys[8][1] = AL::ALValue::array(-1.51146, AL::ALValue::array(3, -0.0666667, -0.00000), AL::ALValue::array(3, 0.166667, 0.00000));
	times[8][2] = 1.20000;
	keys[8][2] = AL::ALValue::array(-1.22256, AL::ALValue::array(3, -0.166667, -0.265679), AL::ALValue::array(3, 0.100000, 0.159408));
	times[8][3] = 1.50000;
	keys[8][3] = AL::ALValue::array(-0.236194, AL::ALValue::array(3, -0.100000, -0.278677), AL::ALValue::array(3, 0.100000, 0.278677));
	times[8][4] = 1.80000;
	keys[8][4] = AL::ALValue::array(0.449504, AL::ALValue::array(3, -0.100000, -0.191750), AL::ALValue::array(3, 0.100000, 0.191750));
	times[8][5] = 2.10000;
	keys[8][5] = AL::ALValue::array(0.914306, AL::ALValue::array(3, -0.100000, -0.0460191), AL::ALValue::array(3, 0.100000, 0.0460191));
	times[8][6] = 2.40000;
	keys[8][6] = AL::ALValue::array(0.960325, AL::ALValue::array(3, -0.100000, -0.0460191), AL::ALValue::array(3, 0.300000, 0.138057));
	times[8][7] = 3.30000;
	keys[8][7] = AL::ALValue::array(1.47882, AL::ALValue::array(3, -0.300000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("RShoulderRoll");
	times[9].arraySetSize(8);
	keys[9].arraySetSize(8);

	times[9][0] = 0.500000;
	keys[9][0] = AL::ALValue::array(-1.30027, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.0666667, 0.00000));
	times[9][1] = 0.700000;
	keys[9][1] = AL::ALValue::array(-0.191986, AL::ALValue::array(3, -0.0666667, -0.0436433), AL::ALValue::array(3, 0.166667, 0.109108));
	times[9][2] = 1.20000;
	keys[9][2] = AL::ALValue::array(-0.0828780, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[9][3] = 1.50000;
	keys[9][3] = AL::ALValue::array(-0.0828780, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[9][4] = 1.80000;
	keys[9][4] = AL::ALValue::array(-0.182588, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[9][5] = 2.10000;
	keys[9][5] = AL::ALValue::array(-0.00869999, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[9][6] = 2.40000;
	keys[9][6] = AL::ALValue::array(-0.131966, AL::ALValue::array(3, -0.100000, 0.00562467), AL::ALValue::array(3, 0.300000, -0.0168740));
	times[9][7] = 3.30000;
	keys[9][7] = AL::ALValue::array(-0.148840, AL::ALValue::array(3, -0.300000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("RElbowYaw");
	times[10].arraySetSize(8);
	keys[10].arraySetSize(8);

	times[10][0] = 0.500000;
	keys[10][0] = AL::ALValue::array(2.07694, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.0666667, 0.00000));
	times[10][1] = 0.700000;
	keys[10][1] = AL::ALValue::array(1.56157, AL::ALValue::array(3, -0.0666667, -0.00000), AL::ALValue::array(3, 0.166667, 0.00000));
	times[10][2] = 1.20000;
	keys[10][2] = AL::ALValue::array(1.61373, AL::ALValue::array(3, -0.166667, -0.0258861), AL::ALValue::array(3, 0.100000, 0.0155317));
	times[10][3] = 1.50000;
	keys[10][3] = AL::ALValue::array(1.68582, AL::ALValue::array(3, -0.100000, -0.0562470), AL::ALValue::array(3, 0.100000, 0.0562470));
	times[10][4] = 1.80000;
	keys[10][4] = AL::ALValue::array(1.95121, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[10][5] = 2.10000;
	keys[10][5] = AL::ALValue::array(0.665714, AL::ALValue::array(3, -0.100000, 0.259246), AL::ALValue::array(3, 0.100000, -0.259246));
	times[10][6] = 2.40000;
	keys[10][6] = AL::ALValue::array(0.395731, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.300000, 0.00000));
	times[10][7] = 3.30000;
	keys[10][7] = AL::ALValue::array(0.909620, AL::ALValue::array(3, -0.300000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("RElbowRoll");
	times[11].arraySetSize(8);
	keys[11].arraySetSize(8);

	times[11][0] = 0.500000;
	keys[11][0] = AL::ALValue::array(0.104720, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.0666667, 0.00000));
	times[11][1] = 0.700000;
	keys[11][1] = AL::ALValue::array(0.382007, AL::ALValue::array(3, -0.0666667, -0.0505141), AL::ALValue::array(3, 0.166667, 0.126285));
	times[11][2] = 1.20000;
	keys[11][2] = AL::ALValue::array(0.635118, AL::ALValue::array(3, -0.166667, -0.242210), AL::ALValue::array(3, 0.100000, 0.145326));
	times[11][3] = 1.50000;
	keys[11][3] = AL::ALValue::array(1.54462, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[11][4] = 1.80000;
	keys[11][4] = AL::ALValue::array(0.0349066, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[11][5] = 2.10000;
	keys[11][5] = AL::ALValue::array(0.423426, AL::ALValue::array(3, -0.100000, -0.102393), AL::ALValue::array(3, 0.100000, 0.102393));
	times[11][6] = 2.40000;
	keys[11][6] = AL::ALValue::array(0.649262, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.300000, 0.00000));
	times[11][7] = 3.30000;
	keys[11][7] = AL::ALValue::array(0.392746, AL::ALValue::array(3, -0.300000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("RWristYaw");
	times[12].arraySetSize(8);
	keys[12].arraySetSize(8);

	times[12][0] = 0.500000;
	keys[12][0] = AL::ALValue::array(1.50941, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.0666667, 0.00000));
	times[12][1] = 0.700000;
	keys[12][1] = AL::ALValue::array(1.50941, AL::ALValue::array(3, -0.0666667, -0.00000), AL::ALValue::array(3, 0.166667, 0.00000));
	times[12][2] = 1.20000;
	keys[12][2] = AL::ALValue::array(1.49714, AL::ALValue::array(3, -0.166667, 0.0122732), AL::ALValue::array(3, 0.100000, -0.00736391));
	times[12][3] = 1.50000;
	keys[12][3] = AL::ALValue::array(1.42811, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[12][4] = 1.80000;
	keys[12][4] = AL::ALValue::array(1.44038, AL::ALValue::array(3, -0.100000, -0.00255661), AL::ALValue::array(3, 0.100000, 0.00255661));
	times[12][5] = 2.10000;
	keys[12][5] = AL::ALValue::array(1.44345, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[12][6] = 2.40000;
	keys[12][6] = AL::ALValue::array(1.44038, AL::ALValue::array(3, -0.100000, 0.00306823), AL::ALValue::array(3, 0.300000, -0.00920468));
	times[12][7] = 3.30000;
	keys[12][7] = AL::ALValue::array(1.08603, AL::ALValue::array(3, -0.300000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("RHand");
	times[13].arraySetSize(8);
	keys[13].arraySetSize(8);

	times[13][0] = 0.500000;
	keys[13][0] = AL::ALValue::array(0.000324139, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.0666667, 0.00000));
	times[13][1] = 0.700000;
	keys[13][1] = AL::ALValue::array(0.000222594, AL::ALValue::array(3, -0.0666667, -0.00000), AL::ALValue::array(3, 0.166667, 0.00000));
	times[13][2] = 1.20000;
	keys[13][2] = AL::ALValue::array(0.000457419, AL::ALValue::array(3, -0.166667, -0.000124289), AL::ALValue::array(3, 0.100000, 7.45731e-05));
	times[13][3] = 1.50000;
	keys[13][3] = AL::ALValue::array(0.000819179, AL::ALValue::array(3, -0.100000, -2.53859e-05), AL::ALValue::array(3, 0.100000, 2.53859e-05));
	times[13][4] = 1.80000;
	keys[13][4] = AL::ALValue::array(0.000844565, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[13][5] = 2.10000;
	keys[13][5] = AL::ALValue::array(0.000825525, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[13][6] = 2.40000;
	keys[13][6] = AL::ALValue::array(0.000844565, AL::ALValue::array(3, -0.100000, -1.90398e-05), AL::ALValue::array(3, 0.300000, 5.71195e-05));
	times[13][7] = 3.30000;
	keys[13][7] = AL::ALValue::array(0.00380209, AL::ALValue::array(3, -0.300000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("LHipYawPitch");
	times[14].arraySetSize(8);
	keys[14].arraySetSize(8);

	times[14][0] = 0.500000;
	keys[14][0] = AL::ALValue::array(-0.0337060, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.0666667, 0.00000));
	times[14][1] = 0.700000;
	keys[14][1] = AL::ALValue::array(0.0349066, AL::ALValue::array(3, -0.0666667, -0.00000), AL::ALValue::array(3, 0.166667, 0.00000));
	times[14][2] = 1.20000;
	keys[14][2] = AL::ALValue::array(-0.435613, AL::ALValue::array(3, -0.166667, 0.169612), AL::ALValue::array(3, 0.100000, -0.101767));
	times[14][3] = 1.50000;
	keys[14][3] = AL::ALValue::array(-0.779230, AL::ALValue::array(3, -0.100000, 0.118279), AL::ALValue::array(3, 0.100000, -0.118279));
	times[14][4] = 1.80000;
	keys[14][4] = AL::ALValue::array(-1.14529, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[14][5] = 2.10000;
	keys[14][5] = AL::ALValue::array(-1.14529, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[14][6] = 2.40000;
	keys[14][6] = AL::ALValue::array(-0.567537, AL::ALValue::array(3, -0.100000, -0.0757576), AL::ALValue::array(3, 0.300000, 0.227273));
	times[14][7] = 3.30000;
	keys[14][7] = AL::ALValue::array(-0.236194, AL::ALValue::array(3, -0.300000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("LHipRoll");
	times[15].arraySetSize(8);
	keys[15].arraySetSize(8);

	times[15][0] = 0.500000;
	keys[15][0] = AL::ALValue::array(0.0629359, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.0666667, 0.00000));
	times[15][1] = 0.700000;
	keys[15][1] = AL::ALValue::array(4.19617e-05, AL::ALValue::array(3, -0.0666667, -0.00000), AL::ALValue::array(3, 0.166667, 0.00000));
	times[15][2] = 1.20000;
	keys[15][2] = AL::ALValue::array(0.00157596, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[15][3] = 1.50000;
	keys[15][3] = AL::ALValue::array(-0.377323, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[15][4] = 1.80000;
	keys[15][4] = AL::ALValue::array(-0.297554, AL::ALValue::array(3, -0.100000, -0.0797685), AL::ALValue::array(3, 0.100000, 0.0797685));
	times[15][5] = 2.10000;
	keys[15][5] = AL::ALValue::array(0.194861, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[15][6] = 2.40000;
	keys[15][6] = AL::ALValue::array(0.127364, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.300000, 0.00000));
	times[15][7] = 3.30000;
	keys[15][7] = AL::ALValue::array(0.148840, AL::ALValue::array(3, -0.300000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("LHipPitch");
	times[16].arraySetSize(8);
	keys[16].arraySetSize(8);

	times[16][0] = 0.500000;
	keys[16][0] = AL::ALValue::array(0.0614019, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.0666667, 0.00000));
	times[16][1] = 0.700000;
	keys[16][1] = AL::ALValue::array(4.19617e-05, AL::ALValue::array(3, -0.0666667, 0.0613599), AL::ALValue::array(3, 0.166667, -0.153400));
	times[16][2] = 1.20000;
	keys[16][2] = AL::ALValue::array(-1.56924, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[16][3] = 1.50000;
	keys[16][3] = AL::ALValue::array(-1.28085, AL::ALValue::array(3, -0.100000, -0.0682630), AL::ALValue::array(3, 0.100000, 0.0682630));
	times[16][4] = 1.80000;
	keys[16][4] = AL::ALValue::array(-1.15966, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[16][5] = 2.10000;
	keys[16][5] = AL::ALValue::array(-1.18267, AL::ALValue::array(3, -0.100000, 0.0184080), AL::ALValue::array(3, 0.100000, -0.0184080));
	times[16][6] = 2.40000;
	keys[16][6] = AL::ALValue::array(-1.27011, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.300000, 0.00000));
	times[16][7] = 3.30000;
	keys[16][7] = AL::ALValue::array(0.213269, AL::ALValue::array(3, -0.300000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("LKneePitch");
	times[17].arraySetSize(8);
	keys[17].arraySetSize(8);

	times[17][0] = 0.500000;
	keys[17][0] = AL::ALValue::array(0.120428, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.0666667, 0.00000));
	times[17][1] = 0.700000;
	keys[17][1] = AL::ALValue::array(1.98968, AL::ALValue::array(3, -0.0666667, -0.0491415), AL::ALValue::array(3, 0.166667, 0.122854));
	times[17][2] = 1.20000;
	keys[17][2] = AL::ALValue::array(2.11253, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[17][3] = 1.50000;
	keys[17][3] = AL::ALValue::array(0.282215, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[17][4] = 1.80000;
	keys[17][4] = AL::ALValue::array(0.357381, AL::ALValue::array(3, -0.100000, -0.0728649), AL::ALValue::array(3, 0.100000, 0.0728649));
	times[17][5] = 2.10000;
	keys[17][5] = AL::ALValue::array(0.719404, AL::ALValue::array(3, -0.100000, -0.276119), AL::ALValue::array(3, 0.100000, 0.276119));
	times[17][6] = 2.40000;
	keys[17][6] = AL::ALValue::array(2.01409, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.300000, 0.00000));
	times[17][7] = 3.30000;
	keys[17][7] = AL::ALValue::array(-0.0905480, AL::ALValue::array(3, -0.300000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("LAnklePitch");
	times[18].arraySetSize(8);
	keys[18].arraySetSize(8);

	times[18][0] = 0.500000;
	keys[18][0] = AL::ALValue::array(0.921892, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.0666667, 0.00000));
	times[18][1] = 0.700000;
	keys[18][1] = AL::ALValue::array(-1.02974, AL::ALValue::array(3, -0.0666667, 0.0483191), AL::ALValue::array(3, 0.166667, -0.120798));
	times[18][2] = 1.20000;
	keys[18][2] = AL::ALValue::array(-1.15054, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[18][3] = 1.50000;
	keys[18][3] = AL::ALValue::array(0.216252, AL::ALValue::array(3, -0.100000, -0.345521), AL::ALValue::array(3, 0.100000, 0.345521));
	times[18][4] = 1.80000;
	keys[18][4] = AL::ALValue::array(0.922581, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[18][5] = 2.10000;
	keys[18][5] = AL::ALValue::array(0.825249, AL::ALValue::array(3, -0.100000, 0.0973318), AL::ALValue::array(3, 0.100000, -0.0973318));
	times[18][6] = 2.40000;
	keys[18][6] = AL::ALValue::array(-0.501660, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.300000, 0.00000));
	times[18][7] = 3.30000;
	keys[18][7] = AL::ALValue::array(0.0766580, AL::ALValue::array(3, -0.300000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("LAnkleRoll");
	times[19].arraySetSize(8);
	keys[19].arraySetSize(8);

	times[19][0] = 0.500000;
	keys[19][0] = AL::ALValue::array(-0.00149204, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.0666667, 0.00000));
	times[19][1] = 0.700000;
	keys[19][1] = AL::ALValue::array(4.19617e-05, AL::ALValue::array(3, -0.0666667, -0.00000), AL::ALValue::array(3, 0.166667, 0.00000));
	times[19][2] = 1.20000;
	keys[19][2] = AL::ALValue::array(-0.00149204, AL::ALValue::array(3, -0.166667, 0.00153400), AL::ALValue::array(3, 0.100000, -0.000920400));
	times[19][3] = 1.50000;
	keys[19][3] = AL::ALValue::array(-0.452489, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[19][4] = 1.80000;
	keys[19][4] = AL::ALValue::array(-0.118076, AL::ALValue::array(3, -0.100000, -0.0685188), AL::ALValue::array(3, 0.100000, 0.0685188));
	times[19][5] = 2.10000;
	keys[19][5] = AL::ALValue::array(-0.0413760, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[19][6] = 2.40000;
	keys[19][6] = AL::ALValue::array(-0.121144, AL::ALValue::array(3, -0.100000, 0.00460203), AL::ALValue::array(3, 0.300000, -0.0138061));
	times[19][7] = 3.30000;
	keys[19][7] = AL::ALValue::array(-0.134950, AL::ALValue::array(3, -0.300000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("RHipRoll");
	times[20].arraySetSize(8);
	keys[20].arraySetSize(8);

	times[20][0] = 0.500000;
	keys[20][0] = AL::ALValue::array(0.0314159, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.0666667, 0.00000));
	times[20][1] = 0.700000;
	keys[20][1] = AL::ALValue::array(4.19617e-05, AL::ALValue::array(3, -0.0666667, -0.00000), AL::ALValue::array(3, 0.166667, 0.00000));
	times[20][2] = 1.20000;
	keys[20][2] = AL::ALValue::array(0.00157596, AL::ALValue::array(3, -0.166667, -0.00153400), AL::ALValue::array(3, 0.100000, 0.000920400));
	times[20][3] = 1.50000;
	keys[20][3] = AL::ALValue::array(0.311444, AL::ALValue::array(3, -0.100000, -0.00920485), AL::ALValue::array(3, 0.100000, 0.00920485));
	times[20][4] = 1.80000;
	keys[20][4] = AL::ALValue::array(0.320648, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[20][5] = 2.10000;
	keys[20][5] = AL::ALValue::array(0.227074, AL::ALValue::array(3, -0.100000, 0.0659621), AL::ALValue::array(3, 0.100000, -0.0659621));
	times[20][6] = 2.40000;
	keys[20][6] = AL::ALValue::array(-0.0751240, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.300000, 0.00000));
	times[20][7] = 3.30000;
	keys[20][7] = AL::ALValue::array(-0.0597840, AL::ALValue::array(3, -0.300000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("RHipPitch");
	times[21].arraySetSize(8);
	keys[21].arraySetSize(8);

	times[21][0] = 0.500000;
	keys[21][0] = AL::ALValue::array(0.0766580, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.0666667, 0.00000));
	times[21][1] = 0.700000;
	keys[21][1] = AL::ALValue::array(-4.19617e-05, AL::ALValue::array(3, -0.0666667, 0.0767000), AL::ALValue::array(3, 0.166667, -0.191750));
	times[21][2] = 1.20000;
	keys[21][2] = AL::ALValue::array(-1.57699, AL::ALValue::array(3, -0.166667, 0.140615), AL::ALValue::array(3, 0.100000, -0.0843692));
	times[21][3] = 1.50000;
	keys[21][3] = AL::ALValue::array(-1.66136, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[21][4] = 1.80000;
	keys[21][4] = AL::ALValue::array(-1.59847, AL::ALValue::array(3, -0.100000, -0.0628929), AL::ALValue::array(3, 0.100000, 0.0628929));
	times[21][5] = 2.10000;
	keys[21][5] = AL::ALValue::array(-0.322183, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[21][6] = 2.40000;
	keys[21][6] = AL::ALValue::array(-0.710284, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.300000, 0.00000));
	times[21][7] = 3.30000;
	keys[21][7] = AL::ALValue::array(0.210117, AL::ALValue::array(3, -0.300000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("RKneePitch");
	times[22].arraySetSize(8);
	keys[22].arraySetSize(8);

	times[22][0] = 0.500000;
	keys[22][0] = AL::ALValue::array(-0.0781920, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.0666667, 0.00000));
	times[22][1] = 0.700000;
	keys[22][1] = AL::ALValue::array(1.98968, AL::ALValue::array(3, -0.0666667, -0.0386416), AL::ALValue::array(3, 0.166667, 0.0966040));
	times[22][2] = 1.20000;
	keys[22][2] = AL::ALValue::array(2.08628, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[22][3] = 1.50000;
	keys[22][3] = AL::ALValue::array(1.74267, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[22][4] = 1.80000;
	keys[22][4] = AL::ALValue::array(2.11255, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[22][5] = 2.10000;
	keys[22][5] = AL::ALValue::array(2.11255, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[22][6] = 2.40000;
	keys[22][6] = AL::ALValue::array(2.11255, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.300000, 0.00000));
	times[22][7] = 3.30000;
	keys[22][7] = AL::ALValue::array(-0.0766580, AL::ALValue::array(3, -0.300000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("RAnklePitch");
	times[23].arraySetSize(8);
	keys[23].arraySetSize(8);

	times[23][0] = 0.500000;
	keys[23][0] = AL::ALValue::array(0.929646, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.0666667, 0.00000));
	times[23][1] = 0.700000;
	keys[23][1] = AL::ALValue::array(-1.02974, AL::ALValue::array(3, -0.0666667, 0.0433770), AL::ALValue::array(3, 0.166667, -0.108443));
	times[23][2] = 1.20000;
	keys[23][2] = AL::ALValue::array(-1.13819, AL::ALValue::array(3, -0.166667, 0.0326158), AL::ALValue::array(3, 0.100000, -0.0195695));
	times[23][3] = 1.50000;
	keys[23][3] = AL::ALValue::array(-1.18630, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[23][4] = 1.80000;
	keys[23][4] = AL::ALValue::array(-0.589014, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[23][5] = 2.10000;
	keys[23][5] = AL::ALValue::array(-1.18630, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[23][6] = 2.40000;
	keys[23][6] = AL::ALValue::array(-1.18630, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.300000, 0.00000));
	times[23][7] = 3.30000;
	keys[23][7] = AL::ALValue::array(0.0859459, AL::ALValue::array(3, -0.300000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));

	names.push_back("RAnkleRoll");
	times[24].arraySetSize(8);
	keys[24].arraySetSize(8);

	times[24][0] = 0.500000;
	keys[24][0] = AL::ALValue::array(0.188496, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.0666667, 0.00000));
	times[24][1] = 0.700000;
	keys[24][1] = AL::ALValue::array(4.19617e-05, AL::ALValue::array(3, -0.0666667, -0.00000), AL::ALValue::array(3, 0.166667, 0.00000));
	times[24][2] = 1.20000;
	keys[24][2] = AL::ALValue::array(0.00617796, AL::ALValue::array(3, -0.166667, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[24][3] = 1.50000;
	keys[24][3] = AL::ALValue::array(-0.00456004, AL::ALValue::array(3, -0.100000, 0.00332367), AL::ALValue::array(3, 0.100000, -0.00332367));
	times[24][4] = 1.80000;
	keys[24][4] = AL::ALValue::array(-0.0137640, AL::ALValue::array(3, -0.100000, 0.00920399), AL::ALValue::array(3, 0.100000, -0.00920399));
	times[24][5] = 2.10000;
	keys[24][5] = AL::ALValue::array(-0.0950660, AL::ALValue::array(3, -0.100000, -0.00000), AL::ALValue::array(3, 0.100000, 0.00000));
	times[24][6] = 2.40000;
	keys[24][6] = AL::ALValue::array(0.0353239, AL::ALValue::array(3, -0.100000, -0.00869267), AL::ALValue::array(3, 0.300000, 0.0260780));
	times[24][7] = 3.30000;
	keys[24][7] = AL::ALValue::array(0.0614019, AL::ALValue::array(3, -0.300000, -0.00000), AL::ALValue::array(3, 0.00000, 0.00000));
  
}

int ALstandUpFront2011::ExecutePost() {
  return  motion->post.angleInterpolationBezier(names, times, keys); 
} 
