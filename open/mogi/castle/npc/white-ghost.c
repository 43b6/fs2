//by roger
inherit NPC;
#include <ansi.h>
#include "castle.h"
void create()
{
        set("nickname",HIW"�ڰ�˫ɲ"NOR);
        set_name("��ɲ��Ů", ({"white-ghost","ghost"}));
        set("age",8710);
        set("long","����ħ�������󻤷�֮һ�����ü������޵�Ů������������а��������ɱ���͡���ѩ���족\n");
        set("gender","Ů��");
        set("str",35);
        set("con",35);
        set("cor",30);
        set("cps",30);
        set("attitude","aggressive");
        set("bellicosity",2000);
        set("max_gin",14000);
        set("gin",14000);
        set("max_sen",14000);
        set("sen",14000);
        set("max_kee",15000);
        set("kee",15000);
        set("combat_exp",7200000);
        set("max_force",9000);
        set("force",19000);
        set("force_factor",40);
        set("clan_kill",1);
        set_skill("dodge",100);
        set_skill("force",100);
        set_skill("badforce",100);
        set_skill("mogi-steps",120);
        set_skill("unarmed",100);
        set_skill("mogi-strike3",120);
        set_skill("parry",100);
        set_skill("literate",180);
        set_skill("move",100);
        map_skill("unarmed","mogi-strike3");
        map_skill("dodge","mogi-steps");
        map_skill("move","mogi-steps");
        map_skill("force","badforce");
        map_skill("parry","mogi-strike3");
  
        set_temp("apply/armor",70);
        set_temp("apply/damage",70);
        setup();
        carry_object("open/mogi/castle/obj/white-ghost-head");
        carry_object(C_OBJ"/ninepill");
        carry_object(C_OBJ"/ninepill");
        add_money("gold",25);
        
}

void init()
{
 ::init();
 add_action("do_cmd","cmd");
}

int do_cmd(string str){
 object who=this_player();
 object ob,ghost;
 ob=this_object();
 ghost=present( "ghost",environment(ob) );
 if(str=="askgod ghost" || str=="askgod white-ghost"){
 write(HIY"��ɲ��Ů��Ц������ħ���ĵ�������ǰ�����ʲ�!?������ħ������ࡣ��ȥ����!!\n"NOR);
 ghost->kill_ob(who);
 return 1;                                                 
                  }
}

int accept_fight(object who)
{
return notify_fail("��ɲ��Ů˵�� : ��û�������档\n");
}
int accept_kill(object me)
{
    object ob,ghost;
    ob=this_object();
    ghost=present( "ghost 2",environment(ob) );
     if( !present( "ghost 2",environment(ob))||!living(ghost)) return 1;
    else {
    message_vision(HIY"\n��ɲ�ɾ�������ɲ��Ů���ѣ�������$N�������ֹ�����\n"NOR,me);
     ghost->kill_ob(me);
    return 1;
   }
}

void heart_beat()
{
 object env,mob,*enemy,target;
 int i,j,force;
 mapping exit;
 string *exit_name;
 
 mob = this_object();
 
 env = environment(mob);
 
 if( !query("wield") )
 {
   set("wield",1);
   command("wield all");
 }
 
 if( random(100) < 15)
 {
    enemy=mob->query_enemy();
        if( i = sizeof(enemy) ) {
    target=enemy[random(i)];
    if( env == environment(target) )
    {
      message_vision(HIW"
˲��, ��ѩ�׷�, ����Ҳ�, ��˪������, �������ת, �·𶳽�
��ѪҺһ��, ��ֹ��һ��
ֻ��$N��������һ��, �����ѩ���ɿ�ת, һʽ"HIB"����ѩ���족"HIW"
�����������¶�֮��Ϯȥ
\n"NOR,mob);
      for(j=0;j < i;j++){
      enemy[j]->start_busy(1);
      enemy[j]->add("kee",-700);
      enemy->apply_condition("cold",20);
      COMBAT_D->report_status(enemy[j], 1);
                        }
    }
        }
 }  
   set_heart_beat(1);
   ::heart_beat();
   
}

void die()                                                                 
{    
	object winner = query_temp("last_damage_from");
	int j;
        if(!winner)
	{
	::die();
	return ;
        }
	if ( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {      
	  new("/open/sky/obj1/light_emblem")->move(environment(winner));
	  message_vision(HIM"\n�Ӱ�ɲ��Ů�����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/light_emblem",sprintf("%s(%s) �ð�ɲ��Ů�����˹�֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj1/light_emblem")->move(environment(winner));
	  message_vision(HIM"\n�Ӱ�ɲ��Ů�����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/light_emblem",sprintf("%s(%s) �ð�ɲ��Ů�����˹�֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}