// /open/center/npc/vendor.c
#include </open/capital/capital.h>
					
inherit F_VENDOR;

void create()
{
	set_name("С��", ({ "vendor"}) );
	set("gender", "����" );
	set("age", 37);
	set("long", @LONG
һ�������ӻ���С����Ũü���ۣ����������ǹ���ĺ��ˡ�
LONG);
	set("attitude", "friendly");
	set("combat_exp",170);
	set("no_kill",1);

	set("vendor_goods", ({
	    "/obj/torch",
	    CAP_OBJ"map",
	}) );
						
	set("greeting_msg", ({
 	    "С��˵��: ��үС���ǣ���ľͷ���!\n",
	    "С��˵��: ��үС���ǣ��е�ͼ���!\n",	
	}) );
	setup();
}

				
