
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "�ű���¥");
  set ("long","���ڵ���������ʱ��һ·ɱ���������յ�Ŀ�ľ���Ҫ��������ħ��
��®ɽ����Ŀ����ǰ��ڰ�˫ɲ���Ƿ�������󻤷�����ǧ����һֱ��ʵ
��������ħ�������ǲ������о��˾��ж����໥��Ӧ�Ĺ�����ʽ���Ƿ�ͬ
С�ɡ�
");
set("evil", 1);
set("no_auc", 1);
set("no_transmit", 1);
set("light_up", -1);

  set("exits", ([ /* sizeof() == 1 */
  
  "north" : __DIR__"room93",
  "east" : __DIR__"room64",
]));
  
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/black-ghost" : 1,
  __DIR__"npc/white-ghost" : 1,
]));

  setup();
}
int valid_leave(object me, string dir)

{
        if(dir=="east"&&present("ghost",environment(me)))
  {

message_vision(HIY"�ڰ�˫ɲ˵:��������¶һ�־��˵���ҵ�ɣ���\n"NOR,me);

return 0;
}
return 1;
}
