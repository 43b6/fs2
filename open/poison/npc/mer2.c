
#include <ansi.h>
inherit F_VENDOR;
      

void create()
{
	set_name("�ӻ����ϰ�",({"shop keeper","keeper"}) );
	set("long","
�ӻ�����ϰ壬��������������������������еس������ϵ��̹ܣ��ƺ�
������ĵ������е����ȡ���������ʾ��Ҫ���Լ�����������Ҫ��ô�ٸ�
������\n");
		set("age",33);
		set("gender","����");
		set("str",25);
		set("no_kill",1);
 
		set("attitude","friendly");
		set("vendor_goods",({
		"/open/poison/obj/lamp.c",
		"/open/poison/obj/carver.c",
		"/open/poison/obj/broom.c",
	//	"/open/poison/obj/axe.c",
		"/open/poison/obj/rope.c",
		"/open/poison/obj/pipe.c",
		"/open/poison/obj/rain.c",
		"/open/poison/obj/hat.c",
		"/obj/example/wineskin.c",
	                           
	}) );
		set("max_kee",500);
		setup();
		carry_object("/obj/cloth.c")->wear();
		carry_object("/open/poison/obj/pipe.c")->wield();
 
}

void greeting(object me)
{
	if (!me || environment(me)!=environment()) return;
	{
	  command("yawn "+me->query("id"));
	  command("say ���ѽ..Ҫ���Լ������ɡ�");
	}
}
