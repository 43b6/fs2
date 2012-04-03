inherit NPC;
#include <ansi.h>
inherit SSERVER;

void create() 
{
        set_name("����",({"fly-worm","worm"}));
        set("long",
            "\n���ǰ����ڻý���а�飬һ�ŵ�������Ϣ�ͱĳ������ˡ�\n");
        set("age",1937);
        set("str",30);
        set("cor",30);
        set("race","Ұ��");
        set("gender","����");
        set("attitude","aggressive");
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
	set("evil_mob",1);
        set("limbs",({"ͷ��","β��","ǧ�ڱ�","צ��","���"}));
        set("verbs",({"dunt","claw","poke"}));
        set_temp("apply/armor",100);
        set_temp("apply/damage",100);
        setup();
}

void heart_beat()
{
	object ob,env,target;
	int sk1,sk2;

	ob = this_object();
	env = environment(ob);
	if(random(100) < 70)
	{
    	target = offensive_target(ob);
	sk1 = (int)ob->query_skill("parry");
	sk2 = (int)target->query_skill("parry");
		if( env == environment(target) && random(sk1) > random(sk2))
		{
                message_vision("
\n$N"HIR"���������һ�$nһ��С�ı������ˡ�\n"NOR,ob,target);
                COMBAT_D->report_status(target,1);
                target->start_busy(2);
		}
	}
set_heart_beat(1);
::heart_beat();
}
