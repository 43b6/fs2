//seiya.c
#include <ansi.h>
inherit NPC;
void do_special();

mapping *action = ({
([     "action"     :   "$N��У�����������ȭ����ɲ�Ǽ�ȭӰ��£��$n��ȫ��",
                "dodge"      :   -35,
                "parry"      :   -35,
		"damage"     :190,
                "force"      :    200,
                "damage_type":   "����",
           ]),
([    "action"     :   "$N����ȫ���С���棬��$nʹ���ˡ���������ȭ��",
                "dodge"      :    40,
                "parry"      :   -50,
		"damage"     :240,
                "force"      :    180,
                "damage_type":   "����",
            ]),
   });

void create()
{
        set_name("��ʸ", ({"seiya"}));
        set("age",15);
        set("long","������ͭ����ʥ��ʿ��������ʥս��һֱ�ǻ������ŵ���Ů��\n"
        "�����ڵ�ʵ����Զ�����ƽ�ʥ��ʿ�����ŵ������ĵĻ�����\n"
        "�λõ������˹����˵������չ������ѩ�׵�����ӭ��һ����ս��\n");
	set("title",HIW"������"NOR+ HIG"ʥ��ʿ"NOR);
        set("gender","����");
        set("str",30);
        set("cps",30);
        set("kar",30);
        set("spe",30);
        set("int",30);
        set("cor",30);
        set("attitude","herosim");
        set("max_gin",1000);
        set("max_kee",3000);
        set("max_sen",1000);
        set("gin",1000);
        set("kee",3000);
        set("sen",1000);
        set("combat_exp",1450000);
        set("max_force",10000);
        set("force",10000);
        set("max_atman",5000);
        set("max_mana",5000);
        set("atman",5000);
        set("mana",5000);
        set("force_factor",30);
        set_skill("dodge",200);
        set_skill("unarmed",200);
        set("chat_chance_combat",50);
        set("chat_msg_combat",({
        (: do_special :)
        }));
        set("inquiry",([
	    "�ŵ���" : "����ʥ����ػ��ߡ�\n",
	    "�̻�" : "��ɶ�Ľ̻ʣ���ʵ��˫�����ƽ�ʥ��ʿ��\n",
	    "˫����" : "ʮ����ǰ�Ĵ��󣬵������ڵ������\n",
	    "���" : "����Ů���������Σ���ˣ�$N�����������ǵ���\n",
            ]) );
	set_temp("apply/armor",400);
        set_temp("apply/damage",100);
        setup();
        set("default_actions", (: call_other, __FILE__,"query_action" :));
        reset_action();
}

mapping query_action()
{
        return action[random(sizeof(action))];
}
void do_special()
  {
    object *enemy,target;
    int i;

        enemy=this_object()->query_enemy();
        i=sizeof(enemy);
        target=enemy[random(i)];

                message_vision(
	HIY "\n��ʸ���һ�������ҵġ���  ��  ��  ��  ȭ��������\n"NOR,target);
                message_vision(
HIW"\n��ʸ��ȭӰͻȻһ�䣬�������ںϳ������ˣ���$N�е�һ�ɴ����������д�������$N�ع�����ʱ����ʸ����Ӱ�Ѿ���$N������ˡ�\n"NOR,target);
                target->receive_wound("kee",random(200+250));
                COMBAT_D->report_status(target);

  }
