inherit NPC;
#include <ansi.h>

void create()
{
	set_name("�����",({"golden horse","horse"}));
	set("age",9991);
	set("long","
һƥ��̬�ƹ����а���ս�������ƺ��Ѿ��е�����ˡ�\n");
        set("str",30);
        set("cor",30);
        set("race","Ұ��");
        set("gender","����");
        set("max_gin",6000);
        set("max_kee",6000);
        set("max_sen",6000);
        set("max_force",20000);
        set("force",20000);
        set("force_factor",20);
        set("combat_exp",800000);
        set_skill("unarmed",300);
        set_skill("dodge",300);
        set_skill("move",300);
        set_skill("parry",300);
        set_skill("force",250);
        set("limbs",({"��ͷ","���","����","��","��"}));
        set("verbs",({"bite","claw"}));
        set_temp("apply/armor",100);
        set_temp("apply/defense",100);
        set_temp("apply/damage",100);
        set_temp("apply/attack",100);
        setup();
}

int accept_object(object me,object obj)
{
object ob = this_object();
int i;

	(int)me->add_temp("evil/water/horse",1);
	i = (int)me->query_temp("evil/water/horse");

	if( obj->query("id") == "cotton grass" )
	{
		if( (int)me->query_temp("evil/water/mission") == 2 && i > 3)
		{
			message_vision("$N"HIG"����$nһֱ�������������ͷ�����ĳ����޲ݡ�\n"NOR,ob,me);
			(int)me->set_temp("evil/water/mission",3);
			me->delete_temp("evil/water/horse");
			call_out("do_dest",1,obj);
			return 1;
		}
	}
	me->receive_wound("gin",200);
	me->receive_wound("kee",300);
	me->receive_wound("sen",100);
	message_vision("$N"HIC"ͻȻ�����㣬��Ȼת�������ţ��ݺݵ�����$n��\n"NOR,ob,me);
	COMBAT_D->report_status(me,1);
	message_vision(HIY"$N���߷ɳ������\��\n"NOR,me);
	me->move("/open/evil-area/water/b-21");
call_out("do_dest",1,obj);
return 1;
}

int do_dest(object obj)
{
destruct(obj);
}