// girls.c

#include "/open/open.h"

inherit NPC;

void create()
{
        set_name("������", ({ "Girls", "girls" }) );
        set("race", "����");
        set("gender", "Ů��");
        set("age", 18);
        set("long", "����������, ���ȵ������㡣\n");
        set("attitude", "peaceful");
        set("str", 17);
        set("cor", 17);
set("combat_exp",318);
        set_temp("apply/attack", 10);
        set_temp("apply/damage", 2);
        set_temp("apply/armor", 2);

        setup();
        carry_object(CENTER_OBJ"cloth2")->wear();
}
