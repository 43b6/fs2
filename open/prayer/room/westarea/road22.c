//open/prayer/room/westarea/road22.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","�ֵ�");
        set("long",@LONG
	�������Գ�һ��Ľֵ�, ��ͨ�˴�, ��������. �������Ե�
	��"�����"��"�����". ���߽�С��ɽ���˳�"����ɽ", ɽ
	�ֲԴ�, ���ⰻȻ, һ��Ҳ���������������֮һ. 
LONG);

        set("outdoors", "/open/prayer");
        set("exits", ([ /* sizeof() == 2 */
        "east":__DIR__"road21",		//�ֵ�
        "west":__DIR__"road23",		//�ֵ�
 
        ]) );
        set("objects",([ /* sizeof() ==  1*/
        "/open/prayer/npc/sister" : 1,		
        ]) );
        
        set("no_fight", 0);
    setup();
}
