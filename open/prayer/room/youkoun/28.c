//open/prayer/room/youkoun/28.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","������");
        set("long",@LONG

        ��������Լ����, �ǳ����!!�����Ĵ������˱���, ʮ��
        ������������ȫ. ��������ľ��׮, ר������ѵ������
        �Ļ�������.

LONG);
        set("exits", ([ /* sizeof() == 1 */
        "west":__DIR__"1",              //�󻤷�
 
        ]) );
        set("no_fight", 1);
        set("light_up", 1);
  setup();
}

