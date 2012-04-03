inherit NPC;
inherit SSERVER;
#include <ansi.h>

void create()
{
	set_name("Ů����",({"queen of bee","bee"}));
	set("long","
������ͳ�����������Ů����,���������ƺ���һ����۷䲻ͬ��\n");
	set("race","Ұ��");
	set("gender","����");
	set("age",300);
	set("kar",30);
	set("max_gin",40000);
	set("max_kee",45000);
	set("max_sen",30000);
	set_skill("dodge",200);
	set_skill("force",100);
	set_skill("unarmed",200);
	set_skill("parry",200);
        set("limbs",({"ͷ��","β��","ǧ�ڱ�","β����","���"}));
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
һ˲�䡫һ�ѹķ���˹��������㡫\n
\n$N���ݡ�����һ�������ˡ������Ĺķ�Ҳ���ŷ����ˡ�\n"NOR,ob);
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
			message_vision("$N���ų��������Χ���ƵĹķ��Ƿ·��Ӧ�Ƶķ��˹�����\n",this_object());
			(int)me->set_temp("evil/water/mission",4);
			call_out("do_dest",1,ob);
		return 1;
		}
	}
	message_vision("һȺ�ķ�ͻȻΧ�˹�����$Nһʱ�򵽾��ţ�������ʧȥ������...\n",me);
	tell_object(me,HIY"�����룺����...:~...\n"NOR);
	me->move("/open/evil-area/water/b-20");
	me->receive_wound("kee",800);
	COMBAT_D->report_status(me,1);
	message_vision(HIR"\n$N���صĴ����ϵ����ڵء�\n"NOR,me);
	call_out("do_dest",1,ob);
return 1;
}

int do_dest(object ob)
{
	destruct(ob);
}