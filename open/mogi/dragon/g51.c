// Room: /u/p/poloer/dragon/g51
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "�ؿ�");
  set ("long", @LONG
����һ¥ͨ����¥��;�С�������ǰ��λ�ߴ���˵�ס���ȥ·��
�����Űѽ���ɱ�����ڵģ��������ơ�
LONG);
  set("evil", 1);
  set("no_auc", 1);
  set("no_transmit", 1);
  set("light_up", -1);
  set("exits", ([ /* sizeof() == 2 */
  "up" : __DIR__"g2-1",
  "down" : __DIR__"g5",
]));
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/ghostman.c" : 1,
]));

  setup();
}

int valid_leave(object me, string dir)

{
        if(dir=="up"&&present("ghost",environment(me)))
  {

message_vision(HIY"����ڤ��ŭ���˵:�����˵Ȳ������ڡ�\n"NOR,me);

return 0;
}
return 1;
}
