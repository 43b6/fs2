#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set_name("金枪鱼",({"tuna"}));
set("long","又名鲔鱼，这是一种东瀛岛桌上常见的鱼类，味道极为鲜美\n");
set("race","人类");
set("gender","雌性");
set("attitude","heroism");
set("limbs", ({ "头部", "身体",  "尾巴" }) );
set("verbs", ({ "bite", "claw" }) );
set("age",40);
set("int",30);
set("per",30);
set("str", 30);
set("con", 30);
set("force",300);
set("max_force",300);
set("max_kee",300);
set("kee",300);
set("combat_exp", 7000);
set_skill("dodge",10);
setup();
}