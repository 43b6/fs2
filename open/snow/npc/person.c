#include <ansi.h>

inherit NPC;
void create()
{
	set_name("·��",({"person"}));
	set("gender","����");
	set("combat_exp",1);
	set("attitude","heroism");
	set("age",30);
	setup();
}
void init()
{
	object me = this_player();
	call_out("do_say",1,me);
}
int do_say( object me )
{
	object ob = me;
	command("say ��λ"+(ob->query("gender")=="����" ? "׳ʿ" : "����")+
		"������������ѩ��ɽ�������ڽ䱸�У�Ȱ����ò�Ҫ��ȥ��");
}
