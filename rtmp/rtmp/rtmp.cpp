// rtmp.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "RTMP_Core.h"

RTMP_Context g_context;

int _tmain(int argc, _TCHAR* argv[])
{
	g_context.in_chunk_size = 128;

	RTMP_Open("rtmp://live.hkstv.hk.lxdns.com/live/hks");
	return 0;
}

