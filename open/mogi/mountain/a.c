// room7.c by konn
inherit ROOM;
#include <ansi.h>
void create () {
set ("short","ħ�����");
        set ("long","
������ħ��山���֮�⣬�����߾Ϳ���ֱ����а���ˣ����������
������Զ����ѩ����а���ˣ����겻�ڡ��ɴ˿ɼ���а������֮�ͣ�
��վ������͸���������������ⲻ�ϴ�����
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "north"  : __DIR__"b",
            "south"  : "/open/mogi/village/room/room-01",
      ]));

       

        setup();
}