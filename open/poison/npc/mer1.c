
#include <ansi.h>
inherit F_VENDOR;
void create()
{
	set_name("����ϰ�", ({"shop keeper","keeper"}) );
	set("long","
����������ˣ����������ƺ�ʮ�ֺÿͣ��������ٵĴߴ���Ͽ�����Ʒ
��һ���������־��\n");
	set("age",35);
	set("no_kill", 1);
	set("gender","����");
	set("vendor_goods",({
	"/open/poison/obj/no1.c",
	"/open/poison/obj/no2.c",
	"/open/poison/obj/no3.c",
}) );
	setup();
	carry_object("/obj/cloth.c")->wear();
}
void greeting(object me)
{
	if(!me || environment(me) != environment()) return;
{
	command("smile "+me->query("id"));
	command("say ���...Ҫ��������?");
 }
}
