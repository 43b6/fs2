#include <ansi.h>

inherit NPC;

void create()
{
        set_name("ɽ��", ({ "bandit", "bandit"}) );
        set("long",
             "һ������ʧ���ɽ��,���������ڶ�Ѩ��¥��·�ˡ�\n");
        set("attitude", "heroism");
	set("combat_exp", 1015);
	set_skill("sword",40);
	set_skill("dodge",40);
        set("chat_chance",6);
	set("random_move",5);
       set("chat_msg",({
          (:this_object(),"random_move":),
}));
        setup();
	carry_object("/obj/longsword")->wield();
}
