// �μ� ���� made by onion
#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
	set_name("���ٷ�",({"shiao"}));
	set("long","���ٷ��Ƕ��Ƶĵ�ʮ��������, ��ר�������ǲɰ�һЩ����Ʒ��\n");
	set("gender","����");
	set("class","scholar");
	set("combat_exp", 4000);
	set("attitude","heroism");
	set("age",18);
	set("force",100);
	set("max_force",100);
	set_skill("force",20);
	set_skill("unarmed",30);
	set_skill("sunforce",20);
	set_skill("linpo-steps",20);
	set_skill("six-fingers",20);
	map_skill("force","sunforce");
	map_skill("dodge","linpo-steps");
	map_skill("move","linpo-steps");
	map_skill("unarmed","six-fingers");
	set("force_factor", 3);
	setup();
	carry_object(CAPITAL_OBJ"cloth0")->wear();
	carry_object(CAPITAL_OBJ"wrists0")->wear();
	add_money("coin",100);
	create_family("�μ�",11,"����");
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
	  new("/open/sky/obj8/autumn_wind")->move(environment(winner));
	  message_vision(HIM"\n�����ٷ�����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/autumn_wind",sprintf("%s(%s) �����ٷ��������ɪ���� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj8/autumn_wind")->move(environment(winner));
	  message_vision(HIM"\n�����ٷ�����ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/autumn_wind",sprintf("%s(%s) �����ٷ��������ɪ���� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}


