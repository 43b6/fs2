//open/prayer/room/garden7.c
#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","��԰");
        set("long",@LONG

	    ��֪������������Ũ��ֻ������������
	���ܲ�ʱ����Ұ�޵Ľ�����������߽������
	һֱ�ŵ�һ��޹�˵Ķ��������һ��һ�ѵ���
	�û���ʬ�壬���㲻֪����Щ�˵����ǹ����
	ʳ�ﻹ����������Ϊ�߲���ȥ�Ĺ�ϵ??

LONG);
        set("outdoors", "/u/r/rence");
        set("exits", ([ /* sizeof() == 4 */
        "north":"/open/prayer/room/garden11",		//��԰
        "south":"/open/prayer/room/garden3",		//��԰
        "east":"/open/prayer/room/garden6",		// "
        "west":"/open/prayer/room/garden8",			// "
        ]) );
   setup();
}
