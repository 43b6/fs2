#include <ansi.h>
inherit NPC;

void create()
{
        set_name("��Ʋ�",({"plan teacher","teacher"}));
        set("title","ı��֮��");
        set("gender","����");
        set("race", "����");
        set("age", 42);
        set("long", "������������ҵ֮��,����������ŵ��Ӽ�ı.\n");
        set("str", 30);
        set("family/family_name","����");
        set("class","scholar");
set("max_kee",1500);
set("kee",1500);
        set("max_force", 2000);
        set("force", 2000);
        set_skill("parry",80);
        set("combat_exp",350000);
        set_skill("knowpen", 100);
        set_skill("stabber", 60);
        set_skill("force",80);
        set_skill("winter-steps",70);
        set_skill("dodge",70);
        map_skill("stabber","knowpen");
        map_skill("parry","knowpen");
        map_skill("dodge","winter-steps");
        set_skill("plan",80);
        set_skill("god-plan",80);
        map_skill("plan","god-plan");
        set("force_factor", 10);
set("chat_chance_combat",90);
        set("chat_msg_combat",({
        (: perform_action,"plan.lock-link" :)
          }));
        setup();
        add_money("gold",10);
     carry_object("/open/scholar/obj/pen")->wield();
}

