#include <command.h>
#include <ansi.h> 
 
inherit NPC;
string ask_help()
{
   object who=this_player();

   if( !who->query_temp("ɱ���˷�") && who->query("marks/ʥ�������",1))
   {
   command("say �����������������, ����(nod)??");
   who->set_temp("can_nod",1);
   }
   else
   {
   return 0;
   }
}
 
void create()
{
    set_name("�˷�",({"criminal"}));
    set("title", "���ε�");
    set("gender", "����");
    set("age",46);
    set("attitude","friendly");
    set("long",@LONG
	��λή�Ҳ�����˷�����������ŵĵ���֮һ, �����ڴ˵�����Ϊ
	Ű���˷�̫���б�!!��������������Ҫ���˷�, ���Ա�����������
	��, ������Ű������ζ!!

LONG);
 
    set("combat_exp",4000);
    set("str",1);
    set("con",1);
    set("int",1);
    set("max_kee",5);
    set("kee",5);
    set("limbs",({"ͷ","��","��","��","��","��"}));
    set("chat_chance",5);
    set("chat_msg",({
    HIC+"�˷�˵ : ����ȥ�������������??\n"+NOR,
    HIC+"�˷�˵: ������!!\n"+NOR, 

 }));
    set("inquiry",([
    "����":(: ask_help :),
    ]));

    setup();
}

int accept_kill(object who)
{
        who->set_temp("ɱ���˷�",1);
        command("say ��.."+RANK_D->query_rude(who)+who->name()+"ɱ���˷����б�Ӧ�ġ�");
        return 1;
}

int accept_fight(object who)
{
    return notify_fail("�˷�������˵��:$N���кð�!! ֱ�ӽ���Ұ�!!��kill�ȽϿ���");
}

void init()
{
     add_action("do_nod","nod"); 
}

int do_nod()
{
	object who=this_player();
    if( who->query_temp("can_nod",0))
	return 0;
	if( who->query_temp("ɱ���˷�"))
	return 0;
	who->delete_temp("can_nod");
	who->set_temp("can_tell",1);
}
