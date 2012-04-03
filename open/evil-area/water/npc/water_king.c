inherit NPC;
#include <ansi.h>

void create()
{
	set_name("水柔缠",({"water king","king"}));
	set("age",15012);
	set("gender","女性");
	set("long","
她就是邪灵界五大邪将，掌管水行区域的邪将--水柔缠，一
副清晰可人的脸孔，似水柔缠的气息，感觉上仿佛一位弱不
经风的女子，谁会将她与残冷无道的邪灵扯在一起ㄋ??....
如今，她就犹如一位断了线的人偶，不断的哭泣，你看她哭
的面黄饥瘦，或许应该赶快将手上的餐\食给她吧...\n");
	set_skill("unarmed",300);
	set_skill("dodge",300);
	set_skill("force",400);
	set_skill("move",300);
	set("no_kill",1);
	setup();
}

int accept_object(object me,object obj)
{
object ob = this_object();

	if( obj->query("id") == "evil-foods" )
	{
		if( me->query_temp("evil/water/ask-mission-4") )
		{
			message_vision("$N望着$n给的"+obj->name(1)+"，渐渐的眼泪\缓缓的从眼颊滑落...\n",ob,me);
			command("sigh");
			command("say 想必夫郎一定挨饿于地狱牢内...我如何咽的下食ㄋ...:~...\n");
			message_vision("说完，$N拿起"+ob->name(1)+"，打开窗户便往外丢～\n",ob);
			me->set_temp("evil/water/hall",1);
		}
	}
call_out("do_dest",1,obj);
return 1;
}

int do_dest(object obj)
{
destruct(obj);
}
