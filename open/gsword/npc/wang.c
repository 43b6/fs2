// crazy_dog.c

#include "/open/open.h"
inherit F_VENDOR;

void create()
{
	set_name("����", ({ "wang ani", "wang" ,"ani"}));
	set("title","�ɽ��ɳ���");
	set("race", "����");
	set("age", 53);
        set("long", "������ִ�˵�������,��֪�����Ǹ�һ��һ�����,
����Կ�������Щ��ô(list).\n");
        set("vendor_goods", ({
                "/open/capital/obj/tea",
      "/open/gsword/obj/girl_wine",
      "/open/gsword/obj/green_wine",
                "/obj/example/dumpling",
                "/obj/example/chicken_leg",
        }) );
	set("attitude", "peaceful");
	set("str", 17);
	set("cor", 15);
	set("force",200);
	set("max_force",200);
	set("force_factor",2);
	set_skill("blade",20);
	set("combat_exp",4218);
	set_skill("blade",20);
	set_skill("her-blade",20);
	set_skill("force",20);
	set_skill("oneforce",20);
	set_skill("dodge",20);
	set_skill("parry",20);
	map_skill("blade","her-blade");
	map_skill("force","oneforce");
	setup();
       add_money("coin",50);
	carry_object("/open/gsword/obj/knife")->wield();
	carry_object("/open/gsword/obj/dirty_cloth")->wear();
}
