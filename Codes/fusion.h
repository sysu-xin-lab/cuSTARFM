#include<iostream>
#include"PARAMETER.h"
#include"cuLayer.h"

#ifdef __unix
	#define fopen_s(pFile,filename,mode) ((*(pFile))=fopen((filename),  (mode)))==NULL
	#define sscanf_s(pBuffer,fmt,dst,num) sscanf((pBuffer),(fmt),(dst))
	#define fscanf_s(pFile,fmt,pBuffer,num) fscanf((pFile),(fmt),(pBuffer))
	#define strtok_s strtok_r
#endif

void Re_fusion(const char * BufferIn0,const char * BufferIn1,const char * BufferIn2,const char * BufferOut,int win_size,int classnum,float L_err,float M_err,int A,int pf,int pc);
void usage(char *command);
void runtest1(float *BufferLandsat_0,float * BufferModis_0,float *BufferModis_1,float *out,int height,int width,int win_size ,float L_err,float M_err,int classnum,int A);
int parseParameters(char *fname, CuLayer *psensor,PARAMETER *par);
void Re_fusion2(CuLayer *psensor,PARAMETER *par);
//void Re_fusion2(CuLayer *psensor,PARAMETER *par)
//{
//	runtest(BufferLandsat_0,BufferModis_0,BufferModis_1,out,height,width,win_size, L_err, M_err, classnum,A);
//	//Re_fusion(psensor)
//}
