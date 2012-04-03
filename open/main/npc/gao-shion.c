// by Casey
#include <ansi.h>
inherit NPC;
inherit SSERVER;
void create()
{
        set("title","�˼�����");
        set("nickname",HIY"С��а"NOR);
        set_name("����", ({"gao-shion","gao","shion"}));
        set("age",27);
        set("long","��Ϊ����,����֮Ů ,�˼�����ֻΪѰ������������С��Ů.\n");
        set("gender","Ů��"); 
        set("class","swordsman");
        set("bellicosity",720);
        set("str",20);
        set("con",30);
        set("cor",30);
        set("spi",30);
        set("max_kee",50000);
        set("kee",50000);
        set("max_gin",50000);
        set("gin",50000);
        set("max_sen",50000);
        set("sen",50000);
        set("combat_exp",2000000);
        set("max_force",50000);
        set("family/family_name","�ɽ���");
        set("force",50000);
        set("force_factor",10);
        set_skill("dodge",200);
        set_skill("move",200);
        set_skill("parry",200);
        set_skill("force",300);
        set_skill("nine-steps",150);
        set_skill("unarmed",150);
        set_skill("sword",200);
        set_skill("shasword",150);
        map_skill("sword","shasword");
        map_skill("parry","shasword");
        map_skill("dodge","nine-steps");
        map_skill("move","nine-steps");
        set("functions/sha_kee/level",100);
        set("functions/swordkee/level",100);
        set("chat_chance_combat",90);
        set("chat_msg_combat",({       
        (: perform_action("sword.sha_kee") :),
        }));
        set_temp("apply/armor",150);
        set_temp("apply/damage",150);
        setup();
        carry_object("/open/main/obj/et_sword")->wield();
	carry_object("/open/sky/obj/lucky_grasslink")->wear();
	carry_object("/open/ping/obj/poison_pill")->set_amount(3);  
        add_money("gold",90);

}


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

	if(!query("change"))
    {
      set("change",1);
	    
	  command("say �� �� . . . .  ����̫����!!!");
	}
    return;
}

void heart_beat()
{
 object env,mob,*enemy,target;
 int i,hurt;
 mapping exit;
 string *exit_name;

 mob = this_object();

 env = environment(mob);

 if( !query("wield") )
 {
   set("wield",1);
   command("wield all");
 }

 if(mob->is_fighting() && random(10) > 3 && mob->query("change") )
 {
 command("perform sword.sha_kee");
 }


  if(random(100) < 15 && mob->is_fighting())
 {
    target = offensive_target(mob);
      if(!target) return ;
    hurt=target->query("max_kee") *0.3;
    if( env == environment(target) )
    {
      message_vision(HIW"\n�������ֵ��� ,ʹ���Ҵ���ѧ��"HIM"��Ӣ����"HIW"��,�ݺݻ���$NҪ�� !\n"NOR,target);
      target->add("kee",-hurt);
      COMBAT_D->report_status(target,0);
    }
 }

 if((mob->query("kee")< 20000) && (random(100) < 20))
 {
    tell_room(environment(), name()+"����"HIC"��������¶"NOR".\n");
    mob->receive_curing("kee",2000);
    mob->receive_heal("kee",2000);
    mob->receive_curing("sen",2000);
    mob->receive_heal("sen",2000);
    mob->receive_curing("gin",2000);
    mob->receive_heal("gin",2000);
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

void die()                                                                 
{    
	object winner = query_temp("last_damage_from");
	int j;

        if(!winner)
	{
	::die();
	return ;
        }
        winner->set_temp("kill_shion",1);
	if ( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {      
	  new("/open/sky/obj2/loyal_stone")->move(environment(winner));
	  message_vision(HIM"\n�ӹ�������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/loyal_stone",sprintf("%s(%s) �ù������������ʯ�� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj2/loyal_stone")->move(environment(winner));
	  message_vision(HIM"\n�ӹ�������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/loyal_stone",sprintf("%s(%s) �ù������������ʯ�� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}
