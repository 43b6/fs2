//room:/u/e/eva/village/room/room-04.c        made by eva
#include <room.h>
#include <ansi.h>
#include <village.h>

inherit ROOM;

void create()
{
    set("short","ħ���㳡");
    set("long","
    ������ħ����������, Ҳ����ħ�����ٵĵ���, ħ��岢
���˹���, һ�е���������ȫƾ�����Է�����, ��Ҳʮ��ƽ����Ǣ,
������һƬ�ĳ�����, �����ǧ��ٹֲ�֪������Ʒ, ��\�������ǰ
, ���������ۻ�����!\n\n");
    set("exits",([
        "north" : __DIR__"room-03",
        "east" : __DIR__"room-47",
        "south" : __DIR__"room-05",
        "west" : __DIR__"room-46",
        ]));
    set("objects",([
        V_NPC"s_genie" : 1,
        V_NPC"s_woman_a" : 1,
        ]));
    set("no_fight",1);
    set("no_magic",1);
    set("outdoors",1);
    set("no_auc",1);
    set("no_transmit",1);
    set("evil",1);   
    setup();
call_other("/obj/board/mogi_b.c","???");
}
