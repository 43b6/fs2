//vendor.c
#include "/open/open.h"
inherit F_VENDOR;

void create()
{
	set_name("��ҩ����",({"medicine vendor","vendor"}));
	set("gender", "����" );
	set("age", 27);
	set("long", @LONG
    һλ����ҩΪ�����������С�
LONG
	);
	set("combat_exp",116);
        set("attitude", "friendly");
        set_skill("dodge", 40);
        set_skill("unarmed", 20);
	set("vendor_goods", ({
"/open/tendo/kunlun/obj/pill1",
"/open/tendo/kunlun/obj/pill2",
        COMMON_OBJ"pill1",
        COMMON_OBJ"plaster1",
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
	say("��ҩ���п����ĵ�: ���ʲôҩ�Ķ���,"+RANK_D->query_respect(ob)+"Ҫ����������!?\n");
		break;
		case 1:
		break;
		case 2:
		say("��ҩ���и�������: ������, "+RANK_D->query_respect(ob)
		    +"Ҫ�Ļ����ҿ��������һ���!\n");
		break;
	}
}
