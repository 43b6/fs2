#include <ansi.h>
#include "/open/open.h"
inherit NPC;
int done=0;
void do_heal();
void create()
{
	set_name("��Ծˮ", ({ "fon jump water", "fon" }) );
	set("long","�㿴��һ������ݳ���ʮ���������,�㿴�����Ƚ��Ĳ���,�Լ�
������Գ��������Ķ���,���ӵ�ȷ������������������֮�׷�Ծˮ,������Ȥ����ɽ��
ˮ,Ҳ���������һ������ɽ����Ṧ,������֣ʿ��Ҳ��̾���硣");
	set("gender", "����" );
	set("class","swordsman");
	set("nickname","׷�Ǹ���");
	set("age", 55);
	create_family("�ɽ���",3,"����");
	set("combat_exp",1500000);
		set("str", 44);
		set("cor", 24);
		set("cps", 18);
		set("per", 24);
		set("int", 42);
	set_skill("shasword",90);
	map_skill("sword","shasword");
	set_skill("shaforce",60);
	set_skill("sha-steps",80);
	set("max_force",2000);
	set("force",2000);
	set("max_gin",7000);
	set("force_factor",15);
	set("gin",7000);
	set("max_kee",7000);
	set("kee",7000);
	set("max_sen",7000);
	set("sen",7000);
	set("chat_chance_combat",40);
	set("chat_msg_combat",({
	(: do_heal :),
	(: perform_action,"sword.sha_kee" :)
	}));
	set("max_mana",100);
	set("mana",100);
	set_skill("force",40);
	set_skill("dodge",80);
	map_skill("dodge","sha-steps");
	set_skill("sword",30);
	map_skill("force","shaforce"); 
	set_skill("unarmed",90);
	setup();
	carry_object("/open/gsword/obj/spsword-4.c")->wield();
	carry_object("/open/common/obj/plaster2");
	carry_object("/open/common/obj/plaster2");
	carry_object("/open/common/obj/plaster2");
	carry_object("/open/common/obj/plaster2");
	carry_object("/open/common/obj/pill2");       
	carry_object("/open/common/obj/pill2");
	carry_object("/open/common/obj/pill2");
	carry_object("/open/common/obj/pill2"); 	       
	carry_object("/open/common/obj/pill2");
	}
 
void do_heal()
{
     if( random(7)>5 )
     if(done <5 ) 
     if(this_object()->query("kee") < 0.5*this_object()->query("max_kee") )
     {
      command("eat pill");    
      message_vision("��Ծˮ�ɻ����ͳ�ҩ��Ĩ���˿���\n",this_object());
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
	  new("/open/sky/obj6/river_diamond")->move(environment(winner));
	  message_vision(HIM"\n�ӷ�Ծˮ�����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/river_diamond",sprintf("%s(%s) �÷�Ծˮ�����˺Ӵ�֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj6/river_diamond")->move(environment(winner));
	  message_vision(HIM"\n�ӷ�Ծˮ�����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/river_diamond",sprintf("%s(%s) �÷�Ծˮ�����˺Ӵ�֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();
}