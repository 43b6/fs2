#include "/open/open.h"
inherit ROOM;
void create ()
{
set ("short", "魔刀休息室");
set ("long", @LONG

这个房间是给魔刀的所有弟子休息，打屁，喝茶，聊天的地方。
也可以把 EQ 存放于此，除了魔刀的人，其他人都没办法进来。
魔刀弟子还能在此打(secret)，能直接去平南城喔。
魔刀绝世传人在此打(fly)，能直接去神秘老人那喔。

魔刀不成文规定 :

1. pkla 严禁穿 bell_ring
2. horse 不能改 name (如真的要改要跟自己 name 一样)
3. 要压好自身的杀气
4. 不要乱用 order
5. 如有解到邪灵 pkla 时请不要用 毁器型
6. pkla 禁拿屠龙刀

以上六点请大家遵守  如有违反者将"处死一次" 

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"secret",
]));
  set("light_up", 1);
  set("no_magic", 1);
  set("no_kill", 1);
  set("no_fight", 1);
  setup();
call_other("/obj/board/evblade_b","???");
}
 void init()
{
  add_action("do_secret","secret");
  add_action("do_fly","fly");
}
int do_secret()
{
  object me;
  me = this_player();
  if(me->query("class")!="blademan")
 return notify_fail("只有魔刀门徒能用。\n");
 me->move("/open/ping/room/road3");
  return 1;
}
int do_fly()
{
object me;
me=this_player();
if(me->query("family/family_name")!="魔刀莫测")
return notify_fail("只有魔刀绝世传人能用。\n");
me->move("/open/gblade/room/room26.c");
return 1;
}
