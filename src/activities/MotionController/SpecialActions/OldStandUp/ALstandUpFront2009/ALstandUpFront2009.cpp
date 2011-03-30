#include "ALstandUpFront2009.h"

#include "hal/robot/generic_nao/kAlBroker.h"

namespace {
  SpecialActionRegistrar<ALstandUpFront2009>::Type temp("ALstandUpFront2009");
}

ALstandUpFront2009::ALstandUpFront2009() {
  Initialize();
  Logger::Instance().WriteMsg("SP:ALstandUpFront2009","Initialized!",Logger::ExtraInfo);
  
  try {
    motion = KAlBroker::Instance().GetBroker()->getMotionProxy();
  } catch (AL::ALError& e) {
    Logger::Instance().WriteMsg("SP:ALstandUpFront2009","Error in getting motion proxy",Logger::FatalError);
  }
  
}




void ALstandUpFront2009::Initialize() {
  
  
  jointCodes.arraySetSize(21);
  angles.arraySetSize(21);
  times.arraySetSize(21);
  
  jointCodes[0] = "HeadPitch";
  angles[0].arraySetSize(6);
  times[0].arraySetSize(6);
  angles[0][0] = -0.57596f;
  times[0][0] = 1.40000f;
  angles[0][1] = 0.00000f;
  times[0][1] = 2.40000f;
  angles[0][2] = -0.34907f;
  times[0][2] = 3.70000f;
  angles[0][3] = -0.48869f;
  times[0][3] = 5.20000f;
  angles[0][4] = 0.00000f;
  times[0][4] = 6.20000f;
  angles[0][5] = 0.27925f;
  times[0][5] = 8.40000f;
  
  jointCodes[1] = "LAnklePitch";
  angles[1].arraySetSize(8);
  times[1].arraySetSize(8);
  angles[1][0] = -1.13446f;
  times[1][0] = 1.40000f;
  angles[1][1] = -1.13446f;
  times[1][1] = 2.40000f;
  angles[1][2] = -0.78365f;
  times[1][2] = 3.70000f;
  angles[1][3] = 0.08727f;
  times[1][3] = 4.40000f;
  angles[1][4] = -0.31241f;
  times[1][4] = 5.20000f;
  angles[1][5] = -0.71558f;
  times[1][5] = 6.20000f;
  angles[1][6] = -1.04720f;
  times[1][6] = 7.40000f;
  angles[1][7] = -0.17453f;
  times[1][7] = 8.40000f;
  
  jointCodes[2] = "LAnkleRoll";
  angles[2].arraySetSize(8);
  times[2].arraySetSize(8);
  angles[2][0] = 0.00000f;
  times[2][0] = 1.40000f;
  angles[2][1] = 0.00000f;
  times[2][1] = 2.40000f;
  angles[2][2] = -0.68068f;
  times[2][2] = 3.70000f;
  angles[2][3] = -0.55501f;
  times[2][3] = 4.40000f;
  angles[2][4] = -0.29671f;
  times[2][4] = 5.20000f;
  angles[2][5] = -0.10472f;
  times[2][5] = 6.20000f;
  angles[2][6] = 0.00000f;
  times[2][6] = 7.40000f;
  angles[2][7] = 0.00000f;
  times[2][7] = 8.40000f;
  
  jointCodes[3] = "LElbowRoll";
  angles[3].arraySetSize(8);
  times[3].arraySetSize(8);
  angles[3][0] = 0.00000f;
  times[3][0] = 1.40000f;
  angles[3][1] = -0.61087f;
  times[3][1] = 2.40000f;
  angles[3][2] = -1.65806f;
  times[3][2] = 3.70000f;
  angles[3][3] = -0.13963f;
  times[3][3] = 4.40000f;
  angles[3][4] = -0.71558f;
  times[3][4] = 5.20000f;
  angles[3][5] = -1.29154f;
  times[3][5] = 6.20000f;
  angles[3][6] = -1.39626f;
  times[3][6] = 7.40000f;
  angles[3][7] = -1.25664f;
  times[3][7] = 8.40000f;
  
  jointCodes[4] = "LElbowYaw";
  angles[4].arraySetSize(8);
  times[4].arraySetSize(8);
  angles[4][0] = -1.57080f;
  times[4][0] = 1.40000f;
  angles[4][1] = -1.57080f;
  times[4][1] = 2.40000f;
  angles[4][2] = -1.57080f;
  times[4][2] = 3.70000f;
  angles[4][3] = -1.57080f;
  times[4][3] = 4.40000f;
  angles[4][4] = -0.24435f;
  times[4][4] = 5.20000f;
  angles[4][5] = -0.92502f;
  times[4][5] = 6.20000f;
  angles[4][6] = -1.57080f;
  times[4][6] = 7.40000f;
  angles[4][7] = -1.23918f;
  times[4][7] = 8.40000f;
  
  jointCodes[5] = "LHipPitch";
  angles[5].arraySetSize(8);
  times[5].arraySetSize(8);
  angles[5][0] = 0.00000f;
  times[5][0] = 1.40000f;
  angles[5][1] = -1.57080f;
  times[5][1] = 2.40000f;
  angles[5][2] = -1.57080f;
  times[5][2] = 3.70000f;
  angles[5][3] = -1.57080f;
  times[5][3] = 4.40000f;
  angles[5][4] = -1.57080f;
  times[5][4] = 5.20000f;
  angles[5][5] = -1.06989f;
  times[5][5] = 6.20000f;
  angles[5][6] = -1.04720f;
  times[5][6] = 7.40000f;
  angles[5][7] = -0.17453f;
  times[5][7] = 8.40000f;
  
  jointCodes[6] = "LHipRoll";
  angles[6].arraySetSize(8);
  times[6].arraySetSize(8);
  angles[6][0] = 0.00000f;
  times[6][0] = 1.40000f;
  angles[6][1] = 0.00000f;
  times[6][1] = 2.40000f;
  angles[6][2] = 0.00000f;
  times[6][2] = 3.70000f;
  angles[6][3] = 0.00000f;
  times[6][3] = 4.40000f;
  angles[6][4] = 0.08727f;
  times[6][4] = 5.20000f;
  angles[6][5] = 0.10472f;
  times[6][5] = 6.20000f;
  angles[6][6] = -0.01047f;
  times[6][6] = 7.40000f;
  angles[6][7] = -0.01047f;
  times[6][7] = 8.40000f;
  
  jointCodes[7] = "LHipYawPitch";
  angles[7].arraySetSize(8);
  times[7].arraySetSize(8);
  angles[7][0] = 0.00000f;
  times[7][0] = 1.40000f;
  angles[7][1] = 0.00000f;
  times[7][1] = 2.40000f;
  angles[7][2] = -0.87266f;
  times[7][2] = 3.70000f;
  angles[7][3] = -0.87266f;
  times[7][3] = 4.40000f;
  angles[7][4] = -0.96517f;
  times[7][4] = 5.20000f;
  angles[7][5] = -0.78540f;
  times[7][5] = 6.20000f;
  angles[7][6] = 0.00000f;
  times[7][6] = 7.40000f;
  angles[7][7] = 0.00000f;
  times[7][7] = 8.40000f;
  
  jointCodes[8] = "LKneePitch";
  angles[8].arraySetSize(8);
  times[8].arraySetSize(8);
  angles[8][0] = 2.09440f;
  times[8][0] = 1.40000f;
  angles[8][1] = 2.09440f;
  times[8][1] = 2.40000f;
  angles[8][2] = 1.04720f;
  times[8][2] = 3.70000f;
  angles[8][3] = 1.01229f;
  times[8][3] = 4.40000f;
  angles[8][4] = 2.15548f;
  times[8][4] = 5.20000f;
  angles[8][5] = 2.16421f;
  times[8][5] = 6.20000f;
  angles[8][6] = 2.09440f;
  times[8][6] = 7.40000f;
  angles[8][7] = 0.34907f;
  times[8][7] = 8.40000f;
  
  jointCodes[9] = "LShoulderPitch";
  angles[9].arraySetSize(8);
  times[9].arraySetSize(8);
  angles[9][0] = -1.57080f;
  times[9][0] = 1.40000f;
  angles[9][1] = -0.87266f;
  times[9][1] = 2.40000f;
  angles[9][2] = -0.17453f;
  times[9][2] = 3.70000f;
  angles[9][3] = 0.00000f;
  times[9][3] = 4.40000f;
  angles[9][4] = 0.61087f;
  times[9][4] = 5.20000f;
  angles[9][5] = 1.11701f;
  times[9][5] = 6.20000f;
  angles[9][6] = 1.62316f;
  times[9][6] = 7.40000f;
  angles[9][7] = 1.83260f;
  times[9][7] = 8.40000f;
  
  jointCodes[10] = "LShoulderRoll";
  angles[10].arraySetSize(8);
  times[10].arraySetSize(8);
  angles[10][0] = 0.00000f;
  times[10][0] = 1.40000f;
  angles[10][1] = 0.00000f;
  times[10][1] = 2.40000f;
  angles[10][2] = 0.00000f;
  times[10][2] = 3.70000f;
  angles[10][3] = 0.00000f;
  times[10][3] = 4.40000f;
  angles[10][4] = 0.03491f;
  times[10][4] = 5.20000f;
  angles[10][5] = 0.13090f;
  times[10][5] = 6.20000f;
  angles[10][6] = 0.17453f;
  times[10][6] = 7.40000f;
  angles[10][7] = 0.19199f;
  times[10][7] = 8.40000f;
  
  jointCodes[11] = "RAnklePitch";
  angles[11].arraySetSize(8);
  times[11].arraySetSize(8);
  angles[11][0] = -1.13446f;
  times[11][0] = 1.40000f;
  angles[11][1] = -1.13446f;
  times[11][1] = 2.40000f;
  angles[11][2] = -0.78365f;
  times[11][2] = 3.70000f;
  angles[11][3] = 0.08727f;
  times[11][3] = 4.40000f;
  angles[11][4] = -0.31241f;
  times[11][4] = 5.20000f;
  angles[11][5] = -0.71558f;
  times[11][5] = 6.20000f;
  angles[11][6] = -1.04720f;
  times[11][6] = 7.40000f;
  angles[11][7] = -0.17453f;
  times[11][7] = 8.40000f;
  
  jointCodes[12] = "RAnkleRoll";
  angles[12].arraySetSize(8);
  times[12].arraySetSize(8);
  angles[12][0] = 0.00000f;
  times[12][0] = 1.40000f;
  angles[12][1] = 0.00000f;
  times[12][1] = 2.40000f;
  angles[12][2] = 0.68068f;
  times[12][2] = 3.70000f;
  angles[12][3] = 0.55501f;
  times[12][3] = 4.40000f;
  angles[12][4] = 0.29671f;
  times[12][4] = 5.20000f;
  angles[12][5] = 0.10472f;
  times[12][5] = 6.20000f;
  angles[12][6] = 0.00000f;
  times[12][6] = 7.40000f;
  angles[12][7] = 0.00000f;
  times[12][7] = 8.40000f;
  
  jointCodes[13] = "RElbowRoll";
  angles[13].arraySetSize(8);
  times[13].arraySetSize(8);
  angles[13][0] = 0.00000f;
  times[13][0] = 1.40000f;
  angles[13][1] = 0.61087f;
  times[13][1] = 2.40000f;
  angles[13][2] = 1.65806f;
  times[13][2] = 3.70000f;
  angles[13][3] = 0.13963f;
  times[13][3] = 4.40000f;
  angles[13][4] = 0.71558f;
  times[13][4] = 5.20000f;
  angles[13][5] = 1.29154f;
  times[13][5] = 6.20000f;
  angles[13][6] = 1.39626f;
  times[13][6] = 7.40000f;
  angles[13][7] = 1.25664f;
  times[13][7] = 8.40000f;
  
  jointCodes[14] = "RElbowYaw";
  angles[14].arraySetSize(8);
  times[14].arraySetSize(8);
  angles[14][0] = 1.57080f;
  times[14][0] = 1.40000f;
  angles[14][1] = 1.57080f;
  times[14][1] = 2.40000f;
  angles[14][2] = 1.57080f;
  times[14][2] = 3.70000f;
  angles[14][3] = 1.57080f;
  times[14][3] = 4.40000f;
  angles[14][4] = 0.24435f;
  times[14][4] = 5.20000f;
  angles[14][5] = 0.92502f;
  times[14][5] = 6.20000f;
  angles[14][6] = 1.57080f;
  times[14][6] = 7.40000f;
  angles[14][7] = 1.23918f;
  times[14][7] = 8.40000f;
  
  jointCodes[15] = "RHipPitch";
  angles[15].arraySetSize(8);
  times[15].arraySetSize(8);
  angles[15][0] = 0.00000f;
  times[15][0] = 1.40000f;
  angles[15][1] = -1.57080f;
  times[15][1] = 2.40000f;
  angles[15][2] = -1.57080f;
  times[15][2] = 3.70000f;
  angles[15][3] = -1.57080f;
  times[15][3] = 4.40000f;
  angles[15][4] = -1.57080f;
  times[15][4] = 5.20000f;
  angles[15][5] = -1.06989f;
  times[15][5] = 6.20000f;
  angles[15][6] = -1.04720f;
  times[15][6] = 7.40000f;
  angles[15][7] = -0.17453f;
  times[15][7] = 8.40000f;
  
  jointCodes[16] = "RHipRoll";
  angles[16].arraySetSize(8);
  times[16].arraySetSize(8);
  angles[16][0] = 0.00000f;
  times[16][0] = 1.40000f;
  angles[16][1] = 0.00000f;
  times[16][1] = 2.40000f;
  angles[16][2] = 0.00000f;
  times[16][2] = 3.70000f;
  angles[16][3] = 0.00000f;
  times[16][3] = 4.40000f;
  angles[16][4] = -0.08727f;
  times[16][4] = 5.20000f;
  angles[16][5] = -0.10472f;
  times[16][5] = 6.20000f;
  angles[16][6] = 0.01047f;
  times[16][6] = 7.40000f;
  angles[16][7] = 0.01047f;
  times[16][7] = 8.40000f;
  
  jointCodes[17] = "RHipYawPitch";
  angles[17].arraySetSize(8);
  times[17].arraySetSize(8);
  angles[17][0] = 0.00000f;
  times[17][0] = 1.40000f;
  angles[17][1] = 0.00000f;
  times[17][1] = 2.40000f;
  angles[17][2] = -0.87266f;
  times[17][2] = 3.70000f;
  angles[17][3] = -0.87266f;
  times[17][3] = 4.40000f;
  angles[17][4] = -0.96517f;
  times[17][4] = 5.20000f;
  angles[17][5] = -0.78540f;
  times[17][5] = 6.20000f;
  angles[17][6] = 0.00000f;
  times[17][6] = 7.40000f;
  angles[17][7] = 0.00000f;
  times[17][7] = 8.40000f;
  
  jointCodes[18] = "RKneePitch";
  angles[18].arraySetSize(8);
  times[18].arraySetSize(8);
  angles[18][0] = 2.09440f;
  times[18][0] = 1.40000f;
  angles[18][1] = 2.09440f;
  times[18][1] = 2.40000f;
  angles[18][2] = 1.04720f;
  times[18][2] = 3.70000f;
  angles[18][3] = 1.01229f;
  times[18][3] = 4.40000f;
  angles[18][4] = 2.15548f;
  times[18][4] = 5.20000f;
  angles[18][5] = 2.16421f;
  times[18][5] = 6.20000f;
  angles[18][6] = 2.09440f;
  times[18][6] = 7.40000f;
  angles[18][7] = 0.34907f;
  times[18][7] = 8.40000f;
  
  jointCodes[19] = "RShoulderPitch";
  angles[19].arraySetSize(8);
  times[19].arraySetSize(8);
  angles[19][0] = -1.57080f;
  times[19][0] = 1.40000f;
  angles[19][1] = -0.87266f;
  times[19][1] = 2.40000f;
  angles[19][2] = -0.17453f;
  times[19][2] = 3.70000f;
  angles[19][3] = 0.00000f;
  times[19][3] = 4.40000f;
  angles[19][4] = 0.61087f;
  times[19][4] = 5.20000f;
  angles[19][5] = 1.11701f;
  times[19][5] = 6.20000f;
  angles[19][6] = 1.62316f;
  times[19][6] = 7.40000f;
  angles[19][7] = 1.83260f;
  times[19][7] = 8.40000f;
  
  jointCodes[20] = "RShoulderRoll";
  angles[20].arraySetSize(8);
  times[20].arraySetSize(8);
  angles[20][0] = 0.00000f;
  times[20][0] = 1.40000f;
  angles[20][1] = 0.00000f;
  times[20][1] = 2.40000f;
  angles[20][2] = 0.00000f;
  times[20][2] = 3.70000f;
  angles[20][3] = 0.00000f;
  times[20][3] = 4.40000f;
  angles[20][4] = -0.03491f;
  times[20][4] = 5.20000f;
  angles[20][5] = -0.13090f;
  times[20][5] = 6.20000f;
  angles[20][6] = -0.17453f;
  times[20][6] = 7.40000f;
  angles[20][7] = -0.19199f;
  times[20][7] = 8.40000f;
  
  
}

int ALstandUpFront2009::ExecutePost() {
  return motion->post.angleInterpolation(jointCodes, angles, times, 1); 
} 
