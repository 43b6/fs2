// /d/snow/npc/waiter.c
#include </open/capital/capital.h>  

inherit F_VENDOR;

void create()
{
	set_name("��������", ({ "waiter" }) );
	set("gender", "����" );
	set("age", 22);
	set("long",@LONG
��λ�������ϴ��Ż������·������������൱�ĸ��ţ�����
���ر�Ƹ�������ٹ��˵ġ�
LONG);
						
	set("combat_exp",500);
	set("attitude", "friendly");
	set("vendor_goods", ({
		CAP_OBJ"dumpling1",
		CAP_OBJ"chicken_leg1",
                CAP_OBJ"soup",
	}) );
	setup();
	carry_object("/open/capital/obj/silk_cloth1")->wear();
}

void init()
{	
	object ob;

	::init();
	add_action("do_vendor_list", "list");
}


