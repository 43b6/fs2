#include <ansi.h>
#include "/open/open.h"
inherit NPC;
   
void create()
{
	set_name("�������", ({"shizumaru"}) );
	set("title","����");
	set("age",18);
	set("str",50);
	set("cps",33);
	set("cor",36);
	set("per",39);
	set("int",31);
	set("spi",30);
	set("con",36);
	set("kar",30);
	set("attitude","heroism");
	set("gender", "����");
	set("class", "fighter");
	set("long", "һ��Զ�Ӷ�孷�ɣ����������ʿ,Ϊ��ĥ��������似,���˵�Ѱ��
������ս��\n");
	set_skill("dodge", 150);
	set_temp("apply/armor", 30);
	set_temp("apply/dodge", 20);
	set_temp("apply/attack", 20);
	set_skill("parry", 150);
	set_skill("dragon-blade",90);
	set_skill("blade", 200);
	set_skill("force", 70);
	set_skill("move", 100);
	set_skill("nine-steps", 120);
	//map_skill("parry","dragon-blade");
	map_skill("move","nine-steps");
	map_skill("dodge","nine-steps");
	//map_skill("blade","dragon-blade");
	set("inquiry" ,([
	"�̻�" : "��.�Ǵεı����Ѿ����þ��ˣ�����������������ҽ�����?",
]));
	set("combat_exp", 2000000);
	set("chat_chance",10);
	set("chat_msg",({
	"���������Ū�ŵ����ϵ��롣\n",
	"������������˵:�벻���д�һ�������ء�\n",
}));
	set("chat_chance_combat", 50),
	set("chat_msg_combat",({
		(: this_object(), "special_att" :),
}));
	set("sen",10000);
	set("max_sen",10000);
	set("gin", 10000);
	set("kee", 10000);
	set("max_gin", 10000);
	set("max_kee", 10000);
	set("force",1000);
	set("max_force",1000);
	set("force_factor",10+random(5));
	setup();
        carry_object("/open/poison/obj/sandals.c")->wear();
	carry_object("/open/poison/obj/esword.c")->wield();
	carry_object("/open/poison/obj/cloak.c")->wear();

}
 int special_att()
{
	object *me,one;
	int i;
	me=this_player()->query_enemy();
	i=sizeof(me);
	one=enemy[random(i)];
	message_vision( HIB "
	���������:���ҵı�ɱ��\n\n"
	HIR"              һ�������ġ������֡�����ն\n\n"NOR,one);
	message_vision("������轫�����ٵİγ�����$N����նȥ���ټ��ٵĽ����ջ�\n",one);
	one->receive_wound("kee",random(300+200));
	 COMBAT_D->report_status(one);
        return 1;
}

	
