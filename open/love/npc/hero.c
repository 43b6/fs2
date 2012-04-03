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
                "damage"     :    130,
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
  set_name("�����ŵ���", ({ "trainee" }) );
  set("long","��������㳡�����У�������ǿ׳�����öԸ������ӡ�\n");
  set("race", "����");
  set("gender","����");
  set("combat_exp",400000);
  set("age",18);
  set("cor",30);
  set("cps",30);
  set("str",20);
  set("kee",1000);
  set("max_kee",1000);
  set("force",700);
  set("max_force",700);
  set("force_factor",2);
  set("chat_chance",25);
  set("bellicosity",1000);
  set("attitude","aggressive");
  set_skill("dodge", 40);
  set_skill("linpo-steps",40);
  set_skill("force",40);
  set_skill("unarmed", 60);

  map_skill("dodge","linpo-steps");
  set("chat_chance_combat", 25);
  set_temp("apply/armor",40);
  set_temp("apply/damage",20);
  set("chat_msg", ({
       (: this_object(),"random_move" :),
  }) );
  setup();
  set("default_actions", (: call_other, __FILE__,"query_action" :));
  add_money("coin",100);

  reset_action();
}
mapping query_action()
{
        return action[random(sizeof(action))];
}
