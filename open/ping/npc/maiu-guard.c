#include <ansi.h>
#include "/open/open.h"
inherit NPC;
void create()
{
        set_name("��������",({"guard of maiu","guard","maiu"}));
        set("long","һλ�����������ŵ�����.\n");
        set("gender","����");
	set("combat_exp",4000);
        set("age",26);
	set("str", 30);
        set("con", 24);
        set("force",150);
        set("max_force",150);
	set_skill("force",20);
	set_skill("poisonforce",20);
	map_skill("force","poisonforce");
        set_skill("dodge",30);
        set_skill("nine-steps",20);
        map_skill("dodge","nine-steps");
	set_skill("unarmed",20);
        set_skill("whip",20);
	set_skill("parry",20);
	set_skill("poison",40);
	set_skill("coldpoison",40);
	map_skill("poison","coldpoison");
        set("chat_chance_combat",30);
        set("chat_msg_combat",({
                (: perform_action,"poison.faint" :)
        }));
        setup();
        carry_object(POISON_OBJ"longwhip")->wield();
        carry_object("/obj/poison/faint_poison")->set_amount(10);
        add_money("silver",10);
}
