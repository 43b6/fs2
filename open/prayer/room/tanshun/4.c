//u/r/rence/room/tanshun/4.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","������");
        set("long",@LONG

        ���������Ķ�����λ��ͷ������ϸ�����ܽ�ͷ�ı���, ��
        ������ΪȻ��ʱ, �������ҡͷ, ���������ܽ�ͷ������
        �Ĺ���ʱ, �������ͬ��..

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
