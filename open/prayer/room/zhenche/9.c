//u/r/rence/room/zhenche/9.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","������");
        set("long",@LONG

        �������������Ͻ�, ��һλ���ܹ���������������һ����
        ������֧����. ����һ�����ص�����, ���������ľ���
        ������Ҳ�е�������..

LONG);
        set("exits", ([ /* sizeof() == 2 */
        "north":__DIR__"6",             //������
        "east":__DIR__"8",              //������
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/vice-manager" : 1,            
]));

   setup();
}
