//woman
#include "/open/open.h"
#include <ansi.h>
inherit NPC;

string ask_metal()
{
     object who=this_player();
     who->set_temp("metal/where",1);
     return("[36m��Ҳ�����ҵ���˵��!!�����ǡ��������ֽ�����!![0m\n");
}

void create()
{
    set_name("�����ٸ�",({"young woman","woman"}));
    set("gender", "Ů��");
    set("age",22);
    set("attitude","friendly");
    set("long",@LONG

	�����ٸ�!!���ڽ���������, Ӧ����Ҫ���м��ɰ�ʳƷ��.....

LONG);
 
    set("combat_exp",20);
    set("str",10);
    set("con",5);
    set("int",10);
    set("per",8);
    set("cps",3);
    set("kar",8);
    set("chat_chance",3);   
    set("chat_msg", ({
     HIC+"�ٸ�˵: �����˵���˷���һ���ط������ڵ�����Ү!!\n"+NOR,
    }) );
    set("inquiry",([
    "����":(: ask_metal :),
 ])); 
    set_skill("dodge", 5);
    setup();
    add_money("coin", 15);
}
