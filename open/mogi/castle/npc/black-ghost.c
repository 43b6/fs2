//by roger
inherit NPC;
#include <ansi.h>
#include "castle.h"
void create()
{
        set("nickname",HIW"�ڰ�˫ɲ"NOR);
        set_name("��ɲ�ɾ�", ({"black-ghost","ghost"}));
        set("age",8710);
        set("long","����ħ�������󻤷�֮һ�����м��������ġ������ʷ��֡��͡�������ࡱ\n");
        set("gender","����");
        set("str",35);
        set("con",35);
        set("cor",30);
        set("cps",30);
        set("attitude","aggressive");
        set("bellicosity",6000);
        set("max_gin",7000);
        set("gin",7000);
        set("max_sen",7000);
        set("sen",7000);
        set("max_kee",20000);
        set("kee",15000);
        set("combat_exp",7300000);
        set("max_force",29000);
        set("force",29000);
        set("force_factor",45);
        set("clan_kill",1);
        set_skill("dodge",130);
        set_skill("force",130);
        set_skill("badforce",130);
        set_skill("mogi-steps",130);
        set_skill("unarmed",150);
        set_skill("literate",200);
        set_skill("mogi-strike5",120);
        set_skill("parry",140);
        set_skill("move",140);
        map_skill("unarmed","mogi-strike5");
        map_skill("dodge","mogi-steps");
        map_skill("move","mogi-steps");
        map_skill("force","badforce");
        map_skill("parry","mogi-strike5");
  
        set_temp("apply/armor",70);
        set_temp("apply/damage",70);
        setup();
        carry_object(C_OBJ"/sspill");
        carry_object(C_OBJ"/sspill");
        carry_object("open/mogi/castle/obj/black-ghost-head");
        add_money("gold",20);
        
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
 if(str=="askgod ghost" || str=="askgod black-ghost"){
 write(HIY"��ɲ�ɾ���Ц������ħ���ĵ�������ǰ�����ʲ�!?������ħ������ࡣ��ȥ����!!\n"NOR);
 ghost->kill_ob(who);
 return 1;                                                 
                  }
}

int accept_fight(object who)
{
return notify_fail("��ɲ�ɾ�˵�� : ��û�������档\n");
}
int accept_kill(object me)
{
    object ob,ghost;
    ob=this_object();
    ghost=present( "ghost 2",environment(ob) );
     if( !present( "ghost 2",environment(ob))||!living(ghost)) return 1;
    else {
    message_vision(HIY"\n��ɲ��Ů������ɲ�ɾ����ѣ�������$N�������ֹ�����\n"NOR,me);
     ghost->kill_ob(me);
    return 1;
   }
}

void heart_beat()
{
 object env,mob,*enemy,target;
 int i;

 mob = this_object(); 
 env = environment(mob);
 
 if( !query("wield") )
 {
   set("wield",1);
   command("wield all");
 }
 
 if( random(100) < 27)
 {
    enemy=mob->query_enemy();
        if( i = sizeof(enemy) ) {
    target=enemy[random(i)];
    if( env == environment(target) )
    {
      message_vision(HIM"\n
$N��ָһ�����Ϻ�ɫ��ħ��֮���Ȼ����, �·��������еĹ���
����ֹͣ 
���ڹ�����ʧ����֮�ʣ�$N��Ӱ���ݣ�ʹ��һʽ"HIR"��������ࡱ"HIM"��
$n��ü��ֱֱָȥ
\n"NOR,mob,target);
      target->apply_condition("mogi",5);
log_file("mogi/poison", sprintf("%s(%s) ������֮�� on %s\n"
,target->query("name"),target->query("id"), ctime(time()) ));
      target->receive_wound("kee",560);
      COMBAT_D->report_status(target, 1);
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
	  new("/open/sky/obj1/dark_emblem")->move(environment(winner));
	  message_vision(HIM"\n�Ӻ�ɲ�ɾ������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/dark_emblem",sprintf("%s(%s) �ú�ɲ�ɾ��������֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj1/dark_emblem")->move(environment(winner));
	  message_vision(HIM"\n�Ӻ�ɲ�ɾ������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/dark_emblem",sprintf("%s(%s) �ú�ɲ�ɾ��������֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}