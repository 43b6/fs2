// /open/center/npc/vendor.c

#include "/open/capital/capital.h"
							
inherit F_VENDOR;
			
void create()
{
	set_name("���Ƶ���ͷ", ({ "oldman"}) );
	set("gender", "����" );
	set("age", 81);
	set("long", @LONG
һ�����Ƶ���ͷ���������ı��ӣ���֪����ƽʱҲϲ����������
LONG);
	set("attitude", "friendly");
	set("combat_exp",230);
	
	set("vendor_goods", ({
	    CAP_OBJ"egg",
	    CAP_OBJ"peanut",
	    "/obj/example/wineskin",
	}) );
						
	set("greeting_msg", ({
 	    "��ͷ˵��: �úȵľ��!\n",
	    "��ͷ˵��: ���̻����¾����?\n",	
	}) );
	setup();
}
