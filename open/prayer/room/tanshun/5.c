//u/r/rence/room/tanshun/8.c

#include <room.h>
#include "/open/open.h"
 
inherit ROOM;
 
void create()
{
        set("short","������");
        set("long",@LONG

        ��������������������, ��������һƬ���ɫ���ߵĵ�̺
        . ��̺һֱ���쵽������������������, ������һֱͨ��
        ����. ��������������վ��������ڵĸ�ְλ��ͽ, ����
        �����������������.

LONG);
        set("exits", ([ /* sizeof() == 4 */
        "north":__DIR__"2",             //������
        "south":__DIR__"8",             //������
        "east":__DIR__"4",              //������
        "west":__DIR__"6",              //������
        ]) );
        set("no_fight", 0);
        set("light_up", 1);
   setup();
}
