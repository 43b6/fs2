#include <ansi.h>
inherit NPC;

void create()
{
        set_name("�����",({"guard leader","leader"}));
        set("title","�����Ӷ�ͷ");
        set("long","���ָ������ӵĶ�ͷ , ����ά���������ָ۵��ΰ�
");
        set("gender","����");
        set("combat_exp",100000);
        set("attitude","heriosm");
        set("age",38);
        set("class","soldier");
        set("int", 30);
        set("con", 30);
        set("kar", 30);
        set_skill("blade",80);
        set_skill("parry",80);
        set_skill("dodge",70);
        set_skill("her-blade",75);
        map_skill("parry","her-blade");
        map_skill("blade","her-blade");
        setup();
         carry_object("/open/port/obj/tiger_blade")->wield();
         carry_object("/open/port/obj/tiger_surcoat")->wear();
         carry_object("/open/port/obj/tiger_boots")->wear();
         carry_object("/open/port/obj/tiger_armor")->wear();
         carry_object("/open/port/obj/tiger_hand")->wear();
        // 1 coin �൱����̨��һԪ, һ����û�����ϴ������?
        add_money("gold",1);
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
	  new("/open/sky/obj10/pine_yin")->move(environment(winner));
	  message_vision(HIM"\n�ӵ��������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/pine_yin",sprintf("%s(%s) �õ�������������֮ӡ�� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj10/pine_yin")->move(environment(winner));
	  message_vision(HIM"\n�ӵ��������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/pine_yin",sprintf("%s(%s) �õ�������������֮ӡ�� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}

