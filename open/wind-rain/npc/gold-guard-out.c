inherit NPC;
#include <ansi.h>
#include "wind-rain.h"
void create()
{
	set_name("¥�����",({"gold guard","guard"}));
	set("long","
���ϸ��¥�У������ϸ�ꡱ�ı������еĽ���
����¥�⻨԰��Ѳ�ߡ�
");
	set("gender","����");
	set("combat_exp",200000);
	set("attitude","peaceful");
	set("age",25);
	set("class","soldier");
	set("str", 30);
        set("cor", 30);
	set("int", 30);
	set("con", 30);
	set("kar", 30);
        set("max_force",1300);
        set("force",1300);
        set("max_kee",650);
        set("force_factor",5);
	set_skill("blade",50);
        set_skill("golden-blade",70);
	set_skill("parry",50);
        set_skill("wind-rain",65);
	set_skill("dodge",55);
        set_skill("move",55);
        set_skill("lo-steps",50);
        map_skill("blade", "golden-blade");
        map_skill("dodge","lo-steps");
        map_skill("move","lo-steps");
        map_skill("parry","wind-rain");
	setup();
        carry_object(C_OBJ"/blade-1")->wield();
	add_money("silver",90);
}
int accept_kill(object who)
{
  command("say ���Ҷ�����¥���ˣ�");
  return 1;
}
