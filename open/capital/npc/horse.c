inherit NPC;

void create()
{
	set_name("俊马",({"horse"}));
	set("short", "俊马");
	set("race", "野兽");
	set("light_up",1);
	set("no_kill",1);
	setup();
}

void init()
{
  add_action("do_look", "look");
}

int do_look (string arg)
{
  object	me, env;

  me = this_player();
  if (!arg || arg != "out") return 0;

  env = environment();

  "/cmds/usr/look"->look_room(me, env, 1);
  return 1;
}

int start_marry(object husband)
{
  string	name=husband->query("name");

  set("short", "新郎官"+name+"的俊马(Horse)");
  set("long", "这是一匹高大挺俊的马匹，身上到处都结满红丝带，显得喜气洋洋\n"+
              "的样子，现在在上面坐着的正是新郎官--"+name+"。\n");
}
