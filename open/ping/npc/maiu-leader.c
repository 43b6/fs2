// ƽ�Ͻ���
#include </open/open.h>
inherit NPC;
void create()
{
	set_name("����ӳ�",({"maiu leader","maiu","leader"}));
	set("long","����ӳ�,�����������ս����.\n");
	set("gender","����");
        set("attitude","heroism");
	set("age",32);
	set("int",30);
	set("per",30);
	set("str", 10);
	set("con", 30);
	set("force",1500);
	set("max_force",1500);
        set("combat_exp", 80000);
	set_skill("force",60);
        set_skill("dodge", 1);
        set_skill("parry", 1);
        set_skill("unarmed",45);
        set_skill("fly-steps",3);
        set_skill("gold-blade",57);
	map_skill("dodge","fly-steps");
	map_skill("parry","gold-blade");
        map_skill("blade","gold-blade");
        set("force_factor", 3);
	setup();
	carry_object("/open/ping/obj/maiu-blade")->wield();
	add_money("silver",50);
}
