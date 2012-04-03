// Room: /u/m/moner/water/mblade/r4.c
inherit ROOM;

void create ()
{
  set ("short", "密室");
  set ("long", @LONG

这是一间密室，四周光线极弱，眼前有一位白发飘散，眼神凌
立的人，可是此室散发出难闻臭味，眼前的人似乎被关在这。

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "up" : __DIR__"r3.c",
]));
set("objects",([
"/daemon/class/blademan/npc/old-man.c":1,
]));
set("no_transmit", 1);
  setup();
}
void init()
{
add_action("do_jump","to-jump");
}
int do_jump(string str)
{
  object me;
  me=this_player();
if(me->query_temp("can_jump")!=1)
return notify_fail("跳....跳....你要跳河呀！\n");
  if( str != "hole" )
return notify_fail("不要在地上乱爬啦？\n");
message_vision("[1;34m你找到一个秘洞，就奋力往洞内一跳！\n[0m",me);
me->move("/daemon/class/blademan/bladeroom.c");
me->set_temp("can_jump",0);
  return 1;
}
