#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include "QuadProg++.h"
#define WIN32_LEAN_AND_MEAN             // 从 Windows 头文件中排除极少使用的内容
typedef double              FLOAT64;
typedef signed char         INT8;
typedef unsigned int        UINT32;
typedef unsigned short int  UINT16;
#define BJTU_MPC_PREDICTION_HORIZON 10 //MPC预测时域周期数，即预测时域为10个周期长度
#define NUM_OF_CONS 5 //后车MPC中建立的不等式约束个数：位置<安全位置，速度<轨道限速, 冲击率*2

#define DIM_OF_CONS_BUF NUM_OF_CONS * BJTU_MPC_PREDICTION_HORIZON
#define DIM_OF_SYS_STATE 3 //列车系统状态维度，分别为位置、速度、控制加速度（列车只受控制合力作用的加速度）
#define BJTU_MPC_MAX_ACC 120 //ATO控制器允许的最大加速度
#define BJTU_MPC_MIN_ACC -120 //ATO控制器允许的最大减速度

#ifdef __cplusplus
extern "C"
{
#endif
	int GetOptimizeResult(UINT32* PredictedConsPosOfFolTrain, FLOAT64* barQ, FLOAT64* barD, FLOAT64* StatusOfFolTrain, FLOAT64* SpdLmtBuf, INT8* OptAccFromMpcBuf);
	void FloatMultiMatrix_(FLOAT64* A, UINT16 CA, UINT16 VA, FLOAT64* B, UINT16 CB, UINT16 VB, FLOAT64* C);
#ifdef __cplusplus
}
#endif
