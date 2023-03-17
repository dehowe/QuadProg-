#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include "QuadProg++.h"
#define WIN32_LEAN_AND_MEAN             // �� Windows ͷ�ļ����ų�����ʹ�õ�����
typedef double              FLOAT64;
typedef signed char         INT8;
typedef unsigned int        UINT32;
typedef unsigned short int  UINT16;
#define BJTU_MPC_PREDICTION_HORIZON 10 //MPCԤ��ʱ������������Ԥ��ʱ��Ϊ10�����ڳ���
#define NUM_OF_CONS 5 //��MPC�н����Ĳ���ʽԼ��������λ��<��ȫλ�ã��ٶ�<�������, �����*2

#define DIM_OF_CONS_BUF NUM_OF_CONS * BJTU_MPC_PREDICTION_HORIZON
#define DIM_OF_SYS_STATE 3 //�г�ϵͳ״̬ά�ȣ��ֱ�Ϊλ�á��ٶȡ����Ƽ��ٶȣ��г�ֻ�ܿ��ƺ������õļ��ٶȣ�
#define BJTU_MPC_MAX_ACC 120 //ATO����������������ٶ�
#define BJTU_MPC_MIN_ACC -120 //ATO����������������ٶ�

#ifdef __cplusplus
extern "C"
{
#endif
	int GetOptimizeResult(UINT32* PredictedConsPosOfFolTrain, FLOAT64* barQ, FLOAT64* barD, FLOAT64* StatusOfFolTrain, FLOAT64* SpdLmtBuf, INT8* OptAccFromMpcBuf);
	void FloatMultiMatrix_(FLOAT64* A, UINT16 CA, UINT16 VA, FLOAT64* B, UINT16 CB, UINT16 VB, FLOAT64* C);
#ifdef __cplusplus
}
#endif
