// Room: /u/p/poloer/dragon/enterroom
inherit ROOM;
#include <ansi.h>
void create ()
{
  set ("short", "[1;32m���������[2;37;0m");
  set ("long", @LONG
һ��λ��ɽ���µĵط���Ҳ���Ǵ�˵���׶�������صĵط�
����������ɽ�Ͽ�ȥ��Լ��ɽ������һ����Ĺ��һ��С·
�ӹ���һֱ���쵽ɽ������ɽ�������ڸ�ס�ˣ���������ʲô��
�������ܿ������������������������ֲֿ��ġ��Ա���һ��ʯ��
(stone)����·���롣
      ����һƬ��ãã�������κγ�·��
LONG);

  set("item_desc", ([ /* sizeof() == 1 */
  "stone" : "
   �书δ�죬��·һ��
         
         
   ",
]));
  set("no_transmit", 1);
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/fire-dra.c" : 2,
]));
  set("exits", ([ /* sizeof() == 2 */
  "enter" : __DIR__"a2",
  "east" : __DIR__"dr10",
]));

  setup();
}
int valid_leave(object me, string dir)

{
        if(dir=="enter"&&present("fire-dragon guard",environment(me)))
  {
if(me->query("combat_exp") < 299999 ||
me->query("max_force") <999)
{
message_vision("������ʿ��$Nŭ�� : ���������������ɽ�������\n",me);
return 0;
}
}
return 1;
}
