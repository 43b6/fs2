//u/r/rence/room/zhenche/6.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","������");
        set("long",@LONG

        ��������������վ��һλ���ܽ�ͷ. ������������������
        �䲻����ʱ, һʱ�����޻���˵, ֻ��ĬĬ��ͷ��������
        ����.

LONG);
        set("exits", ([ /* sizeof() == 3 */
        "north":__DIR__"3",             //������
        "south":__DIR__"9",             //������
        "east":__DIR__"5",              //������
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
        set("objects",([ /* sizeof() == 1 */
        "/open/prayer/npc/major-officer" : 1,           
]));

   setup();
}
