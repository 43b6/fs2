
#include  <ansi.h>
inherit F_VENDOR;

void create()
{
	set_name("ҩ���ϰ�",({"shop keeper","keeper"}) );
	set("long","
ҩ�̵��ϰ壬����΢Ц�Ķ������ʾ�⡣\n");
	set("age",43);
	set("gender","����");
	set("vendor_goods",({
	"/open/poison/obj/plaster.c",
	//"/open/poison/obj/ginseng.c",
	//"/open/poison/obj/mushroom.c",
	//"/open/poison/obj/tginseng.c",
	//"/open/poison/obj/tmushroom.c",
}) );
	set("no_kill", 1);
	setup();
	carry_object("/obj/cloth.c")->wear();
}

void greeting(object me)
{
	if (!me || environment(me) != environment()) return;
	{
	  command("pat "+me->query("id"));
	  command("say �㿴�����ܽ����");
	} 
}
