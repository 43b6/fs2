// /open/center/npc/vendor.c
#include "/open/open.h"
inherit F_VENDOR;
void create()
{
	set_name("��С��",({"keeper"}));
	set("gender", "����" );
	set("age",23);
	set("long", "���¥��ջ�ĵ�С�� , ����æ���к����� .\n");
	set("attitude", "friendly");
	set("no_kill",1);
	set("vendor_goods", ({
	"/obj/example/chicken_leg",
	"/obj/example/dumpling",
	"/obj/example/wineskin",

	}) );
	
	setup();
}
void greeting(object ob)
{
        if( !ob || environment(ob) != environment() ) return;
	say("��С��˵��: ��λ"+RANK_D->query_respect(ob)+"��� , ����Ъ����� !\n");
return;
}
