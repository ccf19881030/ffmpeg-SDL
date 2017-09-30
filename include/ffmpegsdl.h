#ifndef _FFMPEGSDL_H_
#define _FFMPEGSDL_H_

//C99������Χ����. [��C������Բ���, ��C++������붨��ú�.]
#define  __STDC_LIMIT_MACROS
//C99����������. [��C������Բ���, ��C++������붨��ú�.]
#define  __STDC_CONSTANT_MACROS

//ffmpeg
#pragma comment(lib,"avcodec.lib")
#pragma comment(lib,"avdevice.lib")
#pragma comment(lib,"avfilter.lib")
#pragma comment(lib,"avformat.lib")
#pragma comment(lib,"avutil.lib")
#pragma comment(lib,"postproc.lib")
#pragma comment(lib,"swresample.lib")
#pragma comment(lib,"swscale.lib")

//SDL
#pragma comment(lib,"SDL2.lib")

extern "C"  
{  
//ffmpeg
#include "libavformat/avformat.h"
#include "libavfilter/avfilter.h"
#include "libavdevice/avdevice.h"
#include "libswscale/swscale.h"
#include "libswresample/swresample.h"
#include "libpostproc/postprocess.h"
#include "libavcodec/avcodec.h"  
#include "libavutil/imgutils.h"

//SDL
#include "SDL2.0.5/SDL.h"
#undef main//ȡ��SDL_main.h�е�#define main SDL_main
}; 
#endif