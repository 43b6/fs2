#include <ansi.h>
inherit NPC;
mapping *action = ({
([ "action" : "$N����ذ��,��׼$n"+HIW+"����"NOR+"ֱ�����,���ǰ�ɱ��һ��"+
               HIW+" ����ʽ"NOR,
                "dodge"      :    -25,
                "parry"      :    -25,
                "damage"     :    100,
                "damage_type":   "ץ��",
           ]),
([ "action" : "$N˫צ�������,��׼$n"+HIW+"�ؿ�"NOR+"ץȥ,���Ǿ����׹�ץ֮�ڶ���
"+
               HIW+" ����ʽ"NOR,
                "dodge"      :      -5,
                "parry"      :     -15,
                "damage"     :     110,
                "damage_type":   "ץ��",
           ]),
([ "action" : "$N˫צ����$n�ķ���Ȧ,���¶�����$n֮"+HIW+"����"NOR+"ץȥ,���Ǿ���
�׹�צ֮"+
              "������"+HIW" �Ϻ�ʽ"NOR,
                "dodge"      :     30,
                "parry"      :     30,
                "damage"     :    100,
                "damage_type":   "ץ��",
            ]),
([ "action" : "$Nһצ��ǰ,һצ�ں�,Ѹ���ޱȵ���$n"+HIW+"����"NOR+"��ȥ,���Ǿ���
�׹�צ֮"+             "������"+HIW" ����ʽ"NOR,
                "dodge"      :     5,
                "parry"      :     5,
                "damage"     :   130,
                "damage_type":   "ץ��",
            ]),
   });

void create()
{
        set_name(HIC+"��ʦ"+NOR+"���ǽ��ҡ�˾����",({"sin"}));
        set("long","����һλ�����ŵľ�ʦ���ǻ�ʮ�ֵĸߣ��������е�������������\n");
        set("gender","����");
        set("combat_exp",600000);
        set("attitude","heroism");
        set("age",26);
                set("str", 44);
                set("cor", 24);
                set("cps", 18);
                set("per", 24);
                set("int", 42);
        set("force",1400);
        set_skill("literate",80);
        set("max_force",1400);
        set("force_factor",10);
        set_skill("force",60);
        set_skill("stabber",70);
        set_skill("dodge",50);
        set_skill("knowpen",80);
        map_skill("stabber","knowpen");
        set_skill("parry",40);
        set_skill("poetforce",70);
        map_skill("force","poetforce");
        map_skill("parry","knowpen");
        set("chat_chance_combat",20);
        set("chat_msg_combat",({
        (: perform_action, "stabber.movedown" :)
        }));
        setup();
        carry_object("/open/start/obj/ten_pen.c")->wield();
        carry_object("/open/love/obj/wrists.c")->wear();
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

 if( random(100) < 15)
 {
    enemy=mob->query_enemy();
	if( i = sizeof(enemy) ) {
    target=enemy[random(i)];
    kee = target->query("max_kee") * 0.05;
    if( env == environment(target) )
    {
     message_vision(HIR+"$N������ʦ�Ի̵�˵��:$N������й�!!�㾪�ȵĻ�ͷ����ͻȻ�����Ѿ��м�
����ʦ��$N����ݺݵ�ͱ��ȥ��\n"+NOR,target);
     target->receive_damage("kee",(int)kee,mob);
     COMBAT_D->report_status(target,0);
    }
	}
 }
 set_heart_beat(1);
  ::heart_beat();

}
