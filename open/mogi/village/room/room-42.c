//room:/u/e/eva/village/room/room-42.c        made by eva
#include <room.h>
#include <ansi.h>
#include <village.h>

inherit ROOM;

void create()
{
    set("short","ħ�����");
    set("long","
    һ����ש�����ɵ���ͨ��, ���ڷ���һЩ�򵥵ļҾ߰�\��, ��
ħ����еı�׼סլ!\n\n");
    set("exits",([
        "south" : __DIR__"room-15",
        ]));
    set("no_fight",1);
    set("no_magic",1);
    set("light_up",1);
    set("no_auc",1);
    set("no_transmit",1);
    set("evil",1);
    setup();
}
