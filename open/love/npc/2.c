#include <ansi.h>
inherit NPC;
mapping *action = ({
([ "action" : "$Nʹ���������Ƶ�һ��"+HIY+"�������лڡ�"+NOR+"�����ƻ��˸�ȦԲ����$n��$l��ȥ",
                "dodge"      :    -25,
                "parry"      :    -20,                                      
                "damage"     :    110,
                "damage_type":   "����",
           ]),
([ "action" : "$Nʹ���������Ƶڶ���"+HIG+"���������졿"+NOR+"�����������Ծ���գ��Ӹ��»�����$n
��$l����",
                "dodge"      :     -50,
                "parry"      :     -10,
                "damage"     :     130,
                "damage_type":   "����",
           ]),
([ "action" : "$Nʹ���������Ƶ�����"+HIR+"��ͻ��������"+NOR+"����Ѹ�ײ����ڶ����ٶȣ���$n���䲻��",
                "dodge"      :    -30,
                "parry"      :    -45,
                "damage"     :    100,
                "damage_type":   "����",
            ]),
([ "action" : "$Nʹ���������Ƶ�����"+HIB+"��˫��ȡˮ��"+NOR+"�����ҷ�ʹ�������ƣ���$n�޷��е�����
����ܵ�������˺�", 
                "dodge"      :   -50,
                "parry"      :   -50,
                "damage"     :   150,
                "damage_type":   "����",
            ]),
   });

void create()
{
  set_name("˾ͽ��", ({ "herm" }) );
  set("title","�׻���");
  set("nickname","�����Ŵ����");
  set("gender","����");
  set("age", 24);
  set("combat_exp", 800000);
  set("long", "���Ǿ����ŵĻ������Ǿ��������ַ�ĵ��������������кݶ���
ÿ�ж�����Ҫ�����������ƵĹ����������ַ㲻�����¡�\n");
  set("str", 30);
  set("cor", 30);
  set("int", 24);
  set("spi", 22);
  set("cps", 30);
  set("cps", 30);
  set("con", 30);
  set("max_gin", 1500);
  set("max_kee", 1000);
  set("max_sen", 1500);
  set("max_force", 1500);
  set("force", 1500);
  set("force_factor", 10);
  set("bellicosity",1000);
  set_skill("dodge",80);
  set_skill("force",100);
  set_skill("linpo-steps",80);
  set_skill("unarmed",100);
  map_skill("dodge","linpo-steps");
  set("chat_chance_combat",25);
  set_temp("apply/armor",60);
  set_temp("apply/damage",30);
  set("chat_msg", ({
     (: this_object(),"random_move" :),
  }) );
  setup();
carry_object("/open/love/obj/boots.c")->wear();
carry_object("/open/love/obj/claw.c")->wield();
  add_money("silver", 10);
  set("default_actions", (: call_other, __FILE__,"query_action" :));

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

  mob = this_object();
  env = environment(mob);

    if( random(70) < 15)
 {
   enemy=mob->query_enemy();
	if( i=sizeof(enemy) )
	{
   target=enemy[random(i)];
   kee = target->query("max_kee") * 0.2;
   if( env == environment(target) )
   {
     message_vision(HIW+"$N����˾ͽ�ޣ�����"+HIY+"���������"+HIW+"�Ծ������������������������
 ֻ��˾ͽ�޵�"+HIR+"�ֱ�ͨ��"+HIW+"��ֱ��$N��"+HIR+"����"+HIW+"ץ�������ʱ"+HIR+"ѪҺ��ȫ�����\n"+NOR,target);
     target->receive_damage("kee",(int)kee,mob);
     COMBAT_D->report_status(target,0);
   }
	}
 }
 set_heart_beat(1);
  ::heart_beat();

}
