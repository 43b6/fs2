//vendor.c
#include "/open/open.h"
inherit F_VENDOR;

void create()
{
	set_name("С��",({"vendor"}));
	set("gender", "����" );
	set("age", 27);
set("long", @LONG

  �Ĵ���̯��ЩС��������, ������г�(list)����Щʲô...
  
LONG
	);
	set("combat_exp",576);
        set("attitude", "friendly");
        set_skill("dodge", 40);
        set_skill("hammer", 20);
        set_skill("parry", 30);
	set("vendor_goods", ({
		"/obj/example/besttea",
		"/obj/example/dumpling",
		"/obj/example/chicken_leg",
	}) );
	setup();
	add_money("coin",35);
}

void init()
{	
	::init();
	add_action("do_vendor_list", "list");
}

void greeting(object ob)
{
	if( !ob || environment(ob) != environment() ) return;
        switch( random(4) ) {
		case 0:
		say("С��������С����˵: ��λ"+RANK_D->query_respect(ob)
			+"����Щ������!\n");
			break;
		case 1:
                say("С��˻��ô�ȵ�: "+RANK_D->query_respect(ob)
                        +"����������!?\n");
			break;
                case 2:
                say("С�������к���: �������Ѿ�������, "
                     + RANK_D -> query_respect( ob )
                     + "�������İ�?\n");
                        break;
                case 3:
                say("С������������ĵ�˵: ��, "
                     + RANK_D -> query_respect( ob )
                     + ", ����������������洫�ط����Ƶ�\n"
                     + "��������������������������������, ��ĵط������򲻵��!\n");
                        break;
              	}
}
