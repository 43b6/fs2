
// Room: /u/p/poloer/dragon/g2-5
inherit ROOM;
#include <ansi.h>

void create ()
{
  set ("short", "ħ�����¥");
  set ("long", @LONG

����һƬ�����ģ�ֻ�ܴ�����ϵ�©����Ͷ��һ������������
��������ʱ����ʬ�帯�õĶ�����������ǳ��Ĳ������ǰ���ƺ�
��һ���ţ���ǰ��Լ���Կ���һ����Ӱ�ڻζ���  ��������

LONG);

  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/ghostwom.c" : 1,
]));
  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"g2-4",
  "enter" : __DIR__"endroom",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}

int valid_leave(object me, string dir)

{
        if(dir=="enter"&&present("ghost",environment(me)))
  {

message_vision(HIW"������˵:���ȥ�ȹ�����أ��������ɡ�\n"NOR,me);

return 0;
}
return 1;
}

