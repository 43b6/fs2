#include <ansi.h>

inherit NPC;

void create()
{
        set_name("������", ({ "big mouse", "big", "mouse" }) );
        set("long",
             "����һֻ���ֵ�����,����ޱ�,�ɱ�С�����,�����Ƿǳ������ġ�\n");
        set("attitude", "heroism");
	set("combat_exp", 1164);
	set_temp("apply/damage",40);
	set_skill("unarmed",2);
	set_skill("dodge",2);
        setup();
}
