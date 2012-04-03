#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void do_hurt();
void do_heal();
int done=0;
void create()
{
	set_name("��Х��", ({ "wang shou un", "wang" }) );
       set("long"," �㿴��һ��������������ĸߴ������,�����ǵ���֣ʿ�������
��ʱ,���쵱���ɽ�����һ���Ʒ��Ըߵ�����ͽ���ɽ�����������, Ҳ��Ϊ��� �ɽ�����
�������������м�,�������ڹ�Ҳ�Ƕ����ɽ������ܶ�������,�����������������е�
������Х��.");
	set("gender", "����" );
	set("class","swordsman");
	set("age", 59);
	set("combat_exp",1200000);
		set("str", 44);
		set("cor", 24);
		set("cps", 18);
		set("per", 24);
		set("int", 42);
	set("nickname","һ������");
	create_family("�ɽ���",3,"����");
	set_skill("shasword",80);
	map_skill("sword","shasword");
	set_skill("shaforce",80);
	set_skill("sha-steps",60);
	set("max_force",2000);
	set("force",2000);
	set("max_gin",5000);
	set("force_factor",35);
	set("gin",5000);
	set("max_sen",5000);
	set("sen",5000);
	set("max_kee",5000);
	set("kee",5000);
	set("chat_chance_combat",30);
	set("chat_msg_combat",({
	 (: do_hurt :),
	(: perform_action,"sword.sha_kee" :),
	(: do_heal :)
	}));
	set("max_mana",100);
	set("mana",100);
	set_skill("force",40);
	set_skill("dodge",60);
	map_skill("dodge","sha-steps");
	set_skill("sword",60);
	map_skill("force","shaforce"); 
	set_skill("unarmed",90);
	setup();
	carry_object("/open/gsword/obj/spsword-3")->wield();
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
		       
	}
 
void do_hurt()
{
   object ob;
    ob=this_object()->query_temp("last_damage_from");
      if(!ob) return ;
   message_vision("��Х�ƴ��һ����߾!!��,һ��ǿ����������������Ѫ\n",this_object());
   ob->add("kee",-random(200));
}
   
void do_heal()
{
      if(done <5 )
      if(this_object()->query("kee") < 0.2*this_object()->query("max_kee") )
      {
      command("eat pill");
      message_vision("��Х���ɻ����ͳ�ҩ��Ĩ���˿���\n",this_object());
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
	  new("/open/sky/obj6/forest_diamond")->move(environment(winner));
	  message_vision(HIM"\n����Х�Ƶ����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/forest_diamond",sprintf("%s(%s) ����Х�Ƶ�����ɭ��֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj6/forest_diamond")->move(environment(winner));
	  message_vision(HIM"\n����Х�Ƶ����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/forest_diamond",sprintf("%s(%s) ����Х�Ƶ�����ɭ��֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();
}					   
     
