// by roger
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short",HIM"�ڹ���"NOR);
set ("long", @LONG
������ң����߷·𶼱�������һ�㣬������ҹ�����ǲ�����ָ�� 
�������������˱Ƕ�������������������ǽ��ϸ��¥һ¥¥��
�������ػ��콫֮һ���������ڹ��죬��Ҫ����¥�����ͱ����Ƚ�
���򵹡�
LONG);



  set("exits", ([
            "north"  : __DIR__"a2",
            "south"  : __DIR__"a9",
            "enter"  : __DIR__"a18",
                ]));

  set("objects", ([ 
  __DIR__"npc/shon-to" : 1,
                  ]));
       

        setup();
}

int valid_leave(object me, string dir)

{
        if(dir=="enter" && present("shon-to",environment(me)))
  {

message_vision(HIY"����˵: �Բ���, ¥��������Ϣ. \n"NOR,me);

return 0;
}
return 1;
}
