//man--copper
#include <command.h>
#include <ansi.h>

inherit NPC;

string ask_metal()
{
	object who=this_player();
        if( who->query_temp("metal/where") >= 6 )
        {
	who->delete_temp("metal/where");
	who->set_temp("metal/where",7);
        return("[36mŶ!!��������˵����!!���ǿ�ѽ, ���Ǻܻ��ҽ��������!!\n
	�ڶ���������֧��֮�丽���ĵط������ҵ�[ͭ��]�!!�ڶ�����Ҳ�����ҵ�[ͭ��]�!![0m\n");
        }
	else
	{
	return("[35m������, Ը�������һ��Ⱦ���??[0m\n");
	}
}   

void create()
{
    set_name("��������",({"man"}));
    set("gender", "����");
    set("age",63);
    set("attitude","friendly");
    set("long",@LONG

	��λ���������ǹټҵĿ�, ���¹ٷ������Ŀ��ɹ���!!

LONG);
 
    set("combat_exp",500);
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
 ])); 
    set_skill("dodge", 5);
    setup();
    add_money("coin", 15);
}
