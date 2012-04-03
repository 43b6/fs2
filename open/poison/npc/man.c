#include "/open/open.h"
inherit NPC;


void create()
{
	set_name("ڤ�ƽ�ͽ", ({"trainee"}) );
	set("age",20);
	set("class", "poisoner");
	set("gender", "����");
        set("long", "�㿴��һ��ڤ�ƽ̵Ľ�ͽ.�����������ô����.��������������
����һ��.�ƺ��±���ײ����\n");
	set_skill("dodge", 30);
	set_skill("parry",10);
	set_skill("move", 30);
	set_skill("unarmed", 10);
	set_skill("nine-steps",30);

	set_skill("whip", 20);
	set_skill("force", 10);
	set_skill("poison", 30);
	map_skill("dodge","nine-steps");
	set("max_kee", 200);
	set("combat_exp", 5500);
	set("score", 1700);

	
	set("chat_chance_combat", 8);
	set("chat_msg_combat", ({
			"��ͽ˵��:�ٺ�.��������ս.С���㲻������ǲ���!\n",
			"��ͽ˵��:�Ͽ��뿪��.��ү��������ܺ�.����һ��!\n",
}) );
	set("chat_chance", 10);
	set("chat_msg", ({
			"��ͽ˵��:С��!!�������뿪.���ﲻ��������Ұ�ĵط�!\n",
			"��ͽ˵��:ι.��ү���㲻˳��.�������!\n",
}) );
	set("inquiry", ([
		"����" : "����?...����������������.�Ҳ�����ȥ���˵�Ǯ����.\n"


]) );
	setup();
	add_money("silver", 5);
	carry_object("/open/poison/obj/ewhip.c")->wield();
        carry_object("/open/poison/obj/ebelt.c")->wear();
	carry_object("/open/poison/obj/ecloth.c")->wear();
}

void greeting(object me)
{
	if(me->query("family/family_name")=="ڤ��ħ��")
	{ command("smile "+me->query("id"));
	}
	if(me->query("family/family_name")=="����")
	{
	 command("say �ٺ�! ��С��! �Լ�������������!!");
	kill_ob(me);
	}
}

