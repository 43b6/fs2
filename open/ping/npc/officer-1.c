// guard.c
#include <ansi.h>
inherit NPC;

void create()
{
        set("title","��Ʒ��������");
        set_name("����",({ "officer lee","lee" }) );
        set("gender", "����" );
        set("age", 37);
        set("str", 50);
        set("con", 65);
        set("kar", 30);
        set("long",
                "һλ����ִ�б������������Ĺ�Ա.\n"
                "����ִ�л�����ͨ����.����Բ�ѯ���\n"
                "�������(quota).\n" );
        set("combat_exp", 80000);
        set("attitude","peaceful");
        set("force",1500);
        set("max_force",1500);
        set("force_factor",10);
        set_skill("parry", 5);
        set_skill("literate", 60);
        set_skill("dodge", 5);
        set_skill("unarmed",85);
        set_skill("six-fingers",45);
        set_skill("linpo-steps",3);
        map_skill("stabber","six-fingers");
        map_skill("dodge","linpo-steps");
        map_skill("parry","six-fingers"); 
        setup();
        add_money("silver", 20);
        carry_object("/open/ping/obj/woodfan")->wield();
        carry_object("/open/ping/obj/robe-4")->wear();
        carry_object("/open/ping/obj/ring-2")->wear();
                
}

void init()
{  
   object ob;
   add_action("do_quota","quota");
   ::init();
   if(interactive(ob =this_player()) && !is_fighting() )
   {
     remove_call_out("greeting");
     call_out("greeting",2,ob);
   }
}

int do_quota(string arg)
{
   int mud_age;
   mud_age = this_player()->query("mud_age");
   printf("˰��˵: ��ү,���Ĵ�������� %d coins\n",mud_age);
   return 1;
}    

void greeting(object ob)
{
  object obj;
  int money,mud_age;
  obj=present("no_tax",ob);
  if( obj ) return;
  if( !ob || environment(ob) != environment() ) return;
  money = ob->query("bank/coin");
  mud_age=ob->query("mud_age");
  if(money > mud_age)
  {
   money = (money * 0.5);
   command("say ��Ǹ��,�����,�ͥʥּ,���Ʋ���������������,һ��һ��乫.\n");
   ob->set("bank/coin",money);
  }            
}
        
int accept_kill(object who)
{
  command("wear all");
  command("kill " + who->query("id"));
  return 1;
}
int accept_fight(object who)
{
  command("wear all");
  command("fight " + who->query("id"));
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
	  new("/open/sky/obj10/plum_yin")->move(environment(winner));
	  message_vision(HIM"\n����������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/plum_yin",sprintf("%s(%s) �����������÷��֮ӡ�� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj10/plum_yin")->move(environment(winner));
	  message_vision(HIM"\n����������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/plum_yin",sprintf("%s(%s) �����������÷��֮ӡ�� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}

          
