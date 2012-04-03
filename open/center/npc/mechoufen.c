//copy from cage,re-edit from ccat

#include <ansi.h>
inherit NPC;

mapping *action = ({
([ "action" : "$N�ֳ�צ״,��׼$n"+HIW+"����"NOR+"ֱ�����,���Ǿ����׹�צ��һ��"+
               HIW+" ����ʽ"NOR,
                "dodge"      :    -25,
                "parry"      :    -25,
                "damage"     :    200,
                "damage_type":   "ץ��",
           ]),
([ "action" : "$N˫צ�������,��׼$n"+HIW+"�ؿ�"NOR+"ץȥ,���Ǿ����׹�ץ֮�ڶ���"+
               HIW+" ����ʽ"NOR,
                "dodge"      :      -5,
                "parry"      :     -15,
                "damage"     :     180,
                "damage_type":   "ץ��",
           ]),
([ "action" : "$N˫צ����$n�ķ���Ȧ,���¶�����$n֮"+HIW+"����"NOR+"ץȥ,���Ǿ����׹�צ֮"+
              "������"+HIW" �Ϻ�ʽ"NOR,
                "dodge"      :     30,
                "parry"      :     30,
                "damage"     :    100,
                "damage_type":   "ץ��",
            ]),
([ "action" : "$Nһצ��ǰ,һצ�ں�,Ѹ���ޱȵ���$n"+HIW+"����"NOR+"��ȥ,���Ǿ����׹�צ֮"
             +"������"+HIW" ����ʽ"NOR,
                "dodge"      :     5,
                "parry"      :     5,
                "damage"     :   200,
                "damage_type":   "ץ��",
            ]),                
   });

void create()
{
        set("title","�ڷ�˫ɲ");
        set_name("÷����", ({"mechoufen"}));
        set("age",35);
        set("long","������������һʱ,����ɱ������,�ڷ�˫ɲ֮ͭʬ,÷����.\n");
        set("gender","Ů��");
        set("str",30);
        set("con",30);
        set("max_kee",20000);
        set("kee",20000);
        set("combat_exp",350000);
        set("max_force",10500);
        set("force",10500);
        set("force_factor",25);
        set_skill("dodge",80);
        set_skill("force",80);
        set_skill("linpo-steps",80);
        set_skill("unarmed",80);
        map_skill("dodge","linpo-steps");
        set("chat_chance_combat",25);
        set("chat_msg_combat",({
        "÷����˵: ���������ĸ���,����������������!!\n",
        "÷����˵: ����ѵ��,�㲻֪���Һڷ�˫ɲ�Ŀ���!!\n",
        "÷����˵: ɱɱɱɱ!!!\n",
        }));
        set_temp("apply/armor",100);
        set_temp("apply/damage",80);
        setup();
       carry_object("/open/gsword/obj/sick_item");
        carry_object("open/center/obj/mechoufen-head");
        add_money("gold",25);
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
    if( exp < 100000 )
    {
      say("÷����˵: ι!!"+ob->name(1)+"!! ���ﲻ����Ÿ����ĵط�,�����!!\n");
      return;
    }else{
      weapon = ob->query_temp("weapon");     
      if( weapon ) skill = weapon->query("skill_type");
      else skill = "unarmed";
      lv_1 =(int) 1.8 * ob->query_skill(skill, 1);
      if( lv_1 > 50)
      {
        set_skill("unarmed", lv_1);
        set_skill("force", lv_1);
      }
      exp = exp * 1.5;
      set("combat_exp",exp);
      kill_ob(ob);
      ob->kill_ob(this_object());
    }
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
 
 if( random(100) < 30)
 {
    enemy=mob->query_enemy();
    i=sizeof(enemy);
    target=enemy[random(i)];
    kee = target->query("max_kee") * 0.4;
    if( env == environment(target) )
    {
      message_vision(HIR+"$Nһ��������,�������׹�צ�������!!!\n"+NOR,target);
      target->receive_damage("kee",(int)kee,mob);
      COMBAT_D->report_status(target,0);
    }
 }
 
 if((mob->query("kee")<mob->query("max_kee")*0.5) && (random(100) < 20) )
 {
    tell_room(environment(), HIY+name()+"��������澭֮���Ʒ�,Ϊ�Լ�"
               +"����.\n"+NOR);
    mob->receive_curing("kee",700);
    mob->receive_heal("kee",700);
 }

 if((mob->query("kee")<mob->query("max_kee")*0.3) && (random(100) < 20) )
 {
   exit = env->query("exits");
   exit_name = keys(exit);
   i = random(sizeof(exit_name));
   command(exit_name[i]);
   i = random(sizeof(exit_name));
   command(exit_name[i]);
 }
   
   set_heart_beat(1);
   ::heart_beat();
   
}
