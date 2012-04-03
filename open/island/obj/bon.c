#include "/open/open.h"
#include <ansi.h>
inherit ITEM;

void create()
{
        set_name(HIW+"天鼓‘"HIC"雷音"HIW"’"+NOR, ({ "drum" }) );
        set_weight(700);
        set("long", "传闻跟四大神兽的龟有关 ,然而没用过谁也不知道... 
用法是use drum at xxx。\n");
        set("unit", "只");
        set("value", 5000);
       set("no_put", 1);
       set("no_sell", 1);
       set("no_drop", 1);
       set("no_give", 1);
        setup();
}

void init()
{
  add_action("do_use", "use");
}

int do_use(string arg)
{
   object me=this_player(), turtle;
   string name, what;

  if (!arg) return 0;
  if ( sscanf (arg, "%s at %s", what, name) != 2) return 0;
  if (what != "drum" && name != "turtle") return
        notify_fail ("你在做什么??\n");

  if (!turtle=present("turtle", environment(me)))
    return notify_fail ("一道闪电劈下来 ,但什么事都没发生。\n");

 
    message_vision (HIW"一道天雷直劈下来 ,将盘古真龟的龟壳粉碎了\n"NOR, me);
   destruct(turtle);
   
 new("/open/island/npc/turtle2.c")->move("/open/island/room/cold.c");   
message_vision (HIC"天鼓‘雷音’也随后化成飞灰...\n"NOR, me);
destruct(this_object());

  return 1;
}

