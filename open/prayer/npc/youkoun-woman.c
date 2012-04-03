//���
#include <command.h>
 
inherit NPC;

string ask_book();

void create()
{
    set_name("��Ů",({"woman"}));
    set("gender", "Ů��");
    set("age",35);
    set("attitude","friendly");
    set("long",@LONG

	����ϼɽ�ɵ�Ů����, ������װ���ڴ˵�!!

LONG);
 
    set("combat_exp",522000);
    set("str",36);
    set("con",34);
    set("int",22);
    set("max_kee",500);
    set("kee",500);
    set("max_force",500);
    set("force_factor", 10);
    set("force",500);
    set("limbs",({"ͷ","��","��","��","��","��"}));
    set_skill("dodge",130);
    set_skill("move",130);
    set_skill("parry",130);
    set_skill("whip",130);
    set_skill("force",130);
    set_skill("sunwhip",130);
    set_skill("fireforce",130);
    map_skill("force", "fireforce");
    map_skill("whip", "sunwhip");
    map_skill("parry", "sunwhip");
    set("inquiry",([
    "ϼɽ��":"[36mϼɽ�ɵ���ѧ·��, ϵʦ������֮[���ձ޷�]![0m\n",
    "����":(: ask_book :),
    "��ʮһ":"��.....���ҵ�ͬ��ʦ��!!�������ܬL�°ȥ��....\n",
    "�ܬL�":"����������ʥ�������֮һ--�����ŵ�����!!\n",
 ]));
    setup();
    carry_object("/open/prayer/obj/whip1")->wield();
    add_money("gold", 2);
}

void init()
{
	object who;
	::init();
	if(interactive(who =this_player()) && !is_fighting() )
	{
	remove_call_out("greeting");
        call_out("greeting",2,who);
        add_action("do_nod","nod"); 
        }
}

int do_nod()
{
	object who=this_player();
	if( who->query_temp("red") == 1  )
	{
	return 0;            
	}
	else
	{
	who->set_temp("help_red", 1);
        write("[36m��!!���ҵ���ĺ���Ϣ!!���°�����[0m\n");
        return 1;
        }

}

void greeting(object who)
{
    if( who->query_temp("kill_red") >= 1 ) 
    {
      if( who->query_temp("red") >= 1 )
      {
      write("\n[36m��һ������ʦ���������˰�!!ϣ����������һ��֮��, �����ܬL�
    ����񶾵�Ů��!!����(nod)??[0m\n");
      who->set_temp("red", 2);
      }
      else
      {
      write("\n[31m��֪�������ܬL��Ǹ����������Ů��������!!����ʦ����!![0m\n");
      kill_ob(who);
      }
    }
    return;
}


string ask_book()
{
    object who=this_player();
    object ob3=new("/open/prayer/obj/whipbook");
    if( who->query("quests/sunwhip",1) && !present("whipbook",who) )
    {
    ob3->move(this_player());
    return "[36m���Լ��úõش�Ħ��Ħ��!!�г�һ�տ�����������ɱ��[0m\n";
    }
    else
    {
    return "[36m������ѧ�������������й����֮��!![0m\n";
    }
}   

void die()
{

    object who;
    who= this_object()->query_temp("last_damage_from");
    if( who && userp(who) ) 
    {
    who->delete_temp("kill_red");
    who->set_temp("kill_red", 2);
    write("[36m������֮��, ϣ����������ת��ʦ����ʮһ, ������������ŵ������!![0m\n");
    }
    ::die() ;
}


