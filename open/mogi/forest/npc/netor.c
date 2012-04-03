#include <ansi.h>
inherit NPC;
   
void create()
{
        set("long","
传说终魔域的守门怪物，是一只蜘蛛状的巨大怪物，双眼发出蓝光，并不时
发出嘶嘶的声音。
");
        set("race","野兽");
set("clan_kill",1);
        set("gender","雄性");
        set("attitude","aggressive");
        set("title","魔域守护者");
        set_name("网中人",({"netor"}));
        set("combat_exp",2000000);
        set("bellicosity",3000);
        set("age",10000);
        set("max_force",5500);
        set("force",5500);        
        set("max_kee",5000);
        set("kee",5000);
        set("max_gin",1000);
        set("max_sen",1000);
        set("sen",1000);
        set("gin",1000);
        set("str", 35);
        set("cor", 35);
        set("cps", 30);
        set("per", 30);
        set("int", 30);
        set_skill("dodge",300);
        set_skill("move",400);
        set_skill("parry",300);
        set_skill("unarmed",350);
        set_temp("apply/armor",150);
        set_temp("apply/damage",150);
        set("limbs",({"头部","胸部","蜘蛛眼","蜘蛛脚","背部"}));
        set("verbs",({"bite","claw"}));
        setup();
       
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
	  new("/open/sky/obj1/wind_emblem")->move(environment(winner));
	  message_vision(HIM"\n从网中人的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/wind_emblem",sprintf("%s(%s) 让网中人掉下了风之纹章于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj1/wind_emblem")->move(environment(winner));
	  message_vision(HIM"\n从网中人的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/wind_emblem",sprintf("%s(%s) 让网中人掉下了风之纹章于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}