//room:/u/e/eva/village/room/room-52.c        made by eva
#include <room.h>
#include <ansi.h>
#include <village.h>

inherit BANK;

void create()
{
    set("short","ħ���Ǯׯ");
    set("long","
    ������ħ����е�Ǯׯ, ħ���������ħ���ı�����, �����ر�
�����˾��ð���, Ǯׯ�ϰ���һ���Ͱ����׵���, ��Ǯ��������׼û
��!!
    �Ա���һ������(board)!\n\n");
    set("exits",([
        "out" : __DIR__"room-48",
        ]));
    set("objects",([
        V_NPC"b_boss" : 1 ,
        ]));
    set("item_desc",([
        "board" : "
        balance:   �鿴�����еĴ��    convert:  ��Ǯ��
        withdraw:  ���                deposit:  ���\n\n",
        ]));
    set("no_fight",1);
    set("no_magic",1);
    set("light_up",1);
    set("no_auc",1);
    set("no_transmit",1);
    set("evil",1);
    setup();
}
