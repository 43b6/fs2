//room:/u/e/eva/village/room/room-14.c        made by eva
#include <room.h>
#include <ansi.h>
#include <village.h>

inherit ROOM;

void create()
{
    set("short","ħ���㳡");
	set( "build", 39 );
    set("long","
    ������ħ����������, Ҳ����ħ�����ٵĵ���, ħ��岢
���˹���, һ�е���������ȫƾ�����Է�����, ��Ҳʮ��ƽ����Ǣ,
������һƬ�ĳ�����, �����ǧ��ٹֲ�֪������Ʒ, ��\�������ǰ
, ���������ۻ�����! ·����һ�ҷ��ߵ�.\n\n");
    set("exits",([
        "north" : __DIR__"room-47",
        "east" : __DIR__"room-15",
        "south" : __DIR__"room-49",
        "west" : __DIR__"room-05",
        "enter" : __DIR__"room-55",
        ]));
    set("objects",([
        V_NPC"sprite" : 1,
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
