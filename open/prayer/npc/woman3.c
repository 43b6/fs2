//woman
#include "/open/open.h"
#include <ansi.h>

inherit NPC;

string ask_metal()
{
    object who=this_player();
    if( who->query_temp("metal/where") >= 4 )
    { 
     who->set_temp("metal/where",5);
     return("[36m��ѽ!!�Ҽ��Ǹ�����ѽ, ��Ȼ���˿�������, ��Ҫ����ȥ���˰�������!![0m\n");
    }
    else
    {
     return("[35m��!!�������ǹٸ�������??[0m\n");
    }
}
void create()
{
    set_name("��ɩ",({"lee woman","lee","woman"}));
    set("gender", "Ů��");
    set("age",41);
    set("attitude","friendly");
    set("long",@LONG

	��ɩ�����ֵĳ��฾֮һ, ����������һλ��, �ڹ�
	������!!

LONG);
 
    set("combat_exp",25);
    set("str",10);
    set("con",5);
    set("int",10);
    set("per",8);
    set("cps",3);
    set("kar",8);
    set("chat_chance",3);   
    set("chat_msg", ({
     HIC+"��ɩ˵: �Ǻ�!!��ѽ, ���������¼�ϱ�����������ҵ���������!!\n"+NOR,
    }) );
    set("inquiry",([
    "����":(: ask_metal :),
    "���ҵ�":"[36m�ҵ��ҵ�ѽ, ��������ʥ��̵���̳���������ѺȾ���!![0m\n",
 ])); 
    set_skill("dodge", 5);
    setup();
    add_money("coin", 15);
}
