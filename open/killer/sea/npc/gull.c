#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set_name("海鸥",({"gull"}));
set("long","遨翔于海洋天空上，以吃鱼为生，雪白的翅膀煞是好看\n");
set("race","人类");
set("gender","雌性");
set("attitude","heroism");
set("limbs", ({ "头部", "身体" }) );
set("verbs", ({ "bite", "claw" }) );
set("age",40);
set("int",30);
set("per",30);
set("str", 40);
set("con", 30);
set("force",420);
set("max_force",420);
set("max_kee",800);
set("kee",800);
set("combat_exp", 8000);
set_skill("dodge",30);
setup();
}