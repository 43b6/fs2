//room:/u/e/eva/village/room/room-33.c        made by eva
#include <room.h>
#include <ansi.h>
#include <village.h>

inherit ROOM;

void create()
{
    set("short","ħ���ˮ��̳");
    set("long","
    ������ħ�������½�, Ҳ��ħ�������֮һ, �ഫ���Թ�����
�������µ�, ����Ϊ�����ħ��, ��ʹ��ħ�����԰�����ħ����,
��̳���ܲ����˷���, �����ɢ����ǿ���ħ��, Ҳ������Ϊ�з���
ѹ��, ��ʹ�ü�̳��ɢ����ħ��, �������˺�����.\n\n");
    set("exits",([
        "north" : __DIR__"room-37",
        "west" : __DIR__"room-32",
        ]));
    set("no_fight",1);
    set("no_magic",1);
    set("outdoors",1);
    set("no_auc",1);
    set("no_transmit",1);
    set("evil",1);
    setup();
}
