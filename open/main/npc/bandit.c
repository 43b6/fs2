#include <ansi.h>
#include "/open/open.h"
inherit NPC;

void create()
{
          set_name("����",({"bandit"}));
         set("long","����һ���޶����Ĵ󻵵�\n��Ҫ�ǻ����ۣ����򣮣���\n");
		set("gender","����");
	set("combat_exp",1295);
          set("attitude","aggressive");
          set("age",35);
          set("score",100);
               set("str", 45);
                set("cor", 60);
                set("per", 20);
                set("int", 10);
                set("cps", 5);
          set("bellicosity",50000);
          set_skill("dodge",20);
          set_skill("unarmed",15);
          set_skill("sword",20);
          set_skill("parry",10);
	setup();
        carry_object(SNOW_OBJ"longsword")->wield();
}

