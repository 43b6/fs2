// ��������

#include <ansi.h>
#include "/open/open.h"
inherit NPC;

void create()
{
  object ob;
	set_name("[33m����ͥ[0m", ({"master uh","master","uh"}));
        set("nickname","[36m������ʮ����[0m");
	set("long",@LONG

	��������֮ʱ, ��ͨ�����ѧ, �����Ե�, ��, ����
	��Ϊ��!!�����º�, ϲ�������������ߵ��̳�Ϊ����
	��ǿ��ݼӢ����!!��ʥ��̵ĸ������ǽ�����ֵ�!!
	����֮���Գ�һ��, �Գ�Ϊ [�����] !!

LONG);
	set("gender","����");
        set("class","prayer");
        set("title","��������");
	set("combat_exp",4500000);
        set("attitude","heroism");
	set("age",73);
        set("kee",9500);
        set("max_kee",9500);
	set("force",10000);
	set("max_force",10000);
	set("force_factor",35);
        set("max_gin",6800);
        set("max_sen",6800);
        set_skill("dodge", 60);
	set_skill("sword", 300);
	set_skill("blade", 300);
	set_skill("whip", 300);
	set_skill("cure",65);
	set_skill("literate",65);
	set_skill("force",90);
        set_skill("move", 70);
        set_skill("parry", 70);
        set_skill("stick",55);
        set_skill("unarmed", 90);
	setup();
	create_family("�����",1,"����");
}

int accept_kill(object ob)
{
        command("smile");
	command("say �Ϸ������, ����Ҫ��Թ������??\n");
        return 0;

}

void init()
{
	object ob;
	::init();
	if(interactive(ob =this_player()) && !is_fighting() )
	{
	remove_call_out("greeting");
        call_out("greeting",1,ob);
        add_action("do_nod","nod"); 
        add_action("do_thx","thx");
        }
}

void greeting(object ob)
{
        if (ob->query_temp("high-man") == 4 )
        {
        write("\n[36m�Ǻ�, ��λС�ֵ�������??��������!!�ҿ�����·���˵�!!�������С����û��!![0m\n");
        write("\n�����������, �úõ�������!!\n");
        ob->set_temp("high-man", 5);
        return; 
        }
}

int do_thx()
{
	object ob=this_player();
	if ( ob->query_temp("high-man") == 5 )
        {
        write("\n[36m�Ϸ�����Ҳ������Ե��, ���������Ҳ����, �ʹ���һЩ������Ϊ����֮�ð�!!��������ɽ��, �ɲ�Ҫ�������κ�ֻ��Ƭ��!!����(nod)??[0m\n");
        ob->set_temp("high-man", 6);
        return 1;
        }
	else
        {
	return 0;
	}
}

int do_nod()
{
	object ob = this_player();
	int lv  = (int)ob->query("cor");
	int lv1 = (int)ob->query("con");

        if( ob->query_temp("high-man") < 6 && ob->query("quests/high-man") )
        {
	return 0;
	}
	else
        {
	write("\n[36m��!!��������Ϳ�ʼ������!!,,,,,,,,,,,,,,[0m\n");
	ob->add("max_force", (lv+lv1)*5);
	ob->add("combat_exp", (lv+lv1)*1200); 
	ob->set_skill("sword", 30);
	ob->set_skill("blade", 30);
	ob->set_skill("whip", 30);
	ob->set("quests/high-man",1);
	ob->delete_temp("high-man");
        return 1;
	}

}
