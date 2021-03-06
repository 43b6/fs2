// throw.c

#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;

int main(object me, string arg)
{
	object obj,ob;
	object target;
	string st1,st2;
	int re_value;
	int ob_value;
	if(!arg || sscanf(arg,"%s use %s",st1,st2)!=2 )
		return notify_fail("指令格式：bribe <人> use <物品>\n");
	if(!ob=present(st2,me))
		return notify_fail("你的身上没有这种东西。\n");
	if(me->is_fighting())
		return notify_fail("战斗中无法贿赂。\n");

	if(!st1 || !objectp(obj = present(st1,environment(me))))
		return notify_fail("这里没这人。\n");

	if( !obj->is_character() )
		return notify_fail("看清楚一点，那并不是生物。\n");

	if(wizardp(obj)) return notify_fail("贿赂巫师 ?\n");
	
	if(obj->query("class")!="officer")
		return notify_fail("你只能会赂赂朝廷命官。\n");
 
	message_vision(
	"$N从身上拿出"+ob->name()+"交给$n。\n",me,obj);
	message_vision(
	CYN "$N说道：这是一点小意思，请笑纳。\n" NOR,me);
	me->add("sen",-10);
	re_value=me->query("relation/"+obj->query("id")+"/value");
	if(ob->query("value")) ob_value=ob->query("value");
		else ob_value=ob->query("base_value");
 	if(obj->query("officer_att")!="good")
		if(ob_value<re_value*obj->query("max_officer_power")*5||(re_value<0&&ob_value<re_value*(-1)*obj->query("max_officer_power")*10))
		{
		message_vision(
		CYN "$n说道：这么点破东西也想收买我 !!\n" NOR,me,obj);
		message_vision(
		"$n把"+ob->name()+"还给$N。\n",me,obj);
		if(re_value>0)
		me->add("relation/"+obj->query("id")+"/value",random(10)*(-1));
		else
		me->add("relation/"+obj->query("id")+"/value",random(3)*(-1));
		me->set("relation/"+obj->query("id")+"/name",obj->name());
		me->set("relation/"+obj->query("id")+"/power",obj->query("max_officer_power"));
		me->add("office_exp",1);
		}
		else
		{
		message_vision(
		CYN "$n笑道：既然"+me->name()+"大人这么客气，我也就恭敬不如从命了。\n" NOR,me,obj);
		me->add("relation/"+obj->query("id")+"/value",1);
		me->set("relation/"+obj->query("id")+"/name",obj->name());
		me->set("relation/"+obj->query("id")+"/power",obj->query("max_officer_power"));
		destruct(ob);
		me->add("office_exp",random(me->query("relation/"+obj->query("id")+"/value")*500));
		}
	else
	{
		message_vision(
		CYN "$N喝道：本官向来为官清正，不收脏秽之物 !!\n" NOR,obj);
		message_vision(
		"$n把"+ob->name()+"还给$N。\n",me,obj);
		me->add("relation/"+obj->query("id")+"/value",random(10)*(-1));
		me->set("relation/"+obj->query("id")+"/name",obj->name());
		me->set("relation/"+obj->query("id")+"/power",obj->query("max_officer_power"));
		me->add("office_exp",1);
	}
	return 1;
}
 
int help(object me)
{
   write(@HELP
 
指令格式：bribe <贿赂> use <物品>
 
说明：这个指令可以让你贿赂朝廷命官。
 
HELP
   );
   return 1;
}
