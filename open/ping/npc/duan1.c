// �μ� ���� made by onion
#include <ansi.h>
#include </open/open.h>
inherit NPC;
string do_story();
string do_give();
object me=this_player();
void create()
{
	set_name("�����",({"liu"}));
	set("long","������Ƕ��ƵĴ����, �������μҵ��´�Լ�����������ֵ�, "+
    "�������书�����ϵ�, Ϊ��Ҳǫѷ����, ��˶������뽫����֮λ�ഫ�ˡ�\n");
	set("gender","����");
	set("class","scholar");
	set("combat_exp", 300000);
	set("attitude","heroism");
	set("age",45);
	set("inquiry",([
	"����" : "�������ű����Ƕμҹ������ӵ�, ����������ϵ�����, �������Ƕμ������",
	"�ű�" : "�������ű����Ƕμҹ������ӵ�, ����������ϵ�����, �������Ƕμ������",
	"sad_story" : (: do_story :),
	"һ���ķ�����" : (: do_give :),
	]));
	set("force",1500);
	set("max_force",1500);
	set("force_factor", 5);
	set_skill("force",50);
	set_skill("stabber",80);
	set_skill("unarmed",60);
	set_skill("dodge",60);
	set_skill("sunforce",60);
	set_skill("linpo-steps",60);
	set_skill("six-fingers",90);
	map_skill("force","sunforce");
	map_skill("dodge","linpo-steps");
	map_skill("move","linpo-steps");
	map_skill("parry","six-fingers");
	map_skill("stabber","six-fingers");
	map_skill("unarmed","six-fingers");
	set_temp("apply/dodge",100);
	set("chat_chance_combat", 20);
	set("chat_msg_combat", ({
		(: perform_action("stabber.handwriting") :),
	}));
	setup();
	carry_object(PING_OBJ"fan1")->wield();
	add_money("silver",50);
	create_family("�μ�",11,"����");
}

string do_story()
{
    me=this_player();
    if( (int)me->query_temp("thief") >= 4)
	{
	me->set_temp("thief",5);
	command("say ʦ����������..��ʵֻ��һ������ʦ����Ϊ����...");
	return ("�ڶ�ʮ����ǰ, ��ʦ�����ٷ�(chao)����λӢ������, Ҳ�ĵ�ʦ������, "+
		"ֻ�Ƕ�ʦ����������ٲ�����, ��Ȼһʱ�ѳֲ�ס, �����ϵ���Ů����"+
		"�����������񽣵Ľ���, �Ǻ���Ȼ��ʦ�����ķ���, ������׷��, ������"+
		"�Ź�, ʦ��Ҳֻ����ʹ����ʦ�����ʦ��, ��....\n\n"+
		"�����ͣ��һ���˵��: ��ת��ʦ��˵, Ҫ�����ʵ��"); 
	}
	else
	  return("����..û��������..����..û��������\n\n������ڴ�ͥ�����¾ͳ�������..����\n");
}

string do_give()
{
	object note;
	if( me->query("family/family_name") == "�μ�" )
	{
	  if( present("sunforce note",me) )
		return ("�����ϲ����Ѿ���һ������\n");
	  else{
		note=new(PING_OBJ"sunforce_note");
		if( !note->move(me) )
			note->move(environment(me));
		return ("�Ȿ�����м�����һ���ķ���һ������, ���ҷѾ�ǧ������Ѱ��"+
		"����, ����鷳ʦ��һ��, ���Ұ��Ȿ���Ž���ʦ�������ˡ�\n");
	  }
	}
	else
	{
	  command("? "+getuid(me));
	  return ("����񲻹������ม�");
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
	  new("/open/sky/obj8/bamboo_wind")->move(environment(winner));
	  message_vision(HIM"\n�����������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/bamboo_wind",sprintf("%s(%s) ������������������� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj8/bamboo_wind")->move(environment(winner));
	  message_vision(HIM"\n�����������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/bamboo_wind",sprintf("%s(%s) ������������������� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}

