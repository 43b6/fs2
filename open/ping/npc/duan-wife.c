#include <ansi.h>
#include </open/open.h>
inherit NPC;
void create()
{
        set_name("Ҷ��", ({ "yar leing","yar","leing" }) );
        set("title","�η���");
        set("gender","Ů��");
        set("race", "����");
        set("attitude","peaceful");
        set("age", 30);
set("long","һ���ݹ����˵Ĺ�, ���������ͬ��ѧ��,��˵���书���ڶ���֮�©nn");
        set("str", 30);
        set("per", 35);
        set("max_force", 3000);
        set("force", 3000);
        set_skill("parry",80);
        set("combat_exp",500000);
        set_skill("six-fingers", 80);
        set_skill("unarmed", 80);
        set_skill("force",60);
        set("force_factor", 10);
        map_skill("unarmed","six-fingers");
        set_skill("dodge",60);
        set_skill("linpo-steps", 60);
        map_skill("dodge","linpo-steps");
        setup();
          add_money("gold",5);
        carry_object(PING_OBJ"neck0")->wear();
}

