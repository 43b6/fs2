//vendor.c
#include "/open/open.h"
inherit F_VENDOR;

void create()
{
	set_name("ҩ�̻��",({"medicine waiter","waiter"}));
	set("gender", "����" );
	set("age", 27);
	set("long", @LONG
����ҩ����ĵ�Ա, ר�Ÿ����д����ŵĹ˿�, ���ɤ���ر��
LONG
	);
	set("combat_exp",116);
        set("attitude", "friendly");
        set_skill("dodge", 40);
        set_skill("unarmed", 20);
	set("vendor_goods", ({
        COMMON_OBJ"bandage",
        COMMON_OBJ"pill",
"/open/doctor/pill/ff_pill",
"/open/doctor/pill/ice_pill",
"open/doctor/pill/f_pill",
        COMMON_OBJ"pill1",
        COMMON_OBJ"pill2",
        COMMON_OBJ"plaster",
        COMMON_OBJ"plaster1",
        COMMON_OBJ"plaster2",
	}) );
	set("no_kill",1);
	setup();
	add_money("coin",35);
}

void greeting(object ob)
{
	if( !ob || environment(ob) != environment() ) return;
	switch( random(3) ) {
		case 0:
		say("��Ա������˵: ��λ"+RANK_D->query_respect(ob)
		    +"����Щ���Ʋ�Ʒ��!\n");
		break;
		case 1:
                say("��Ա�����ĵ�: ���ʲôҩ�Ķ��� "+RANK_D->query_respect(ob)
                    +"Ҫ����������!?\n");
		break;
		case 2:
		say("��Ա��������: ������, "+RANK_D->query_respect(ob)
		    +"Ҫ�Ļ����ҿ��������һ���!\n");
		break;
	}
}
