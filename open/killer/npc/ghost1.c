#include <ansi.h>
inherit NPC;
void create()
{
    set_name("尸魂人",({"ghost"}) );
    set("long",
   "黑牙联的禁法，所产生的怪物，将尸体浸在药水中，只听施药者的命令\n");
    set("race", "人类");
    set("gender","男性");
    set("combat_exp",550000);
    set("age",40);
    set("title","黑牙联成员");
    set("kee",400);
    set("max_kee",400);
    set("bellicosity",300);
    set_skill("dagger",70);
    setup();
    carry_object("/open/killer/obj/dagger")->wield();
}