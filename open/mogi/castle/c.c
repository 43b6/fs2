// room7.c by konn
inherit ROOM;
#include <ansi.h>
void create () {
set ("short","ħ�����");
        set ("long","�������Ѿ�������ħ�ų��ˣ���������������£��㷢���ⶰ��
���൱�Ӵ��Ͽղ�������ħ�磬������������ģ��ҹ���ġ�
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "east"  : __DIR__"b",
            "south"  : __DIR__"d",
      ]));

       

        setup();
}
