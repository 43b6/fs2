inherit NPC;

void create()
{
	set_name("媒婆",({"po"}));
	set("long", "她是这次婚礼的媒婆，看她口开眉笑的样子，"
		    "似乎拿了不少红包哩。\n");
	set("age",50);
	set("gender","女性");
	set("no_kill",1);
	setup();
}
