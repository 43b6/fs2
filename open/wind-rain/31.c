// by roger && taifar
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short","����");
set ("long", @LONG
�߷����ף��������ϣ�ֻ�������ݣ�����ǣ�ٵģ����������ģ�
��ʯ�Ż�����ˣ����������������������͡��������ڣ������
�գ����b֮ˮ���������ٸ���������Ҷ������������޵���ң���
���仪���������������һ����쳾��Ⱦ��
LONG);



  set("exits", ([
            "north"  : __DIR__"32",
            "east"   : __DIR__"30",
                ]));

  set("objects", ([ 
  __DIR__"npc/gold-guard-out" : 3,
                  ]));        

        setup();
}
