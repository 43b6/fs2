// /open/center/npc/vendor.c
#include "/open/open.h"

inherit F_VENDOR;

void create()
{
	set_name("������", ({ "wang" }) );
	set("gender", "����" );
	set("age", 42);
	set("long", @LONG
�����������̵��ϰ�,�������������������ô(list).
LONG);
	set("attitude", "friendly");
	set("combat_exp",163);
	set_skill("dodge",20);
	set("vendor_goods", ({
            GS_OBJ"woodsword",
	    GS_OBJ"sword",
            GS_OBJ"woodblade",
	    "/obj/example/dagger",
	    "/open/gblade/obj/blade",
            "/open/ping/obj/fan-2",
	    "/open/poison/obj/longwhip",
	    "/open/gblade/obj/pen",
	}) );

	set("greeting_msg", ({
 	    "������˵: ����!! ����!! ��������,��������!!\n",
	    "����������: ������������ֵ������!! \n",
        "�������е�: ����С��,������������!! ��ɫ��,��ɫ��,����ʵ���!!\n",
	}) );
	setup();
        carry_object("/open/gsword/obj/dirty_cloth")->wear();
	carry_object("/obj/example/dagger")->wield();
}
