#include <ansi.h>
#include "/open/open.h"
inherit NPC;
string about_key();
void create()
{
        set_name("ħ������",({"guard"}));
        set("gender","����");
        set("class","poisoner");
        set("combat_exp",5000);
        set("age",26);
        set("long","ħ�������������ħ�̵�������\n");
        set("str", 44);
        set("cor", 24);
        set("cps", 18);
        set("per", 24);
        set("int", 42);
        set("kee",450);
        set("eff_kee",450);
        set("max_kee",450);
        set("force",450);
        set("max_force",450);
        set_skill("unarmed",10);
        set_skill("parry",10);
        set_skill("dodge",20);
        set_skill("whip",15);
        set_skill("force",10);
        set_skill("poisonforce",15);
        set_skill("poison",16);
        set_skill("coldpoison",25);
        set_skill("nine-steps",30);
        map_skill("dodge","nine-steps");
        map_skill("force","poisonforce");
        map_skill("poison","coldpoison");
        set("chat_chance_combat",60);
        set("chat_msg_combat",({
                (: perform_action,"poison.faint" :)
        }));
        setup();
        carry_object("/obj/poison/faint_poison")->set_amount(20);
}

int accept_fight(object me)
{
  if(this_object()->is_fighting())
        return notify_fail("��û����������æ��?\n");
  return 1;
}
