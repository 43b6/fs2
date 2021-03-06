inherit NPC;
inherit SSERVER;
#include <ansi.h>

void create()
{
	set_name("女王蜂",({"queen of bee","bee"}));
	set("long","
牠就是统领着这棵树的女王蜂,不过形体似乎与一般的蜜蜂不同。\n");
	set("race","野兽");
	set("gender","雌性");
	set("age",300);
	set("kar",30);
	set("max_gin",40000);
	set("max_kee",45000);
	set("max_sen",30000);
	set_skill("dodge",200);
	set_skill("force",100);
	set_skill("unarmed",200);
	set_skill("parry",200);
        set("limbs",({"头部","尾部","千节背","尾毒刺","翅膀"}));
        set("verbs",({"dunt","claw","poke"}));
	setup();
}

void heart_beat()
{
	object ob,env,target;

	ob = this_object();
	env = environment(ob);


        target = offensive_target(ob);
        if( env == environment(target) )
        {
                message_vision(HIY"\n
一瞬间～一堆鼓蜂飞了过来攻击你～\n
\n$N〔咻～〕的一声飞走了～其它的鼓蜂也跟着飞走了～\n"NOR,ob);
                target->receive_wound("kee",500);
                COMBAT_D->report_status(target,1);
                target->start_busy(1);
                destruct(ob);           

	}
set_heart_beat(1);
::heart_beat();
}

int accept_object(object me,object ob)
{
	if( (int)me->query_temp("evil/water/mission") == 3 )
	{
		if( ob->query("id") == "flower nectar" )
		{
			message_vision("$N震动着翅膀，在树周围飞绕的鼓蜂们仿佛回应似的飞了过来～\n",this_object());
			(int)me->set_temp("evil/water/mission",4);
			call_out("do_dest",1,ob);
		return 1;
		}
	}
	message_vision("一群鼓蜂突然围了过来～$N一时候到惊吓，整个人失去了重心...\n",me);
	tell_object(me,HIY"你心想：完了...:~...\n"NOR);
	me->move("/open/evil-area/water/b-20");
	me->receive_wound("kee",800);
	COMBAT_D->report_status(me,1);
	message_vision(HIR"\n$N重重的从树上跌落于地～\n"NOR,me);
	call_out("do_dest",1,ob);
return 1;
}

int do_dest(object ob)
{
	destruct(ob);
}