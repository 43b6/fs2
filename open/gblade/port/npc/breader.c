// /open/center/npc/vendor.c
#include "/open/open.h"
inherit F_VENDOR;
void create()
{
	set_name("���ʦ��",({"breader"}));
	set("gender", "����" );
	set("age", 42);
	set("long", @LONG
һ���������ֵ����ʦ�� , �����⸱���������������
��ó��� ? 
LONG);
	set("attitude", "friendly");
	set("combat_exp",2000);
	set_skill("dodge",20);
	set_skill("unarmed",50);
	set_skill("parry",50);
	set("vendor_goods", ({
	"/open/gblade/port/obj/bread",
	}));
	set("greeting_msg", ({
 	    "���ʦ˵��: ��� !��� ! �ʵ���ϲ���ԵĲ������� !\n",
	    	}) );
	setup();
	add_money("silver",1);
	
}
