#include <ansi.h>

inherit NPC;

void create()
{
         set_name("��ʬ", ({ "corpse", "corpse"}) );
        set("long",
             "���㿴������ʱ��,�㲻���뵽�Լ���������������᲻�������Ǹ���ª��ģ����\n");
        set("attitude", "heroism");
	set("combat_exp",2);

        set("chat_chance",6);
	set_skill("unarmed",2);
	set_skill("dodge",2);
	set("random_move",2);
       set("chat_msg",({
          (:this_object(),"random_move":),
}));
        setup();
}
