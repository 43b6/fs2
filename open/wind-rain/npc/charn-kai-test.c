inherit NPC;
#include <ansi.h>
#include "wind-rain.h"
void create()
{
	set_name("�ſ�",({"charn-kai","kai"}));
        set("title","��ҹ����");
	set("long","
�����ػ�һ¥¥����ǧ�е�
������֮һ, Ҳ�ǵ�ǧ��
�����, �Ը�ȴ�����ִ���
��Ȥ, ����������֮��.
");
	set("gender","����");
	set("combat_exp",9000000);
	set("attitude","peaceful");
	set("age",25);
	set("class","soldier");
	set("str", 30);
        set("cor", 30);
	set("int", 30);
	set("con", 30);
	set("kar", 30);
         set("max_force",25000);
         set("force",25000);
         set("max_kee",25000);
        set("force_factor",20);
	set_skill("blade",100);
        set_skill("golden-blade",100);
	set_skill("parry",100);
        set_skill("wind-rain",75);
	set_skill("dodge",100);
        set_skill("move",70);
        set_skill("lo-steps",80);
        map_skill("blade", "golden-blade");
        map_skill("dodge","lo-steps");
        map_skill("move","lo-steps");
        map_skill("parry","wind-rain");
	setup();
        carry_object(C_OBJ"/three-star-blade")->wield();
	add_money("silver",90);
}
int accept_kill(object who)
{
  command("say ���Ҷ�����¥���ˣ�");
  return 1;
}
