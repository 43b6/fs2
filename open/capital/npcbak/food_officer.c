//bun.c

#include <../capital.h>

inherit NPC;

void create()
{
	set_name("��ʳ��",({"food officer","officer"}));
	set("gender","����");
	set("officer_type","food");
	set("class","officer");
	set("officer_class","��ʳ��");
	set("combat_exp",270);
	set_skill("unarmed",10);
	set_skill("dodge",10);
	set("officer_power",5);
	set("max_officer_power",5);
	set("age",43);
	setup();
}
