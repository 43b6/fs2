// by roger
inherit ROOM;
#include <ansi.h>
#include "wind-rain.h"
void create () {
set ("short",HIB"��ҹ��"NOR);
set ("long", @LONG
һ����ң����߷·𶼱�������һ�㣬������ҹ���������Ө�⣬ 
��Ϊ���ǹ�������ȴ���������죬������ǽ��ϸ��¥һ¥¥����
�����ػ��콫֮һ����������ҹ�죬��Ҫ����¥�����ͱ����Ƚ���
�򵹡�
LONG);



  set("exits", ([
            "north"  : __DIR__"a13",
            "south"  : __DIR__"a12",
            "enter"  : __DIR__"a18",
                ]));

  set("objects", ([ 
  __DIR__"npc/charn-kai" : 1,
                  ]));
       

        setup();
}

int valid_leave(object me, string dir)

{
        if(dir=="enter" && present("charn-kai",environment(me)))
  {

message_vision(HIY"�ſ�˵: �Բ���, ¥��������Ϣ. \n"NOR,me);

return 0;
}
return 1;
}
