inherit NPC;
inherit F_MASTER;
#include "/open/open.h"
#include <ansi.h>
void create()
{
        set_name("ɽ��", ({ "pig" }) );
        set("race", "Ұ��");
        set("age", 30);
        set("attitude", "aggressive");
        set("max_gin", 10000);
        set("max_kee", 18000);
        set("max_sen", 10000);
	set("gin",10000);
	set("sen",10000);
	set("kee",18000);
        set("str", 20);
        set("cor", 20);
        set("spi", 20);
        set("int", 20);
        set("limbs", ({ "ͷ��", "����", "ǰצ", "��צ", "β��" }) );
        set("verbs", ({ "bite", "claw" }) );
        set("bellicosity",5000);
        set("max_force",15000);
        set("force",15000);
        set_temp("apply/armor", 100);
        set_temp("apply/defense", 100);
        set_temp("apply/damage", 370);
        set_temp("apply/attack", 370);
        set("force_factor",16);
        set("combat_exp", 4800000);
        set_skill("move",100);
        set_skill("dodge",100);
        set_skill("parry",100);
        set_skill("unarmed",100);
        set_skill("force",100);
        set_skill("rabbit-combat",100);
        map_skill("unarmed","rabbit-combat");
        setup();
}
