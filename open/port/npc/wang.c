// /open/center/npc/vendor.c
#include "/open/open.h"
inherit F_VENDOR;
void create()
{
	set_name("��������", ({ "wang" }) );
	set("gender", "����" );
	set("age", 42);
	set("long", @LONG
��������һ����������Ŀ���ĵĵ��� , ��������������
ʱһ��Ҳ�������ĺú� .
LONG);
	set("attitude", "friendly");
	set("combat_exp",20000);
	set_skill("dodge",50);
	set_skill("blade",50);
	set_skill("parry",50);
	set_skill("gold-blade",30);
	set_skill("fly-steps",30);
	map_skill("blade","gold-blade");
	map_skill("dodge","fly-steps");
	set("vendor_goods", ({
            GS_OBJ"woodblade",
	    "/open/gblade/obj/blade",
            "/open/gblade/obj/knife",	
	"/open/badman/obj/blade",
	"/open/port/obj/steel_blade",
	"/open/port/obj/knife",
	"/open/gsword/obj/blade",
	"/open/gblade/obj/oldblade",

	}) );
	set("chat_chance_combat",20);
	set("chat_msg_combat",({
	"��������ȵ� : ����������С�� , ��ɱ�����˱��㿴�������� !\n",
	"��������ŭ�� : �ɶ� , �����㿴��ʲô�������� !\n",
	}));
	
	set("greeting_msg", ({
 	    "��������˵��: ������ , ������������!\n",
	    	}) );
	setup();
        add_money("silver",10);
	carry_object("/open/port/obj/ghost_blade")->wield();
}
