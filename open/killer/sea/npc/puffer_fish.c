#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
set_name("河豚",({"puffer fish","puffer","fish"}));
set("long","一种奇怪的鱼，内脏有毒，生气时会将身体鼓起来，胖胖的很可爱\n");
set("race","人类");
set("gender","雌性");
set("attitude","heroism");
set("limbs", ({ "头部", "身体",  "尾巴" }) );
set("verbs", ({ "bite", "claw" }) );
set("age",20);
set("int",30);
set("per",30);
set("str", 20);
set("con", 30);
set("force",100);
set("max_force",200);
set("max_kee",200);
set("kee",300);
set("combat_exp", 1000);
setup();
}