//
//  global_param.cpp
//  VINS_ios
//
//  Created by HKUST Aerial Robotics on 2017/05/09.
//  Copyright © 2017 HKUST Aerial Robotics. All rights reserved.
//

#include <stdio.h>
#include "global_param.hpp"

double FOCUS_LENGTH_Y;
double PY;
double FOCUS_LENGTH_X;
double PX;
double SOLVER_TIME;
int FREQ;

//extrinsic param
double TIC_X;
double TIC_Y;
double TIC_Z;

bool setGlobalParam(DeviceType device)
{
    switch (device) {
        case iPhone7P:
            printf("Device iPhone7 plus param\n");
            FOCUS_LENGTH_X = 526.600;
            FOCUS_LENGTH_Y = 526.678;
            PX = 243.481;
            PY = 315.280;
            
            SOLVER_TIME = 0.06;
            FREQ = 3;
            
            TIC_X = 0.0;
            TIC_Y = 0.092;
            TIC_Z = 0.01;
            return true;
            break;
            
        case iPhone7:
            printf("Device iPhone7 param\n");
            FOCUS_LENGTH_X = 526.958;
            FOCUS_LENGTH_Y = 527.179;
            PX = 244.473;
            PY = 313.844;
            SOLVER_TIME = 0.06;
            FREQ = 3;
            
            //extrinsic param
            TIC_X = 0.0;
            TIC_Y = 0.092;
            TIC_Z = 0.01;
            return true;
            break;
            
        case iPhone6s:
            printf("Device iPhone6s param\n");
            FOCUS_LENGTH_Y = 549.477;
            PY = 320.379;
            FOCUS_LENGTH_X = 548.813;
            PX = 238.520;
            SOLVER_TIME = 0.06;
            FREQ = 3;
            
            //extrinsic param
            TIC_X = 0.0;
            TIC_Y = 0.065;
            TIC_Z = 0.0;
            return true;
            break;
            
        case iPhone6sP:
            printf("Device iPhone6sP param\n");
            FOCUS_LENGTH_X = 547.565;
            FOCUS_LENGTH_Y = 547.998;
            PX = 239.033;
            PY = 309.452;
            
            SOLVER_TIME = 0.06;
            FREQ = 3;
            
            //extrinsic param
            TIC_X = 0.0;
            TIC_Y = 0.065;
            TIC_Z = 0.0;
            return true;
            break;
            
        case iPadPro97:
            printf("Device ipad97 param\n");
            FOCUS_LENGTH_X = 547.234;
            FOCUS_LENGTH_Y = 547.464;
            PX = 241.549;
            PY = 317.957;
            
            SOLVER_TIME = 0.06;
            FREQ = 3;
            
            //extrinsic param
            TIC_X = 0.0;
            TIC_Y = 0.092;
            TIC_Z = 0.1;
            return true;
            break;
            
        case iPadPro129:
            printf("Device iPad129 param\n");
            FOCUS_LENGTH_X = 547.234;
            FOCUS_LENGTH_Y = 547.464;
            PX = 241.549;
            PY = 317.957;
            
            SOLVER_TIME = 0.06;
            FREQ = 3;
            
            //extrinsic param
            TIC_X = 0.0;
            TIC_Y = 0.092;
            TIC_Z = 0.1;
            return true;
            break;

        case GalaxyS7:
//            printf("Device GalaxyS7 param\n");
//            FOCUS_LENGTH_X = 478.7620;
//            FOCUS_LENGTH_Y = 478.6281;
//            PX = 231.9446;
//            PY = 319.5067;
//
//            //优化时间
//            SOLVER_TIME = 0.6; // 0.06 TODO
//            FREQ = 3;
//
//            //extrinsic param
//            // TIC = Translation IMU to Camera
//            TIC_X = 0.0; // view direction
//            TIC_Y = -0.0045; //-0.005 // to the left when device is in landscape (up when normal)
//            TIC_Z = -0.01505; //-0.018792; // up when in landscape (right when normal)

            printf("Device GalaxyS7 param\n");
            FOCUS_LENGTH_X = 483.03;
            FOCUS_LENGTH_Y = 483.04;
            PX = 245.47;
            PY = 316.25;

            //优化时间
            SOLVER_TIME = 0.4; // 0.06 TODO
            FREQ = 3;

            //extrinsic param
            // TIC = Translation IMU to Camera
//            TIC_X = 0.051546185; // view direction
            TIC_X = 0; // view direction
            TIC_Y = 0.05029664; //-0.005 // to the left when device is in landscape (up when normal)
            TIC_Z = -0.0445006; //-0.018792; // up when in landscape (right when normal)
            return true;
            break;

        case OnePlus5T:
            FOCUS_LENGTH_X = 504.62;
            FOCUS_LENGTH_Y = 505.15;
            PX = 239.39;
            PY = 319.96;

            SOLVER_TIME = 0.6; // 0.06 TODO
            FREQ = 3;

            //extrinsic param
            // TIC = Translation IMU to Camera
            TIC_X = 0.0; // view direction
            TIC_Y = 0.00776; //-0.005 // to the left when device is in landscape (up when normal)
            TIC_Z = 0.03366; //-0.018792; // up when in landscape (right when normal)
            return true;
            break;

        case HuaWeiP20:
            FOCUS_LENGTH_X = 496.79612459;
            FOCUS_LENGTH_Y = 496.76574986;
            PX = 241.5248847;
            PY = 320.3721333;

            SOLVER_TIME = 0.4; // 0.06 TODO
            FREQ = 3;

            //extrinsic param
            // TIC = Translation IMU to Camera
            TIC_X = -0.02101989; // view direction
            TIC_Y = -0.00812631; //-0.005 // to the left when device is in landscape (up when normal)
            TIC_Z = -0.03821911; //-0.018792; // up when in landscape (right when normal)

//            //物理距离
//            TIC_X = 0; // view direction
//            TIC_Y = -0.0045; //-0.005 // to the left when device is in landscape (up when normal)
//            TIC_Z = 0.0367; //-0.018792; // up when in landscape (right when normal)
            return true;
            break;
            
        case unDefine:
            return false;
            break;
        default:
            return false;
            break;
    }
}





