//room:/u/e/eva/village/room/room-15.c        made by eva
#include <room.h>
#include <ansi.h>
#include <village.h>

inherit ROOM;

void create()
{
    set("short","ħ����·");
    set("long","
    ������ħ���ͨ�������ĵĵ�·, Խ�ӽ�������Խ���Կ������
�˾ۼ�, ����Ҳ�в��ٸ�ʽ�����ĵ͵�ħ��, �������㾪��, ������
������ͨ����, ��֪��ס��˭?\n\n");
    set("exits",([
        "north" : __DIR__"room-42",
        "east" : __DIR__"room-16",
        "south" : __DIR__"room-43",
        "west" : __DIR__"room-14",
        ]));
    set("no_fight",1);
    set("no_magic",1);
    set("outdoors",1);
    set("no_auc",1);
    set("no_transmit",1);
    set("evil",1);  
    setup();
}
