
#include <ansi.h>
inherit F_VENDOR;

void create()
{
	set_name("������",({"boss wang","wang","boss"}));
	set("long"," ��������ӻ�����ϰ� , ���������ŵ���Ļ��� .\n");
	set("age",33);
	set("gender","����");
	set("no_kill",1);
 
	set("attitude","friendly");
	set("vendor_goods",({
		"/open/poison/obj/broom.c",
		"/obj/torch",
		"/open/port/obj/map",
	                           
	}) );
	setup();
	carry_object("/obj/cloth.c")->wear();
 
}

void greeting(object me)
{
	if (!me || environment(me)!=environment()) return;
	{
	  command("welcome "+me->query("id"));
	}
}
