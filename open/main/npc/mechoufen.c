//copy from cage,re-edit from ccat
//����ǿ��by cyw 91/03/19
#include <ansi.h>
#include <combat.h>
inherit NPC;
inherit SSERVER;

void berserk(object me, object victim, object  weapon, int damage);
void blockade(object me, object victim, object weapon, int damage);
mapping *action = ({
([ "action" : "$N�ֳ�צ״,��׼$n"+HIW+"����"NOR+"ֱ�����,���Ǿ����׹�צ��һ��"+
	       HIW+" ����ʽ"NOR,
		"dodge"      :	  -100,
		"parry"      :	  -100,
		"force":          200,
		"damage"     :	  200,
		"damage_type":	 "ץ��",
	   ]),
([ "action" : "$N˫צ�������,��׼$n"+HIW+"�ؿ�"NOR+"ץȥ,���Ǿ����׹�ץ֮�ڶ���"+
	       HIW+" ����ʽ"NOR,
		"dodge"      :	   -100,
		"parry"      :	   -100,
		"force":           180,
		"damage"     :	   180,
		"damage_type":	 "ץ��",
	   ]),
([ "action" : "$N˫צ����$n�ķ���Ȧ,���¶�����$n֮"+HIW+"����"NOR+"ץȥ,���Ǿ����׹�צ֮"+
	      "������"+HIW" �Ϻ�ʽ"NOR,
		"dodge"      :	   -100,
		"parry"      :	   -100,
		"force":          200,
		"damage"     :	  200,
		"damage_type":	 "ץ��",
	    ]),
([ "action" : "$Nһצ��ǰ,һצ�ں�,Ѹ���ޱȵ���$n"+HIW+"����"NOR+"��ȥ,���Ǿ����׹�צ֮"
	     +"������"+HIW" ����ʽ"NOR,
		"dodge"      :	  -100,
		"parry"      :	  -100,
	        "force":         250,
		"damage"     :	 250,
		"damage_type":	 "ץ��",
	    ]),
([ "action" : "$N��������,�ྡྷ��צ,��ʽ�������$n"+HIW+"����"NOR+"��ȥ,���Ǿ����׹�צ֮"
	     +"������"+HIW" ����ʽ"NOR,
		"dodge"      :	  -100,
		"parry"      :	  -100,
                "force":         300,
		"damage"     :	 300,
		"damage_type":	 "ץ��",
	    ]), 	 	   	       
([ "action" : "$N���һ��,˫צ������$n"+HIW+"˫��"NOR+"��ȥ,���Ǿ����׹�צ֮"
	     +"������"+HIW" ȥĿʽ"NOR,
		"dodge"      :	   -100,
		"parry"      :	   -100,
		"force":         350,
		"damage"     :	 350,
		"damage_type":	 "ץ��",
	    ]), 	 
([ "action" : "$N�������ھ������˳�,ֱ��$n"+HIW+"ȫ��Ǹ�"NOR+",���Ǿ����׹�צ֮"
	     +"������"+HIW" ���ʽ"NOR,
		"dodge"      :	   -100,
		"parry"      :	   -100,
		"force":         400,
		"damage"     :	 400,
		"damage_type":	 "ץ��",
	    ]), 	 
([ "action" : "$N��צ������ת�����Ĺ���$n"+HIW+"ȫ���Ѩ"NOR+",,���Ǿ����׹�צ֮"
	     +"�ڰ���"+HIW" ��Ѩʽ"NOR,
		"dodge"      :	   -100,
		"parry"      :	   -100,
                "force":         450,
		"damage"     :	 450,
		"post_action":          (: blockade :),
		"damage_type":	 "ץ��",
	    ]), 	 
([ "action" : "$Nȫ������ɫ����,˫צ�����˺���������,���Ǿ����׹�צ֮"
	     +"���һ��"+HIB" �������"NOR,
		"dodge"      :	   -100,
		"parry"      :	   -100,
		"force":         500,
		"damage"     :	 500,
		"post_action":          (: berserk :),
		"damage_type":	 "ץ��",
	    ])
   });

