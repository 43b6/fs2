//man
#include <command.h>
#include <ansi.h>

inherit NPC;

string ask_metal()
{
	object who=this_player();
        if( who->query_temp("metal/where") >= 1)
        {
	who->set_temp("metal/where",2);
        return(" ��!!����һλ����ʦ�������ҵ�. \n");
	who->set_temp("metal/where",2);
        }
	else
	{
	return(" ����Ҫ�ؼ���. ��Ҫһ������??\n");
	}
}   

void create()
{
    set_name("��������",({"man"}));
    set("gender", "����");
    set("age",23);
    set("attitude","friendly");
    set("long",@LONG

	���������!!�����˾������ڻؼҵ�·��, һ·�ߺ߳���!!

LONG);
 
    set("combat_exp",400);
    set("str",10);
    set("con",5);
    set("int",10);
    set("per",8);
    set("cps",3);
    set("kar",8);
    set("chat_chance",3);   
    set("chat_msg", ({
     HIC+"���ӳ���: #$#@@#$%!@#$%#%#@#$ (���������ڳ�ɶҮ ...:P)!!\n"+NOR,
    }) );
    set("inquiry",([
    "����":(: ask_metal :),
 ])); 
    set_skill("dodge", 5);
    setup();
    add_money("coin", 15);
}
