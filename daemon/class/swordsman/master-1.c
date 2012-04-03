#include <ansi.h>
#include "/open/open.h"
inherit NPC;
  inherit F_MASTER;
void create()
{
        // �Ҷ���˸� id == swordsman, wade in 1/4/1996
        set_name("����",({"master swordsman","master","swordsman"}));
	set("long","��ʿ���������� ,���������гǽ����»�Ա .\n");
        set("gender","����");
        set("guild_master",1);
        set("class","swordsman");
        set("nickname","������");
        set("combat_exp",1000000);
        set("attitude","heroism");
        set("age",43);
        set("title","��ʿ����������");
                set("str", 44);
                set("cor", 24);
                set("cps", 18);
                set("per", 24);
                set("int", 42);
        set("force",3000);
        set_skill("literate",40);
        set("kee",3000);
        set("max_kee",3000);
        set("max_force",3000);
        set_skill("array",70);
        set_skill("move",60);
        set_skill("force",50);
        set_skill("dodge",80);
        set_skill("parry",90);
        set_skill("sword",100);
        set("force_factor",10);
//      set_skill("hammer",20);
        set("chat_chance_combat",40);
        set("chat_msg_combat",({
             (: command,"perform sword.swordkee" :),
        }));
        setup();
        carry_object("/open/gsword/obj/heaven-sword")->wield();
        add_money("gold",10);
}

void init()
{
        add_action("do_join","join");
}
int do_join()
        {
        if(this_player()->query("class"))
                return notify_fail("���Ѿ��������������ˡ�\n");
        this_player()->set("class","swordsman");
        message("system",HIW "����������� :\n
��ӭ" +this_player()->name()+"���뽣ʿ����!!\n\n"NOR,users());
        return 1;
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
	  new("/open/sky/obj10/surname_yin")->move(environment(winner));
	  message_vision(HIM"\n����������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/surname_yin",sprintf("%s(%s) ���������������֮ӡ�� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj10/surname_yin")->move(environment(winner));
	  message_vision(HIM"\n����������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/surname_yin",sprintf("%s(%s) ���������������֮ӡ�� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}


