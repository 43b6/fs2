//room:/u/e/eva/village/room/room-06.c        made by eva
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
        "north" : __DIR__"room-05",
        "east" : __DIR__"room-49",
        "south" : __DIR__"room-07",
        "west" : __DIR__"room-48",
        ]));
    set("no_fight",1);
    set("no_magic",1);
    set("outdoors",1);
    set("no_auc",1);
    set("no_transmit",1);
    set("evil",1);  
    setup();
}
