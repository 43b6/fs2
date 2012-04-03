#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void do_busy();
    int done=0;
void do_heal();
object ob;
void create()
{
	set_name("寒紫冰", ({ "han the bin", "han" }) );
	set("long","这是一位身形窈窕,容颜秀丽的女子尽管她看上去巧笑嫣然, 目光
 流盼,但那把隐隐透出古怪寒气的配剑却使你心生畏惧,猛然忆起她原来是仙剑第三代弟
 子流星三剑客中剑法最精的女侠---寒紫冰");
	set("gender", "女性" );
	set("class","swordsman");
	set("nickname","飞剑仙子");
	set("age", 39);
	set("family/family_name","仙剑派");
	set("combat_exp",1000000);
		set("str", 54);
		set("cor", 24);
		set("cps", 18);
		set("per", 24);
		set("int", 42);
	create_family("仙剑派",3,"弟子"); 
	set_skill("shasword",110);
	map_skill("sword","shasword");
	set_skill("shaforce",60);
	set_skill("sha-steps",60);
	set("max_force",2000);
	set("force",2000);
	set("max_gin",9000);
	set("max_sen",9000);
	set("sen",9000);
	set("force_factor",25);
	set("gin",9000);
	set("max_kee",9000);
	set("kee",9000);
	set("chat_chance_combat",10);
	set("chat_msg_combat",({
	(: do_busy :),
	(: perform_action,"sword.sha_kee" :)
	}));
	set("max_mana",100);
	set("mana",100);
	set_skill("force",40);
	set_skill("dodge",60);
	map_skill("dodge","sha-steps");
	set_skill("sword",80);
	map_skill("force","shaforce"); 
	set_skill("unarmed",90);
	setup();
	carry_object("/open/gsword/obj/spsword-2.c")->wield();
	carry_object("/open/common/obj/pill2");
	carry_object("/open/common/obj/pill2");
	carry_object("/open/common/obj/pill2");
	carry_object("/open/common/obj/pill2");
	carry_object("/open/common/obj/pill2");
	carry_object("/open/common/obj/plaster2");
	carry_object("/open/common/obj/plaster2");
	carry_object("/open/common/obj/plaster2");
	carry_object("/open/common/obj/plaster2");
	carry_object("/open/common/obj/plaster2");
	carry_object("/open/common/obj/plaster2");
	
	}
 
void do_busy()
{
   if( random(7)>4 )
   message_vision("寒冰剑寒气逼人 ,瞬间你被冻结了\n",this_object());
   ob=this_object()->query("last_damage_from");
      if(ob)
   ob->start_busy(1);
   }

void do_heal()
{
   if(done <5 )
   if(this_object()->query("kee") < 0.2*this_object()->query("max_kee") )
   {
    command("eat pill");
    message_vision("紫寒冰由怀里掏出药膏抹在伤口上\n",this_object());
    command("apply plaster");
    done++;
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

	if ( winner->query_temp("bless")==1 )
	{
	j=random(6000);
	  if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
	  {      
	  new("/open/sky/obj6/extreme_diamond")->move(environment(winner));
	  message_vision(HIM"\n从寒紫冰的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/extreme_diamond",sprintf("%s(%s) 让寒紫冰掉下了极地之冰钻于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj6/extreme_diamond")->move(environment(winner));
	  message_vision(HIM"\n从寒紫冰的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/extreme_diamond",sprintf("%s(%s) 让寒紫冰掉下了极地之冰钻于 %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();
}
