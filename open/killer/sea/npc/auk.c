#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set_name("海雀",({"auk"}));
set("long","活动于海洋天空上，以吃鱼为生，但是人类不知道看起来像不像鱼类\n");
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
set("force",650);
set("max_force",650);
set("max_kee",1350);
set("kee",1350);
set("combat_exp", 15000);
set_skill("dodge",50);
setup();
}