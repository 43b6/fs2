
#include <ansi.h>

inherit F_VENDOR;

void create()
{
	set_name("����ϰ�", ({"shop keeper","keeper"}) );
	set("long","
����������ˣ�������������������������ĵĲ����ֺ�����Ͼ�к��㣬
�����������Ȳ�Ļ���õķ�������������\n");
	set("age",31);
	set("gender","����");
	set("str",25);
	set("no_kill",1);

	set("vendor_goods",({
	"/open/poison/obj/tea1.c",
	"/open/poison/obj/tea2.c",
	"/open/poison/obj/bean.c",
	"/obj/example/chicken_leg.c",
	"/obj/example/dumpling.c",
 }) );              
	set("attitude","friendly");
	set("max_kee",500);
	setup();
	carry_object("/obj/cloth.c")->wear();
}
void greeting(object me)
{
	if(!me || environment(me)!= environment()) return ;
{
	command("welcome "+me->query("id"));
	command("say ���ã�������ֹֹ�ʰɡ�");
}
}
