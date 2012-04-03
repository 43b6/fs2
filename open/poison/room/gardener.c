#include <ansi.h>
#include "/open/open.h"
inherit NPC;

void create()
{
	set_name("��԰��", ({"old gardener","gardener"}) );
	set("age", 70);
	set("combat_exp",100000);
	set("score", 100000);
	set("long","һ��԰��ģ������,�����ķ���Ӧ��ħ������.���������Ϊ��������
�ڴ˵����¶���Ϊ������,����Ǿ�������������ڼҸ��֡�\n"+
"����Ϊ�˾�ˮ����������ڷ����š�\n");
	set("class", "poisoner");
	set("gender", "����");
	set("attitude", "friendly");
	set("str", 44);
	set("cps", 30);
	set("cor", 30);
	set("con", 33);
	set("force", 600);
	set("max_kee",800);
	set("max_sen",800);

	set("gin", 800);
	set("max_gin",800);
	set("max_force", 600);
	set("force_factor",1);
	set_skill("parry", 30);
	set_skill("dodge", 50);
	set_skill("move", 50);
	set_skill("unarmed", 20);
	set_skill("force", 20);
	set_skill("poison", 60);
	set_skill("poisonforce", 30);
	set_skill("coldpoison", 60);
	set_skill("nine-steps", 60);
	map_skill("move","nine-steps");
	map_skill("dodge","nine-steps");
	map_skill("poison", "coldpoison");
	map_skill("force", "poisonforce");
	set_skill("dagger",40);
	set("chat_chance", 10);
	set_skill("dragon-dagger", 40);
	map_skill("dagger", "dragon-dagger");
	set("chat_msg",({
		"��԰��˵��:��,�����Ư����.�ҿ���ÿ�������ĳ��ݡ������!\n",
            "��԰���ǳ�˵��:���԰���ﲻ֪��ô��,��ˮ�Ĺ���һֱ���㡣\n",
}) );
	set("chat_chance_combat", 6);
	set("chat_msg_combat",({
		"��԰��˵��:����������С����,��������ս��\n",
		"��԰��˵��:���Ϲ���,�����Ǳ���δ��,С���㻹�۵ú���!\n",
}) );
	set("inquiry", ([
	"��ˮ" : " ���ܰ������̽��̽��?���³�,������һ��������\n",
"����" : "ԭ���Ǵ���������,���������Ʒ�����,������֤��֮��,���༴����������
֮������֮��\n",
]) );
	setup();

	carry_object("/obj/poison/rose_poison")->set_amount(30);
	carry_object("/obj/poison/five_poison")->set_amount(30);
	carry_object("/obj/poison/dark_poison")->set_amount(30);
	carry_object("/open/poison/obj/scissors.c")->wield();
        carry_object("/open/poison/obj/ecloth.c")->wear();
	carry_object("/open/poison/obj/ebelt.c")->wear();
}
int accept_object(object who, object item)
{
	object me;
	me = this_player();
	if (item->query("id") == "serpent tooth")
	{ destruct (item);
	tell_object (who, "��԰�����˵�˵:���Ƕ�л��,�Ȿ��͵�л��ɡ�\n");
	new("/open/poison/obj/pkingbook.c")->move(who);
	return 1;
	}
	else
	{
	tell_object (who, "��԰���ɻ��˵:���������������������\n");
	 return 1;
	}
}
