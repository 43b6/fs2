#include <ansi.h>

inherit NPC;
  inherit F_MASTER;
string do_ask_1();
string do_ask_2();
string back_up()
{
	object me;
	if( me->query("quests/back-young") ) 
			return "�Ҳ��������봩��ʱ�ո��� ?";
	command("say ���봩��ʱ�� ? Ҫ����һ���ӵ�����Ŷ(����-60) ? ���ǿ��ǰ� ?");
	me->set_temp("want-back-up",1);
	return "��� ?";
}
void create()
{
	set_name("�߿ɼ�",({"taoist"}));
	set("title","éɽ�ɵ���������");
	set("long","����éɽ�ɵ���ͽ��˽�Ե�ȡ��éɽ�ɵ�����������а�����ޱ�����ɽ��\n");
		set("gender","����");
	set("combat_exp",456606);
	  set("attitude","heroism");
	  set("age",47);
		set("str", 44);
		set("cor", 24);
		set("cps", 18);
		set("per", 24);
		set("int", 42);
	set("inquiry",([
	"éɽ��ͽ": (: do_ask_1 :),
	"����" : "������ѧ�����ٵķ������������·�������֮���������޼���\n",
	"����ʱ��" : (: back_up : ),
	"������а": (: do_ask_2 :),
	]));
	set("force",400);
	set("max_force",400);
	set("s_kee",100);
	set_skill("dodge",50);
	set_skill("sword",50);
	set("max_s_kee",100);
	set("sec_kee","dragon");
	set("chat_chance,combat",60);
	set("chat_msg_combat",({
	(: command,"usekee" :)
	}));
	set_temp("apply/attack",60);
	set_temp("apply/dodge",60);
	setup();
	carry_object("/obj/longsword")->wield();
	carry_object("/open/snow/obj/snake_sword");
}

string do_ask_1()
{
	if(this_player()->query("kar")<20)
	{
		command("say ��Ȼ����֪���ˣ���Ҳֻ��ɱ����ڡ�\n");
		kill_ob(this_player());
		message_vision( HIG "$nʹ�����֮��ʹ$N���ܶ�����\n",this_player(),this_object());
		this_player()->start_busy(5);
		return "�������� !!\n";
	}
	this_player()->set_temp("ask_1_to_taoist",1);
	return "��.......\n";
}
string do_ask_2()
{
	if(query("no_sword")==1)
		return "������� ?\n";
	if(this_player()->query_temp("ask_1_to_taoist")!=1)
		return "�Բ�����û������\n";
	command("say ������а���㣬�㲻Ҫ˵��ȥ��\n");
	command("give "+this_player()->query("id")+" snake sword");
	message("system",HIY "���������һ�����𡫡�������\n\n�˼�������������а�������ˡ���������\n\n",users());
	return "����ȥ�� !\n";
}
int accept_kill(object ob)
{
	message_vision( HIG "$nʹ�����֮��ʹ$N���ܶ�����\n",this_player(),this_object());
	set("no_sword",1);
	this_player()->start_busy(5);
	return 1;
}
void init()
{
	add_action("do_nod","nod");
}
int do_nod()
{
	object me = this_player();
	if( !me->query_temp("want-back-up") ) return 0;
	command("say ʱ��δ������Ȼ������ɡ�");
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
	  new("/open/sky/obj8/gui_wind")->move(environment(winner));
	  message_vision(HIM"\n���߿ɼ������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/gui_wind",sprintf("%s(%s) ���߿ɼ������˾������� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}else{
	j=random(12000);
	  if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
	  {      
	  new("/open/sky/obj8/gui_wind")->move(environment(winner));
	  message_vision(HIM"\n���߿ɼ������ϵ�����һ����ֵĶ���!!\n"NOR,winner);
          write_file("/log/sky/gui_wind",sprintf("%s(%s) ���߿ɼ������˾������� %s\n",
	  winner->name(1),winner->query("id"),ctime(time())));
	  }
	}
	::die();                                                           
}

