
#include <room.h>
#include <ansi.h>
#include <village.h>

inherit SHOP;

void create()
{
    set("short","ħ����̵�");
    set("long","
    ������ħ�����̵�, ����ħ�������ĵ���λ�ü��������ʷ
����, ���Գ���������ֵֹ���Ʒ�ڴ���ͨ, Ҳ����������Ҫ�Ķ���
Ҳ˵��һ��!?
    ������ɶ����(list),����Ʒ(sell),����(value)\n\n");
    set("exits",([
        "out" : __DIR__"room-47.c",
        ]));
    set("objects",([
        V_NPC"s_boss" : 1 ,
        ]));
    set("no_fight",1);
    set("no_magic",1);
    set("light_up",1);
    set("no_auc",1);
    set("no_transmit",1);
    set("evil",1);
    setup();
}
