//open/prayer/room/kiyan/6.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","������");
        set("long",@LONG

	��������Լ���ɣ��ǳ���ͨ!!�����Ĵ���\���˱�����ʮ�˰���
	��������ȫ����������ľ��׮��ר������ѵ�������Ļ�������

LONG);
        set("exits", ([ /* sizeof() == 1 */
        "east":__DIR__"5",		//�󻤷�
 
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
  setup();
}

