#include <ansi.h>
inherit NPC;

void create()
{
	set_name("乐队",({"music"}));
	set("long", "这是一群锣鼓队，人数约有五十个，"
		    "正用力的敲敲打打，好不热闹哩。\n");
	set("age",30);
	set("gender","男性");
	set("no_kill",1);
	setup();
}

int start_marry()
{
  call_out("music", 6+random(5));
  return 1;
}

int music()
{
  remove_call_out("music");
  message_vision(HIY"乐队不时敲敲打打，倒是颇为热闹。\n", this_object());
  call_out("music", 5+random(3));
  return 1;
}
