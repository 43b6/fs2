#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set_name("龙头鱼",({"Bombay duck","duck"}));
set("long","少见的鱼类，看来是已经来到奇怪的地方，不然怎么连这种鱼都看的到\n");
set("race","人类");
set("gender","雌性");
set("attitude","heroism");
set("limbs", ({ "头部", "身体",  "尾巴" }) );
set("verbs", ({ "bite", "claw" }) );
set("age",50);
set("int",30);
set("per",30);
set("str", 50);
set("con", 30);
set("force",1800);
set("max_force",1800);
set("max_kee",2000);
set("kee",2000);
set("combat_exp", 35000);
set_skill("dodge",60);
setup();
}