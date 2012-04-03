#include <ansi.h>
inherit NPC;
void create()
{
	set("title","ħ������");
	set_name("����", ({"sho-long","sho","long"}));
	set("age",55);
	set("long",
"Ϊħ��Ī�����ͽ���Ծ���ħ���ľ������и�ħ���Ṧ��ȱʧ������ɽҰ֮��\n"
"��Ѱ��������һ��ר����Ͽ��������ľ����õ���\n");
	set("gender","����");
	set("str",35);
	set("con",35);
	set("max_kee",3000);
	set("kee",3000);
	set("combat_exp",1200000);
	set("max_force",2000);
	set("force",2000);
set("force_factor",20);
set("bellicosity",1000);
set("cor",25);
	set_skill("dodge",70);
	set_skill("parry",100);
	set_skill("blade",100);
	set_skill("dragon-blade",110);
	map_skill("blade","dragon-blade");
	map_skill("parry","dragon-blade");
	set_temp("apply/armor",80);
	set_temp("apply/damage",80);
	setup();
	carry_object("/open/main/obj/shiblade")->wield();
	carry_object("/open/common/obj/pill2")->set_amount(10);
	add_money("gold",25);
}
/*
int accept_kill(object me)
{
    call_out("change",1,me);
    return 1;
}
int accept_fight(object me)
{
    call_out("change",1,me);
    return 1;
}
void change(object ob)
{
    int exp;
    exp =ob->query("combat_exp",1);
    if( exp > 150000)
    {
      exp = exp * 1.5;
      set("combat_exp",exp);
    }
    return;
}
*/
void heart_beat()
{
 object env,mob,*enemy,target;
 int i,kee;
 mapping exit;
 string *exit_name;

 mob = this_object();
 env = environment(mob);

 if( random(100) < 12)
 {
   command("sword_fire");
 }

 if((mob->query("kee")<mob->query("max_kee")*0.3) && (random(100) < 25) )
 {
   command("eat pill");
 }

 if((mob->query("kee")<mob->query("max_kee")*0.2) && (random(100) < 20) )
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
	  new("/open/sky/obj9/lucky_charm")->move(environment(winner));
	  message_vision(HIM"\n�����������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/lucky_charm",sprintf("%s(%s) ����������������֮���� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 )
	  {
	  new("/open/sky/obj9/lucky_charm")->move(environment(winner));
	  message_vision(HIM"\n�����������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/lucky_charm",sprintf("%s(%s) ����������������֮���� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();
}