//room:/u/e/eva/village/room/room-08.c        made by eva
#include <room.h>
#include <ansi.h>
#include <village.h>

inherit ROOM;

void create()
{
    set("short","ħ���");
    set("long","
    ������ħ���, ħ����Ǹ��ɽ�籣���Ĵ���, ���е͵�ħ�Ｐ
����ɽ���, �򱱷���ȥ����ħ�������Ĺ㳡, �������൱������
, ���Եĵ�·���ǻ��ƴ���Χǽ�ĵ�·, ���Ͽ��Գ�ħ���.\n\n");
    set("exits",([
        "north" : __DIR__"room-07",
        "east" : __DIR__"room-31",
        "south" : __DIR__"room-09",
        "west" : __DIR__"room-30",
        ]));
    set("objects",([
       V_NPC"s_genie" : 1,
       V_NPC"s_woman_b" : 1,
        ]));
    set("no_fight",1);
    set("no_magic",1);
    set("outdoors",1);
    set("no_auc",1);
    set("no_transmit",1);
    set("evil",1);  
    setup();
}
