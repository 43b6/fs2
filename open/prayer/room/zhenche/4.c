//u/r/rence/room/zhenche/4.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","������");
        set("long",@LONG

        ���������Ķ�����λ��ͷ������ϸ���������ķԸ�. ����
        ���յ�����, ��Ȼ����������������������������. ��
        ������һ�ȵı������ֿ쵽��, �ѹ������᲻����.

LONG);
        set("exits", ([ /* sizeof() == 3 */
        "south":__DIR__"7",             //������
        "north":__DIR__"1",             //������
        "west":__DIR__"5",              //������
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/general" : 1,         //��ͷ
]));

   setup();
}