void create()
{
	set("title",HIR+"�ڷ�˫ɲ"NOR);
	set_name("÷����", ({"mechoufen"}));
	set("class","fighter");
	set("age",35);
	set("long","������������һʱ,����ɱ������,�ڷ�˫ɲ֮ͭʬ,÷����.\n");
	set("gender","Ů��");
	set("str",30);
	set("con",30);
	set("max_kee", 50000);
        set("kee", 50000);
        set("max_gin", 50000);
        set("gin", 50000);
        set("max_sen", 50000);
        set("sen", 50000);
        set("force", 20000);
        set("max_force", 20000);
	set("force_factor",60);
	set_skill("dodge",150);
	set_skill("force",200);
	set_skill("parry",100);
	set_skill("snowforce",200);
	set_skill("snow-kee",150);
	set_skill("linpo-steps",150);
	set_skill("unarmed",100);
	set_temp("apply/damage", 150);
        set_temp("apply/armor", 90);
        set_temp("apply/defense",90);
        set_temp("apply/dodge", 70);
        set_temp("apply/parry", 50);
        map_skill("parry","snow-kee");
	map_skill("force","snowforce");
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
      lv_1 =ob->query_skill(skill, 1);
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
 
 if( random(100) < 30 && mob->is_fighting())
 {
    enemy=mob->query_enemy();
    i=sizeof(enemy);
    target=offensive_target(mob);
    if(target){
    kee = target->query("max_kee") * 0.4;
    if( env == environment(target) )
    {
      message_vision(HIR+"$Nһ��������,�������׹�צ�������!!!\n"+NOR,target);
      target->receive_wound("kee",random((int)kee),mob);
      COMBAT_D->report_status(target,0);
    }
    }
 }
 
 if(((mob->query("kee")<mob->query("max_kee")*0.6)||
     (mob->query("gin")<mob->query("max_gin")*0.6)||
     (mob->query("sen")<mob->query("max_sen")*0.6))&& (random(100) < 10) )
 {
    tell_room(environment(), HIY+name()+"��������澭֮���Ʒ�,Ϊ�Լ�"
	       +"����.\n"+NOR);
    mob->receive_curing("kee",2000);
    mob->receive_heal("kee",2000);
    mob->receive_curing("sen",2000);
    mob->receive_heal("sen",2000);
    mob->receive_curing("gin",2000);
    mob->receive_heal("gin",2000);
 }

 if((mob->query("kee")<mob->query("max_kee")*0.3) && (random(100) < 20) && mob->is_fighting() )
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
void blockade(object me, object victim, object weapon, int damage)
{
      
        if( !me->query_temp("berserk") && 70>random(100) )
        {                             
                        message_vision(HIY"$n����Ѩʽ�ྡྷ��Ǩ��,ȫ��Ѩ����ʱ����ס�ˡ�\n"NOR, me, victim);
                        victim->receive_wound("kee",700);
                        victim->apply_condition("star-stial",random(10));
                        victim->start_busy(random(3));
                        COMBAT_D->report_status(victim);
        }else message_vision(HIY"$n���Լ��ھ�������ǿ��ס��ʽ��\n"NOR, me, victim);
}
void berserk(object me, object victim, object weapon, int damage)
{
        int i; 
     
   if( !me->query_temp("berserk") && 70>random(100) )
        {
                
                me->set_temp("berserk", 1);
                for(i = 0;i < 9; i++)
                {                 
                        message_vision(HIC"$N�߾��񱩣������׹�צ��$n��������ɱȥ��\n"NOR, me, victim);
                        COMBAT_D->do_attack(me, victim, me->query_temp("weapon"), TYPE_QUICK);
                }
                me->delete_temp("berserk");
               
        }
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
        winner->set_temp("kill_mechoufen",1);
	if ( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {      
	  new("/open/sky/obj8/plum_wind")->move(environment(winner));
	  message_vision(HIM"\n��÷��������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/plum_wind",sprintf("%s(%s) ��÷���������÷Ʈ���� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj8/plum_wind")->move(environment(winner));
	  message_vision(HIM"\n��÷��������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/plum_wind",sprintf("%s(%s) ��÷���������÷Ʈ���� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}

