//guardian.c for tower ...... made by Pokai 

#include <ansi.h>
#include "/open/open.h"
inherit NPC;

void create()
{
	set_name("��������",({"tower older","guard","older"}));
	set("gender","����");
	set("age",65);
	set("fighter","");
	set("str",25);
        set("long","��������ɱ�������ˣ�Ҫ����ĳ̶�̫��������ǻ�����ߵġ�\n");
	set("combat_exp",40000);
	
	setup();
	carry_object("/open/wu/obj/cloth.c")->wear();
}


int accept_fight(object who)
{
return notify_fail("����Ц��Ц˵��С���ѣ����ǲ������۸���ġ�\n");
}

