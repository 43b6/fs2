//room:/u/e/eva/village/room/room-55.c        made by eva
#include <room.h>
#include <ansi.h>
#include <village.h>

inherit ROOM;

void create()
{
    set("short","ħ�����ߵ�");
	set( "build", 491 );
    set("long","
    ������ħ����еķ��ߵ�, ��ħ��֮���кõķ����Ǻ���Ҫ��,
��һ�׺õķ���, ���Ա�סС��һ��, û�з��߾��߳�ħ���, ��
������ɱ����Ϊ, ����û�з��ߵ��ÿͶ�ϲ���ڴ���!\n\n");
    set("exits",([
        "out" : __DIR__"room-14",
        ]));
    set("objects",([
        V_NPC"a_boss" : 1 ,
        ]));
    set("no_fight",1);
    set("no_magic",1);
    set("light_up",1);
    set("no_auc",1);
    set("no_transmit",1);
    set("evil",1);
    setup();
}
