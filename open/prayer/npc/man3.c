//man--iron
#include <command.h>
#include <ansi.h>

inherit NPC;

string ask_metal()
{
	object who=this_player();
        if( who->query_temp("metal/where") >= 5 )
        {
	who->delete_temp("metal/where");
	who->set_temp("metal/where",6);
        return("[36mŶ!!�����Ҽ���Ů��˵��!! ���ǿ�ѽ, ���Ǻܻ��ҽ��������!!\n
        �һ���һЩ������Ҳ�����ڹ������Ľ�����!![0m\n");
        }
	else
	{
	return("[35m������, Ը�������һ��Ⱦ���??[0m\n");
	}
}   

string ask_friend()
{
	object who=this_player();
	if( who->query_temp("metal/where") >= 6 )
        {
	who->set_temp("metal/where",7);
	return("[36m[����]ѽ, �����ڶ������ڵ���!!\n
         �Ҹ������!!����Щ���Ѱ�, ����ϲ����ʥ�����ͷ��������!!\n
	 ������֧��ȥ���Ұ�!!���ҵ����ǵ�!![0m\n");
	}
        else
	{
	return 0;
	}
}

void create()
{
    set_name("��������",({"man"}));
    set("gender", "����");
    set("age",43);
    set("attitude","friendly");
    set("long",@LONG

	��ҹ���, �����ǹټҵĿ�, ���¹ٷ������Ŀ��ɹ���!!

LONG);
 
    set("combat_exp",600);
    set("str",10);
    set("con",5);
    set("int",10);
    set("per",8);
    set("cps",3);
    set("kar",8);
    set("chat_chance",3);   
    set("chat_msg", ({
     HIC+"���ӵ�: ������, ����ȸ�������ѽ!!\n"+NOR,
    }) );
    set("inquiry",([
    "����":(: ask_metal :),
    "����":(: ask_friend :),
 ])); 
    set_skill("dodge", 5);
    setup();
    add_money("coin", 15);
}
