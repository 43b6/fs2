
#include </open/open.h>
inherit ROOM;
void create ()
{
set ("short", "���з�");
set ("long", @LONG

    ���������ר�Ÿ�����Ӷ������ң������ĵط�����
��һЩװ����..�����ͷ�ʳ���..һЩ�����Ӱ˵ĵط���
�������ס�⡫���ǲ��ᷴ�ԡ�������

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"r36.c",
]));
  set("light_up", 1);
  set("no_magic", 1);
  set("no_kill", 1);
  set("no_fight", 1);
  setup();
}
 void init()
{
add_action("do_spp","spp");
add_action("do_jump","jump");
}
int do_spp()
{
  object me;
  me = this_player();
  if(me->query("class")!="soldier")
 return notify_fail("ֻ��ְҵӶ�����á�\n");
 me->move("/open/ping/room/road3");
  return 1;
}
int do_jump()
{
object me;
me=this_player();
if(me->query("class")!="soldier")
return notify_fail("ֻ��ְҵӶ�����á�\n");
me->move("/open/soldier/room/r1.c");
return 1;
}
 
