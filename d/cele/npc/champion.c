// servant.c

#include <ansi.h>
inherit NPC;
inherit F_MASTER;

void create()
{
	set_name("��������", ({ "master champion", "champion", "master" }) );
	set("title", "ˮ�̸󴫹�ʹ");
	set("nickname", "����а");
	set("gender", "����");
	set("age", 54);
        set("class","fighter");
	set("long",
		"���������ǵ�����ϵ��常������������������ѧ����Ը�����ٻ���\n"
		"�Ի�ȡˮ�̸󴫹�ʹһְ���Ա���\��ˮ�̸������ص���ѧ�伮������\n"
		"����ʲô��ѧ�ϵ����ѣ�������Ϊ����\n");

	set("attitude", "peaceful");
	set("combat_exp", 10000000);
	set("score", 200000);

	set("str", 40);
	set("int", 30);
	set("cor", 30);
	set("cps", 30);
	set("con", 30);

	set("force", 40000);
	set("max_force", 40000);
	set("force_factor", 50);
        set("max_kee", 30000);
        set("kee", 35000);
	set("inquiry", ([
		"��ѧ": "��ѧ֮��....��....ֻ����ᣬ����������\n",
		"ˮ�̸�": "ˮ�̸��������������������йݣ�����ʲô��Ҫ������������\n",
		"��ʦ": "Ŷ....�Ϸ������и���أ����������Ϊʦ�ģ��ý������в�������������(accept test)��\n"
	]) );

	set("chat_chance_combat", 80);
	set("chat_msg_combat", ({
                (: exert_function, "roar" :),
		(: exert_function, "powerup" :),
	}) );
	create_family("��а��", 15, "����");
	assign_apprentice("����", 0);

	set_skill("force", 200);
	set_skill("unarmed", 200);
	set_skill("sword", 80);
	set_skill("blade", 250);
	set_skill("parry", 200);
	set_skill("dodge", 80);
	set_skill("celestial", 200);
	set_skill("celestrike", 200);
	set_skill("spring-blade", 270);
	set_skill("pyrobat-steps", 200);

	map_skill("force", "celestial");
	map_skill("unarmed", "celestrike");
	map_skill("blade", "spring-blade");
	map_skill("dodge", "pyrobat-steps");

	setup();

	carry_object("/d/cele/obj/houndbane")->wield();
}

void init()
{
	::init();
	add_action("do_accept", "accept");
}


int do_accept(string arg)
{
	mapping guild;

	if( arg== "test" ) {
		say("\n����������˵�ͷ��˵�����ܺã����ǵ�һ��....\n\n");
		COMBAT_D->do_attack(this_object(), this_player(), query_temp("weapon"));
		if( (int)this_player()->query("kee") < 0 
		|| !present(this_player(), environment())) {
			say("��������̾�˿�����˵��������һ�ж��Ų����������Բ�����....\n");
			return 1;
		}
		say("\n��������˵�������ǵڶ���....\n\n");
		COMBAT_D->do_attack(this_object(), this_player(), query_temp("weapon"));
		if( (int)this_player()->query("kee") < 0 
		|| !present(this_player(), environment())) {
			say("�������䡸�ߡ���һ����˵��������������಻�����ļһ�....\n");
			return 1;
		}
		say("\n��������˵��������������....\n\n");
		COMBAT_D->do_attack(this_object(), this_player(), query_temp("weapon"));
		if( (int)this_player()->query("kee") < 0 
		|| !present(this_player(), environment())) {
			say("��������̾������ϧ���ѵ��Ϸ�һ���书���޴���....\n");
			return 1;
		}
		say("\n�������������Ц��˵���������Ϸ������ٵ�һ������֮�ţ�\n\n");
		command("recruit " + this_player()->query("id") );

                message("system",HIY"һ�����׺���������ƿն���
              �ͺ��ƴ�Զ����������ѶϢ.....

       ����ǰ�����ֵ�һ�� ��������������Ц�� :
       Ӣ�۳����� ,"+this_player()->name()+"
       ��\��\��ʹ\��\��\��\֪\��\��ѧȫ���úô��ڸ���.\n"NOR,users());
        }
		return 1;
	}

