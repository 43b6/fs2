#include <ansi.h>
 

inherit NPC;

void create()
{
	set_name("���� С��", ({"chi"}) );
	set("gender", "����");
	set("long","
һ��͵͵������С�������������Ӻ�����Ϊ��ҪѰ����ôϡ���䱦
������\n");
	set_skill("dodge",30);
	set("age", 21);
	set("str",22);
	set("con",21);
	set_skill("throwing",20);
	set_skill("unarmed", 20);
	set("max_kee",500);
	set("max_sen",310);
	set("max_gin",320);
	
	set("combat_exp",5000);
	set_temp("apply/armor",30);
	set_temp("apply/dodge",16);
	set("chat_chance",10);
	set("chat_msg", ({
		"С��̰����˵��:��˵ħ�̵õ�һ��ϡ���䱦��\n",
		"С��������:��֪����Ҫ�������ܽ��롣\n",
		"С��΢Ц�Ķ���˵:��Ҳ����Ѱ������?\n",
		"С��͵͵����˵:��˵�����ǲ��ڼ����С�\n",
}) );

	set("inquiry", ([
	 	"����" : "��˵�Ǳ����ǽ�����ô�����š�\n",
		"����" : "Ҫ��������Ҫһ�������Կ�ס�\n",
		"Կ��" : "Կ����˭�����ǾͲ��ö�֪�ˡ�\n",
]) );
 	setup();
	add_money("silver",1);
	carry_object("/open/poison/obj/boots.c")->wear();
	carry_object("/obj/cloth.c")->wear();
	carry_object("/open/poison/obj/ball.c")->wield();
}
	
  
