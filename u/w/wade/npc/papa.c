#include <ansi.h>

inherit NPC;

void create()
{
  seteuid(getuid());
  set_name( "爸爸", ({ "papa" }) );
  set("long", @LONG
你正盯着自己的爸爸看着, 看他满怀心事的样子, 整天忧愁苦脸的,
不知是为了哪一桩事情在担忧, 做儿子的您是不是能够帮帮他呢?
LONG);
  set("gender", "男性" );
  set("race", "人类");
  set("age",55);

  setup();
}

string short()
{
  object	me=this_player();

  return sprintf ("%s的爸爸(%s' papa)", me->name(), me->query("id"));
}

int accept_fight(object who)
{
  say ("你....你这不肖子, 你老爸这把骨头你也想跟我动手动脚....\n");
}

int accept_kill(object who)
{
  say ("你....你这不肖子, 连你老爸你都想砍....\n");
}
