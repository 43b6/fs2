// by roger
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short",HIY"������"NOR);
set ("long", @LONG
������ң����߷·𶼱�������һ�㣬������ҹ������΢�Σ�ԭ��  
��һ�Ŵ���ţ�۵�ҹ���飬ҫ�����£�������ǽ��ϸ��¥һ¥¥
���������ػ��콫֮һ�������������죬��Ҫ����¥�����ͱ�����
�����򵹡�
LONG);



  set("exits", ([
            "north"  : __DIR__"a5",
            "south"  : __DIR__"a6",
            "enter"  : __DIR__"a18",
                ]));

  set("objects", ([ 
  __DIR__"npc/lin-mo" : 1,
                  ]));
       

        setup();
}

int valid_leave(object me, string dir)

{
        if(dir=="enter" && present("lin-mo",environment(me)))
  {

message_vision(HIY"����˵: �Բ���, ¥��������Ϣ. \n"NOR,me);

return 0;
}
return 1;
}
