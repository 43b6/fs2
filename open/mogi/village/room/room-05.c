//room:/u/e/eva/village/room/room-05.c        made by eva
#include <room.h>
#include <ansi.h>
#include <village.h>

inherit ROOM;

void create()
{
    set("short","ħ�������̳");
    set("long","
    ������ħ����������, Ҳ��ħ�������֮һ, �ഫ���Թ�����
�������µ�, ����Ϊ�����ħ��, ��ʹ��ħ�����԰�����ħ����,
��̳���ܲ����˷���, �����ɢ����ǿ���ħ��, Ҳ������Ϊ�з���
ѹ��, ��ʹ�ü�̳��ɢ����ħ��, �������˺�����.\n\n");
    set("exits",([
        "north" : __DIR__"room-04",
        "east" : __DIR__"room-14",
        "south" : __DIR__"room-06",
        "west" : __DIR__"room-13",
        ]));
    set("objects",([
        V_NPC"old_man" : 1,
        ]));
    set("no_fight",1);
    set("no_magic",1);
    set("outdoors",1);
    set("no_auc",1);
    set("no_transmit",1);
    set("evil",1);
    setup();
}
