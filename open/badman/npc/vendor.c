//vendor.c
#include "/open/open.h"
inherit F_VENDOR;

void create()
{
	set_name("С��",({"vendor"}));
	set("gender", "����" );
	set("age", 27);
set("long", @LONG

  �Ĵ���̯��ЩС��������,������г�(list)����Щʲô...
  
LONG
	);
	set("no_kill",1);
	set("combat_exp",116);
        set("attitude", "friendly");
        set_skill("dodge", 25);
        set_skill("hammer", 17);
        set_skill("parry", 27);
	set("vendor_goods", ({
//   "/open/badman/obj/bird_food",
"/open/ping/obj/cloud",
		"/obj/example/wineskin",
		"/obj/example/dumpling",
		"/obj/example/chicken_leg",
                CENTER_OBJ"torch",
	}) );
        set("no_kill",1);
	setup();
        carry_object("/obj/example/chicken_leg")->wield();
        carry_object("/obj/cloth")->wear();
	add_money("coin",35);
}

void greeting(object ob)
{
	if( !ob || environment(ob) != environment() ) return;
        switch( random(2) ) {
                case 0:
                say("С��˻��ô\�ȵ�: "+RANK_D->query_respect(ob)
                        +"����������!?\n");
			break;
                case 1:
		say("С����������: ��¥������,"+RANK_D->query_respect(ob)
			+"Ҫ�Ļ����ҿ��������һ���!\n");
			break;
	}
}
