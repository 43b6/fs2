#include <ansi.h>
inherit ROOM;

void create ()
{
    set ("short", RED"�չ���"NOR);
    set ("long", @LONG
�����ƺ���һ�䲻С�ķ��䣬��Ȼ��������ڵģ������о��ó�
�ռ仹����Ϊ�տ��ģ���������ɭɭ�����գ�����е�һ����ë���
Ȼ����Ȼ����󷽴���΢���ĽŲ�����ʹ�㼸��Ҫ���Ƶ���...
LONG);

    set("objects", ([
         "/open/doctor/npc/yunfon" : 1,
]));
    set("light_up", 1);
    setup();
}

