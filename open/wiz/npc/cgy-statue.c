inherit NPC;
#include <ansi.h>
void create()
{
	set_name("傅剑寒的雕像",({"cgy statue","cgy"}));
	set("long","狂想之神。狂想的玩家为了能瞻仰他，纪念他的德行，所以特别建立了此一雕像。\n你可以试着(pray id)也许有奇妙的效果喔!!\n");
	set("title",HIR"恶魔城主"NOR);
	set("nickname",HIW"神"HIG"剑"HIC"飞"HIY"龙"NOR);
	set("unit","尊");
	set("age",291);
	set("value",100);
	set("no_get",1);
	set("no_kill",1);
	set("no_fight",1);
	set("no_sac",1);
	set("no_auc",1);
	set("env/can_tell_wiz","YES");
	set("no_reset",1);
	set_weight(500000);
	setup();
}

init()
{
	add_action("do_pray","pray");
}

int do_pray(string arg)
{
	object me=this_player();

	call_out("greeting",2,me,arg);
	message_vision(HIW"一阵光芒笼罩$N"HIW"的全身，光芒过后，已将$N"HIW"的祈祷传送到大神的耳边。\n"NOR,me);

	return 1;
}

void greeting(object ob,string arg)
{
	object me;
	me=this_player();
	command("tell "+arg+" "+me->query("name")+"("+me->query("id")+")传送一份祝福的祈祷给您!!\n ");

}
