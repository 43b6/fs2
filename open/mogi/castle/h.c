// by roger
inherit ROOM;
#include <ansi.h>
void create () {
set ("short","ħ�����");
        set ("long","������ħ���Ķ����������ⲻԶ����������ħ�ųǡ���Զ���������
���൱�Ӵ��Ͽղ�������ħ�磬������������ģ��ҹ���ġ�
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "north"  : __DIR__"f",
            "west"  : "/open/mogi/village/room/room-17",
      ]));

       

        setup();
}
