
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "�ű���¥");
  set ("long","ǽ���ϵ�������ɫ�Ĺ����ϸһ�����ɿ�������\���������ɵ�������
���������\����ֻ�۾��������������͸�ſֲ�����Ϣ������Ҳ���ź�
��ĵ�̺�����˲�������ض������������ܵ���ħ�ƺ�Ҳ�����������
����Ҳ�º͵Ķ࣬��һ�����տ�������¥�µ����й�֮���޲������㲻
�������Լ�������ħ�磿
           
                  ǰ���ƺ����������ߵ��У�
");
set("evil", 1);
set("no_auc", 1);
set("no_transmit", 1);
set("light_up", -1);

  set("exits", ([ /* sizeof() == 1 */
  
  "north" : __DIR__"room47",
  "south" : __DIR__"room40",
  "west" : __DIR__"room67",
  "east" : __DIR__"room74",
]));
  
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/drunk-ghost.c" : 1,
]));

  setup();
}
int valid_leave(object me, string dir)

{
        if(dir=="north"&&present("ghost",environment(me)))
  {

message_vision(HIY"��ħ��˵������...������һ̳...��\n"NOR,me);

return 0;
}
return 1;
}
