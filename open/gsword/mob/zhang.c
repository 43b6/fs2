#include </open/open.h>
#include <ansi.h>
inherit NPC;

string call_liu();
void create()
{
	set_name("ʦү �ű�",({ "zhang pin","zhang","pin"}) );
	set("race", "����");
	set("age", 47);
	set("long",
"һλ������������,�����潫�������Ѿ���ʮ����,һֱ�ǽ�����
�ص��˲�,����æ�ڹ���.
");
	set("inquiry",([
	    "������" : "�Բ���,�ⶫ������������",
	    "�����" : (: call_liu :),
	    "liu"    : (: call_liu :),
	   ])); 
	set("str", 20);
	set("max_force", 250);
	set_skill("unarmed", 25);
	set("force", 250);
	set_skill("parry", 27);
	set_skill("dodge", 24);
	set_skill("six-fingers", 20);
	set("force_factor", 8);
	map_skill("unarmed","six-fingers");
	set("combat_exp",5000);
	set_temp("apply/armor", 13);
	set_temp("apply/dodge", 13);
	setup();
	carry_object(GS_OBJ"boots")->wear();
	carry_object(GS_OBJ"robe_3")->wear();
	add_money("silver", 10);
}

string call_liu()
{
	object ob = this_object();
	object me = this_player();
	if( !ob->query_temp("call_liu") )
	{
	  ob->set_temp("call_liu",1);
	  call_out("call_liu_1",3);
	  return(RANK_D->query_respect(me)+"����������������ǰ�, �����Ͻ�������"+
	  "\n\n"+ob->query("name")+"�����������¥�ϴ�ȥ: �����������, ��λ"+
	  RANK_D->query_respect(me)+"��ݼ���\n");
	}  
	else
	{
	  if( present("liu",environment(ob)) )
	    return(RANK_D->query_respect(me)+"���ۻ����ǰ�, ����������վ������ǰ��?\n");
	  else
	    return("������������ոճ���ȥ��, "+RANK_D->query_respect(me)+"�������������");
	}
}

void call_liu_1()
{
	object ob = this_object();
	object me = this_player();
	object liu = new(PING_NPC"duan1");
	tell_room(environment(ob),"һ��Ų�����¥�ϴ���...\n");
	tell_room(environment(ob),"����繰����Ҿ. ������ò�Ķ���˵:�� ���������! ���ָ��! ��\n");
	liu->move(environment(ob));
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
	  new("/open/sky/obj9/life_charm")->move(environment(winner));
	  message_vision(HIM"\n���ű������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/life_charm",sprintf("%s(%s) ���ű�����������֮���� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 )
	  {
	  new("/open/sky/obj9/life_charm")->move(environment(winner));
	  message_vision(HIM"\n���ű������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/life_charm",sprintf("%s(%s) ���ű�����������֮���� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();
}