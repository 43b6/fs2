//man
#include <command.h>
#include <ansi.h>

inherit NPC;

string ask_metal()
{
	object who=this_player();
        if( who->query_temp("metal/where") >= 2 )
        {
	who->set_temp("metal/where",3);
        return(" Ŷ!!ǰ������ɩ���˿�������, Ҫ�Ұ�����������.\n
        ����˵�������ҵ�������ھ������!!\n");
        }
	else
	{
	return(" ����Ľ����ǲ�׼˽�·��۵�!!\n");
	}
}   

void create()
{
    set_name("��������",({"man"}));
    set("gender", "����");
    set("age",51);
    set("attitude","friendly");
    set("long",@LONG

	������������!!ԭ��������ٷ�������, ��Ϊ�����Ѹ�
	���Դӹټ�������!!Ŀǰ�ڼ�����, �пջ���ھӴ��
	С����!!

LONG);
 
    set("combat_exp",200);
    set("str",10);
    set("con",5);
    set("int",10);
    set("per",8);
    set("cps",3);
    set("kar",8);
    set("chat_chance",3);   
    set("chat_msg", ({
     HIC+"�����ɵ�: ��������Ǹ�С�������Ű���������, ��!����Ƥѽ!!\n"+NOR,
    }) );
    set("inquiry",([
    "����":(: ask_metal :),
 ])); 
    set_skill("dodge", 5);
    setup();
    add_money("coin", 15);
}
