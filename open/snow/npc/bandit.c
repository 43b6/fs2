#include <ansi.h>
#include "/open/open.h"
inherit NPC;

void create()
{
          set_name("����",({"bandit"}));
         set("long","����һ�����������˪,���ܾ��ŵ�����,����ͷĿ���ٲ�ɱ��,���Զ��ڴ˴����������\n");
		set("gender","����");
	set("combat_exp",775);
          set("attitude","aggressive");
          set("age",30);
          set("score",100);
               set("str", 25);
                set("cor", 30);
                set("per", 20);
                set("int", 10);
                set("cps", 10);
          set("bellicosity",10000);
          set_skill("dodge",10);
set_skill("sword",20);
set_skill("parry",10);
	setup();
        carry_object(SNOW_OBJ"longsword")->wield();
}

