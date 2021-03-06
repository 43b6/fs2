#include "/open/open.h"

inherit ITEM;
//inherit F_LIQUID;

void create()
{
	set_name("茶壶", ({ "teapot" }) );
	set_weight(700);
	set("long", "这是一只大茶壶。\n");
	set("unit", "只");
	set("value", 50);
	set("饱和", 40);

	// The liquid contained in the container is independent, we set a copy
	// in each cloned copy.
	set("液体", ([
		"种类": "茶",
		"名称": "迈撕萎耳红茶",
		"剩": 35,
		"止渴" : 30,
		"drunk_apply": 8,
	]) );
	setup();
}

void init()
{
  add_action("do_send", "send");
}

int do_send(string arg)
{
   object me=this_player(), day;
   string name, what;

  if (!arg) return 0;
  if ( sscanf (arg, "%s to %s", what, name) != 2) return 0;
  if (what != "teapot" && name != "day") return
	notify_fail ("你要把什么送给谁?\n");

  if (!day=present("day", environment(me)))
    return notify_fail ("燕南天并不在这儿啊。\n");

  if (me->query_temp("quests/badman_license") >= 5 && query_temp("has_drug")) {
    me->set_temp("quests/badman_license", 6);
    message_vision ("燕南天喝了药茶之后两脚一撑......\n", me);
    day->die();
  }
  else
    message_vision ("燕南天喝了药茶之后，显得神清气爽。\n", me);

  destruct(this_object());
  return 1;
}
