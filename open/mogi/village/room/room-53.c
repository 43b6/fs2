//room:/u/e/eva/village/room/room-53.c        made by eva
#include <room.h>
#include <ansi.h>
#include <village.h>

inherit ROOM;

void create()
{
    set("short","ħ�����ߵ�");
	set( "build", 4534 );
    set("long","
    ������ħ����еĵ��ߵ�, ���а�\���������ֵֹ�����, ���
����������ҩ�ĵİ�? ����ĳ����а�\��ƿƿ�޹޵�ҩˮ, �����㲻
֪����ɶ���ð���.\n\n");
    set("exits",([
        "out" : __DIR__"room-49",
        ]));
    set("objects",([
        V_NPC"i_boss" : 1 ,
        ]));
    set("no_fight",1);
    set("no_magic",1);
    set("light_up",1);
    set("no_auc",1);
    set("no_transmit",1);
    set("evil",1);
    setup();
}
