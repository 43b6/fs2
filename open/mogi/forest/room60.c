// by roger
inherit ROOM;
#include <ansi.h>
void create () {
set ("short","��ħ���С��");
        set ("long","
  �������ħɭ���ˣ���������ǰ����һ��С����С���Ĳ�Զ����Լ��һ��
��ׯ����ׯ�������ƺ�����������ƽ�Ĺ�â����˵��ħ����Ǹ�����а����
���ĵط���ֻ������͵͵�ħ��ſɽ��롣
");

        set("evil", 1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([
            "north"  : __DIR__"room61",
            "south" : __DIR__"room59",
      ]));

       

        setup();
}
