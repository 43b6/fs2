//woman
#include <command.h>
#include <ansi.h>

inherit NPC;

string ask_metal()
{
    object who=this_player();
    if( who->query_temp("metal/where") >= 3 )
    { 
    who->set_temp("metal/where",4);
    return("[36m�������������ɩ�����ʱ���ᵽ��!!�����ҵ�ѽ, �������˿�����������������!!\n
    ��˵����ĳ��ɽ���ڵ���!![0m\n");
    }
    else
    {
    return("[35m������, ����һ��ȥ����ɩ����ȥ!![0m\n");
    }
}

void create()
{
    set_name("����Ů",({"westarea woman","woman"}));
    set("gender", "Ů��");
    set("age",42);
    set("attitude","friendly");
    set("long",@LONG

	����Ů!!����û�µ����Ѽ�ȥ{����}, ���ֳ������
	֪��������Ӧ�úܶ�Ŷ�.....

LONG);
 
    set("combat_exp",70);
    set("str",10);
    set("con",5);
    set("int",10);
    set("per",8);
    set("cps",3);
    set("kar",8);
    set("chat_chance",3);   
    set("chat_msg", ({
     HIC+"��Ů˵: �߆�!!����ѽû��ʲô����, ȥ�����������!!\n"+NOR,
    }) );
    set("inquiry",([
    "����":(: ask_metal :),
 ])); 
    set_skill("dodge", 5);
    setup();
    add_money("coin", 15);
}
