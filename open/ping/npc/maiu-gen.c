// ƽ�Ͻ���
#include </open/open.h>
inherit NPC;
void create()
{
	set_name("���˽���",({"maiu general","maiu","general"}));
	set("long","���˽���,���������˶Կ�����.\n");
	set("gender","����");
        set("attitude","heroism");
	set("age",42);
	set("str", 30);
	set("con", 30);
	set("force",1500);
	set("max_force",1500);
        set("combat_exp", 130000);
        set("chat_chance_combat", 15);
        set("chat_msg_combat", ({
        (: perform_action("blade.gold-dest") :),
        }));
	set_skill("force",60);
        set_skill("dodge", 50);
        set_skill("parry", 50);
        set_skill("fly-steps",30);
        set_skill("gold-blade",60);
	map_skill("dodge","fly-steps");
	map_skill("parry","gold-blade");
        map_skill("blade","gold-blade");
        set("force_factor", 5);
	setup();
	carry_object("/open/gblade/obj/blade2")->wield();
	add_money("silver",50);
}
