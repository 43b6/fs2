//shun.c
#include <ansi.h>
inherit NPC;
void do_special();

mapping *action = ({
([     "action"     :   "$N��У�����  ��  ��  ������ɲ�Ǽ������Ѿ���$n��ȫ���ס�ˣ�����",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    180,
                "force"      :    200,
                "damage_type":   "����",
           ]),
([     "action"     :   "$N��У�����  ��  ��������֪����ð������������$n��ȫ�����´̳�Ѫ��
�U����һ�š�",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    200,
                "force"      :    200,
                "damage_type":   "����",
           ]),
([    "action"     :   "$N��ʥ����������������ȫ���С���棬ʹ���ˡ���  ��  ��  ������������
$n�ĺ����е����ѣ�ֻ��һ��ǿ���������$n����������ŷ絽����ײ������",
                "dodge"      :    40,
                "parry"      :   -50,
                "damage"     :    250,
                "force"      :    180,
                "damage_type":   "ײ��",
            ]),
   });

void create()
{
        set_name("˲", ({"shun"}));
        set("age",15);
        set("long","����������ͭ����ʥ��ʿ��������ʥս��һֱ�ǻ������ŵ���Ů��\n"
        "�����ڵ�ʵ����Զ�����ƽ�ʥ��ʿ�����ŵ������ĵĻ�����\n");
        set("title",HIM"��Ů��"NOR+ HIG"ʥ��ʿ"NOR);
        set("gender","����");
        set("class","ʥ��ʿ");
        set("str",30);
        set("cps",30);
        set("kar",30);
        set("spi",30);
        set("int",30);
        set("cor",30);
        set("attitude","herosim");
        set("max_gin",1000);
        set("max_kee",3000);
        set("max_sen",1000);
        set("gin",1000);
        set("kee",2000);
        set("sen",1000);
        set("combat_exp",1370000);
        set("max_force",10000);
        set("force",10000);
        set("max_atman",5000);
        set("max_mana",5000);
        set("atman",5000);
        set("mana",5000);
        set("force_factor",30);
        set_skill("dodge",200);
        set_skill("unarmed",200);
        set("chat_chance_combat",45);
        set("chat_msg_combat",({
        (: do_special :)
        }));
        set_temp("apply/armor",380);
        set_temp("apply/damage",78);
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
HIW "\n˲��ʥ�����£�ȼ�����Լ���С���棬���һ�������ҵġ��ǡ��ơ��硡����������
\n",target);
                message_vision(
HIY "\n˲�����ͻȻ����һ������쫷磬ɲ�Ǽ�ͽ�$N��Ӱȫ�������ȥ�ˣ���
\n"NOR,target);
                target->receive_wound("kee",random(200+250));
                COMBAT_D->report_status(target);

  }
