inherit ITEM;

void create()
{
        set_name("药粉", ({ "drug powder", "drug", "powder" }) );
        set("unit", "包");
        set("long", "一堆药粉，似乎可以下(put)在茶水里。\n");
        set("no_sell", 1);
	setup();
}

void init()
{
  add_action("do_put", "put");
}

int do_put (string arg)
{
  object	me=this_player(), tea;

  if (!arg && arg != "drug" && arg != "powder" && arg != "drug powder")
	return 0;
  
  if (!tea=present("teapot", me))
	return notify_fail ("你想把药下在什么容器内呢?\n");

  tell_room (environment(me), "你看到"+me->name()+"鬼鬼祟祟的把"+
	"手中的粉放入茶壶中。\n", me);
  if (me->query_temp("quests/badman_license")>=4 &&
	tea->query("液体/剩") > 0)
  {
    me->set_temp("quests/badman_license", 5);
    tell_object(me, "你把手中的蒙汉药放入茶壶中。\n");
    tea->set_temp("has_drug",1);
  }
  else tell_object(me, "你把手中的药粉放入茶壶中。\n");
  tea->set("long", "一壶放了药粉的茶水，似乎可以送(send)人喝...*grin*\n");
  destruct (this_object());
  return 1;
}
