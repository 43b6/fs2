#include <ansi.h>
inherit NPC;
mapping *action = ({
([ "action" : "$Nʹ���������Ƶ�һ��"+HIY+"�������лڡ�"+NOR+"�����ƻ��˸�ȦԲ����$n��$l��ȥ",
                "dodge"      :    -25,
                "parry"      :    -20,                                      
                "damage"     :    100,
                "damage_type":   "����",
           ]),
([ "action" : "$Nʹ���������Ƶڶ���"+HIG+"���������졿"+NOR+"�����������Ծ���գ��Ӹ��»�����$n
��$l����",
                "dodge"      :     -50,
                "parry"      :     -10,
                "damage"     :     110,
                "damage_type":   "����",
           ]),
([ "action" : "$Nʹ���������Ƶ�����"+HIR+"��ͻ��������"+NOR+"����Ѹ�ײ����ڶ����ٶȣ���$n���䲻��",
                "dodge"      :    -30,
                "parry"      :    -45,
                "damage"     :    150,
                "damage_type":   "����",
            ]),
([ "action" : "$Nʹ���������Ƶ�����"+HIB+"��˫��ȡˮ��"+NOR+"�����ҷ�ʹ�������ƣ���$n�޷��е�����
����ܵ�������˺�", 
                "dodge"      :   -50,
                "parry"      :   -50,
                "damage"     :   100,
                "damage_type":   "����",
            ]),
   });

void create()
{
        set_name("�Ϲ���",({"lin"}));
        set("title","������������");
        set("nickname","�𻤷�");
        set("long","���Ǿ����ŵĻ�������һλŮ�ԣ��ǳ�������
����Ҫ������С�����Ӹ�ƭ�ˣ������Ǹ����еĸ��֡�\n");
        set("gender","Ů��");
        set("combat_exp",650000);
        set("age",20);
        set("max_kee",1000);
        set("kee", 1000);
        set("str", 24);
        set("cor", 24);
        set("cps", 45);
        set("per", 30);
        set("int", 32);
        set("force",1000);
        set("max_force",1000);
        set("force_factor", 10);
        set_skill("dodge", 80);
        set_skill("linpo-steps",80);
        set_skill("force",60);
        set_skill("unarmed", 80);

        map_skill("dodge","linpo-steps");
        set("chat_chance_combat", 25);
        set_temp("apply/armor",80);
        set_temp("apply/damage",40);
        set("chat_msg", ({
             (: this_object(),"random_move" :),
        }) );
        setup();
carry_object("/open/love/obj/hands.c")->wear();
carry_object("/open/love/obj/claw.c")->wield();
        set("default_actions", (: call_other, __FILE__,"query_action" :));
        add_money("silver",10);

        reset_action();
 
}


mapping query_action()
{
        return action[random(sizeof(action))];
}
void greeting(object ob)
{
    int exp,lv_1;
    string skill;
    object weapon;
    exp =ob->query("combat_exp",1);
      weapon = ob->query_temp("weapon");
      if( weapon ) skill = weapon->query("skill_type");
      else skill = "unarmed";
      lv_1 =(int) 1.8 * ob->query_skill(skill, 1);
    return;
}
void heart_beat()
{
 object env,mob,*enemy,target;
 int i,kee;
 mapping exit;
 string *exit_name;

 mob = this_object();
 env = environment(mob);

  if( random(70) < 15)
 {
    enemy=mob->query_enemy();
	if( i = sizeof(enemy) ) {
    target=enemy[random(i)];
    kee = target->query("max_kee") * 0.2;
    if( env == environment(target) )
    {
     message_vision(HIW+"$N�����Ϲ��գ�����"+HIY+"���������"+HIW+"�Ծ���������
���������������ֻ���Ϲ��յ�"+HIR+"�ֱ�ͨ��"+HIW+"��
ֱ��$N��"+HIR+"����"+HIW+"ץ�������ʱ"+HIR+"ѪҺ��ȫ�����\n"+NOR,target);
     target->receive_damage("kee",(int)kee,mob);
     COMBAT_D->report_status(target,0);
    }
	}
 }
 set_heart_beat(1);
  ::heart_beat();

}

