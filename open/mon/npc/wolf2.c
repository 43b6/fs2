inherit NPC;
inherit F_MASTER;
#include "/open/open.h"
#include <ansi.h>
void create()
{
        set_name("����", ({ "wolf" }) );
        set("race", "Ұ��");
        set("attitude", "aggressive");
        set("age", 40);
        set("max_gin", 10000);
        set("max_kee", 20000);
        set("max_sen", 10000);
	set("gin",10000);
	set("sen",10000);
	set("kee",20000);
        set("str", 90);
        set("cor", 90);
        set("spi", 20);
        set("int", 20);
        set("limbs", ({ "ͷ��", "����", "ǰצ", "��צ", "β��" }) );
        set("verbs", ({ "bite", "claw" }) );
        set("bellicosity",10000);
        set("max_force",10000);
        set("force",10000);
        set_temp("apply/armor", 200);
        set_temp("apply/defense", 200);
        set_temp("apply/damage", 265);
        set_temp("apply/attack", 265);
        set("force_factor",18);
        set("combat_exp", 4700000);
        set_skill("move",100);
        set_skill("dodge",100);
        set_skill("parry",100);
        set_skill("unarmed",100);
        set_skill("force",100);
        set_skill("rabbit-combat",100);
        map_skill("unarmed","rabbit-combat");
        setup();
}
