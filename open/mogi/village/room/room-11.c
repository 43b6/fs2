//room:/u/e/eva/village/room/room-11.c        made by eva
#include <room.h>
#include <ansi.h>
#include <village.h>

inherit ROOM;

void create()
{
    set("short","ħ���");
    set("long","
    ������ħ���, ħ����Ǹ��ɽ�籣���Ĵ���, ���е͵�ħ�Ｐ
����ɽ���, �򶫷���ȥ����ħ�������Ĺ㳡, �������൱������
, ���Եĵ�·���ǻ��ƴ���Χǽ�ĵ�·, �����߿��Գ�ħ���.\n\n");
    set("exits",([
        "north" : __DIR__"room-25",
        "east" : __DIR__"room-12",
        "south" : __DIR__"room-34",
        "west" : __DIR__"room-10",
        ]));
    set("objects",([
        V_NPC"s_man_a" : 1,
        V_NPC"s_woman_a" : 1,
        ]));
    set("no_fight",1);
    set("no_magic",1);
    set("outdoors",1);
    set("no_auc",1);
    set("no_transmit",1);
    set("evil",1);  
    setup();
}
