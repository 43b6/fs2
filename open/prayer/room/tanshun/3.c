//u/r/rence/room/tanshun/3.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","����Ŵ���");
        set("long",@LONG

        ����վ��һλ�󻤷�, ���һ���רְ������������Ҫ����
        . �����һ���幤����������, �����Ŵ����ҷ��Ĵ����
        ī��, �����໥��ӳ!

LONG);
        set("exits", ([ /* sizeof() == 2 */
        "east":__DIR__"2",              //����
        "south":__DIR__"6",                 
 
        ]) );
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/left" : 1,            //�󻤷�
]));
  setup();
}

