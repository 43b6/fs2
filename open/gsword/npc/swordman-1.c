#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void do_busy();
    int done=0;
void do_heal();
object ob;
void create()
{
	set_name("���ϱ�", ({ "han the bin", "han" }) );
	set("long","����һλ������,����������Ů�Ӿ���������ȥ��Ц��Ȼ, Ŀ��
 ����,���ǰ�����͸���Źֺ������佣ȴʹ������η��,��Ȼ������ԭ�����ɽ���������
 �������������н������Ů��---���ϱ�");
	set("gender", "Ů��" );
	set("class","swordsman");
	set("nickname","�ɽ�����");
	set("age", 39);
	set("family/family_name","�ɽ���");
	set("combat_exp",1000000);
		set("str", 54);
		set("cor", 24);
		set("cps", 18);
		set("per", 24);
		set("int", 42);
	create_family("�ɽ���",3,"����"); 
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
   message_vision("�������������� ,˲���㱻������\n",this_object());
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
    message_vision("�Ϻ����ɻ����ͳ�ҩ��Ĩ���˿���\n",this_object());
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
	  message_vision(HIM"\n�Ӻ��ϱ������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/extreme_diamond",sprintf("%s(%s) �ú��ϱ������˼���֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj6/extreme_diamond")->move(environment(winner));
	  message_vision(HIM"\n�Ӻ��ϱ������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/extreme_diamond",sprintf("%s(%s) �ú��ϱ������˼���֮������ %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();
}
