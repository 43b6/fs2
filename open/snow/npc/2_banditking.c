#include <ansi.h>

inherit NPC;

void create()
{
        set_name("ɽ��ͷͷ", ({ "bandit king", "bandit", "king"}) );
        set("long",
             "[Cɽ����ͷͷ,����ɽ�����ж���ʧ����,��ɽկ��ʱ��,������ߵ��˴�ȴ��·��,��Ȼ����ȥ�ҳ�·,�������ĵĽ��Ż�����ȫ�ı�¶�����ϡ�\n");
        set("attitude", "heroism");

	set("combat_exp", 12975);
        set("chat_chance",6);
	set_skill("sword",60);
	set_skill("dodge",60);
	set_skill("parry",60);
	set("random_move",4);
       set("chat_msg",({
          (:this_object(),"random_move":),
}));
        setup();
	carry_object("/obj/longsword")->wield();
}
