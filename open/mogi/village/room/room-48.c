//room:/u/e/eva/village/room/room-48.c        made by eva
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
, ���������ۻ�����!·����һ��Ǯ��.\n\n");
    set("exits",([
        "north" : __DIR__"room-13",
        "east" : __DIR__"room-06",
        "enter" : __DIR__"room-52",
        ]));
    set("no_fight",1);
    set("no_magic",1);
    set("outdoors",1);
    set("no_auc",1);
    set("no_transmit",1);
    set("evil",1);
    setup();
}
