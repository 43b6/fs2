//room:/u/e/eva/village/room/room-54.c        made by eva
#include <room.h>
#include <ansi.h>
#include <village.h>

inherit ROOM;

void create()
{
    set("short","ħ���������");
    set("long","
    ������ħ����е�������, ��ħ����վ�֮��, ���û������
����, ����һ̤��ħ���Ĵ���, �ͻ�����ȫʬ��, ���������û��
����, ������������ǲ����ѡ��!\n\n");
    set("exits",([
        "out" : __DIR__"room-13",
        ]));
    set("objects",([
        V_NPC"w_boss" : 1 ,
        ]));
    set("no_fight",1);
    set("no_magic",1);
    set("light_up",1);
    set("no_auc",1);
    set("no_transmit",1);
    set("evil",1);
    setup();
}
