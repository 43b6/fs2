//made by carol
#include <ansi.h>
inherit NPC;
inherit SSERVER;
void do_special();
void freeze(object me, object victim);

mapping *action = ({
([     "action"     :   "$N��У�����  ʯ  ��  ������ֻ������������������ı���, ����籩һ��
����$nϮ����",
                "dodge"      :   -35,
                "parry"      :   -35,
                "damage"     :    150,
                "force"      :    120,
                "damage_type":   "����",
           ]),
([    "action"     :   "$Nȼ��ȫ���С���棬��$nʹ���ˡ���  ʯ  ��  ȭ����ֻ����һ����ı���
ѩ����$n������",
                "dodge"      :    40,
                "parry"      :   -50,
                "damage"     :    180,
                "force"      :    180,
                "damage_type":   "����",
	    "post_action": (:freeze:),
            ]),
   });

void create()
{
	set_name("����",({"ice river","ice"}));
        set("age",15);
        set("long","����������ͭ����ʥ��ʿ��������ʥս��һֱ�ǻ������ŵ���Ů��\n"
        "�����ڵ�ʵ����Զ�����ƽ�ʥ��ʿ�����ŵ������ĵĻ�����\n");
        set("title",HIW"������"NOR+ HIG"ʥ��ʿ"NOR);
	set("class","ʥ��ʿ");
        set("gender","����");
        set("str",30);
        set("cps",29);
        set("kar",30);
        set("spe",30);
        set("int",30);
        set("cor",30);
        set("attitude","herosim");
        set("max_gin",1000);
        set("max_kee",3000);
        set("max_sen",1000);
        set("gin",1000);
        set("kee",2000);
        set("sen",1000);
        set("combat_exp",1400000);
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
        set_temp("apply/armor",380);
        set_temp("apply/damage",80);
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
        HIY "\n���Ӵ��һ�������ҵġ���  ��  Ů  ��  ֮  ��  ˡ��������\n",target);
                message_vision(
        HIW "\n���ӵ������������Ů�񣬶����Ů�����е�ˮƿ������ã������ã���󣬱�
�ӵ���Ӱ����$N������ˡ�\n"NOR,target);
                target->receive_wound("kee",random(170+220));
                COMBAT_D->report_status(target);
}
void freeze (object me, object victim)
{
  object *enemy,target;
  int i;
   enemy=this_object()->query_enemy();
    i=random(sizeof(enemy));
    target=offensive_target(this_object());
    if(!target) return ;

   message_vision(HIC+"�ӱ��ӵ�ȭӰ�д���һ�ɷ�ѩ�����Ǽ��$N������!",target);
    target->start_busy(2);

  return;
}
