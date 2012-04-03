// junkwawa.c
//by casey..

#include <ansi.h>
#include <npc.h>
#include "/open/open.h"

inherit NPC;

void create()
{
        set_name("ʰ����ͷ", ({ "junk man" ,"man" ,"junk" }));
	set("force",3000);
        set("max_force",3000);
        set("attitude","peaceful");
        set("combat_exp",10);
        set("kee",30000);
        set("max_kee",30000);
        set("gin",30000);
        set("max_gin",30000);
        set("sen",30000);
        set("max_sen",30000);
        set("atman",30000);
        set("max_atman",30000);
        set("mana",30000);
        set("max_mana",30000);
        set("no_kill", 1);
        set("no_fight", 1);
        set("str",999);
        set("age", 70);
        set("long",
                "���������һ��С��ͷ������ʰ����ά���������Ը���������һλ\n"
                "���˹���һ������������Ը�����������ʦ�ǽ�ʡһ�������\n"
                "����������϶���Ķ������������Եõ�һ��� civism��\n"
		"�������������Ļ����ͻ��⵽�ǳ����ص���Ǵࡡ�\n" );
        set("bounty/mortal sin", 5);
	set("random_move",1500);
        set("chat_chance", 2700);
	set("chat_msg",({
        (: random_move :),
        (: random_move :),
	(: command("get corpse") :),
	(: command("get all from corpse") :),
	(: command("get all") :),
        (: this_object(),"get all" :),

        }));
        
        setup();
}

void init()
{
	set_heart_beat(1);
}


void die()
{
        object ob, ob1, ob2, ob3, ob4, ob5, ob6, ob7;
        if( !ob = query_temp("last_damage_from") )
                ob = this_player(1);

        if( !ob ) return;
	write(HIC"ʰ����ͷ��Ц������Ҳ������ɡ���\n"NOR);
          ob->set("last_on", time());
          ob->set("last_from", query_ip_name(ob));
          ob->set_temp("last_damage_from", ob);
          ob -> die();

        destruct(this_object());
}




