//by roger
inherit NPC;
#include <ansi.h>
#include "castle.h"
void create()
{
        set("nickname",HIC"��ˮ����"NOR);
        set_name("ҹĩ��", ({"mou-houng","ghost"}));        
        set("age",8710);
        set("long","������Į, ȴ��ôҲ�ڲ�ס���׷Ƿ�����ɫ������, ����������������������. \n");
        set("title","ҹ��˫��");
        set("gender","Ů��");
        set("str",35);
        set("con",35);
        set("cor",30);
        set("cps",30);
        set("clan_kill",1);
        set("bellicosity",2000);
        set("max_gin",3000);
        set("gin",3000);
        set("max_sen",3000);
        set("sen",3000);
        set("max_kee",13000);
        set("kee",13000);
        set("combat_exp",4300000);
        set("max_force",9300);
        set("force",9000);
        set("force_factor",54);
        set_skill("dodge",100);
        set_skill("force",100);
        set_skill("badforce",100);
        set_skill("mogi-steps",100);
        set_skill("unarmed",100);
        set_skill("mogi-strike8",100);
        set_skill("parry",100);
        set_skill("literate",150);
        set_skill("move",100);
        map_skill("unarmed","mogi-strike8");
        map_skill("dodge","mogi-steps");
        map_skill("move","mogi-steps");
        map_skill("force","badforce");
        map_skill("parry","mogi-strike8");
  
        set_temp("apply/armor",70);
        set_temp("apply/damage",70);
        setup();
        add_money("gold",5);
        
}

int accept_fight(object who)
{
return notify_fail("ҹĩ��˵�� : ��û�������档\n");
}
int accept_kill(object me)
{
    object ob,ghost;
    ob=this_object();
    ghost=present( "wu-low",environment(ob) );
     if( !present( "wu-low",environment(ob))||!living(ghost)) return 1;
    else {
    message_vision(HIY"\nҹ���ῴ��ҹĩ�����ѣ�������$N�������ֹ�����\n"NOR,me);
     ghost->kill_ob(me);
    return 1;
   }
}

void heart_beat()
{
 object env,mob,*enemy,target;
 int i,force;
 mapping exit;
 string *exit_name;
 
 mob = this_object();
 
 env = environment(mob);
 
 if( !query("wield") )
 {
   set("wield",1);
   command("wield all");
 }
 
 if( random(100) < 17)
 {
    enemy=mob->query_enemy();
        if( i=sizeof(enemy) )
        {
    target=enemy[random(i)];
                force = target->query("force");
    if( env == environment(target))
    {
      message_vision(HIY"
$N����������Ӱ��ɢ������֮��������������������ʹ����һʽ
"HIR"��̫����ñ���֮  ��֮�¡�"HIY"ٻӰ���輤�ҵع���$n
\n"NOR,mob,target);

    for(i=0;i<5;i++)    
 COMBAT_D->do_attack(mob, target, mob->query_temp("weapon"));
    target->start_busy(2);
    }
 }  
        }
   set_heart_beat(1);
   ::heart_beat();
   
}
