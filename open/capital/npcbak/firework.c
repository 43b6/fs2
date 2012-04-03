#include <ansi.h>

inherit NPC;

string	*word=({ "囍", "百年好合", "永结同心", "新婚致庆", "永浴爱河",
		 "琴瑟合鸣", "早生贵子", "双喜临门", "白头偕老", "比翼双飞",
	      });
void create()
{
	set_name("炮队",({"firework"}));
	set("long", "这是炮队，赶在花轿俊马的前头放鞭炮，"
		    "一面驱邪一面带来喜气。\n");
	set("age",24);
	set("gender","男性");
	set("no_kill",1);
	setup();
}

int start_marry()
{
  call_out("firework", 6+random(5));
  return 1;
}

int firework()
{
  remove_call_out("firework");
  message_vision(HIY"炮队不时拿根香点燃手中的鞭炮。\n"NOR, this_object());
  CHANNEL_D->do_channel(this_object(), "mud",
	HIR"碰...天空中显现出大大的\n\n\t"+word[random(sizeof(word))]+"\n\n"NOR,
	users());

  call_out("firework", 8+random(10));
  return 1;
}

int stop_firework()
{
  remove_call_out("firework");
  return 1;
}
