// evilmaster.c by oda

#include </open/open.h>
#include <ansi.h>

inherit NPC;

void create()
{
	seteuid(geteuid());
	set_name("ԭʼ��ħ", ({ "evil master", "evil", "master" }) );
	set("title", "���˹ȿ�ɽ��ʦ");
	set("gender", "����");
	set("age", 25);
	set("class", "bandit");
	set("attitude", "badman");
	set("combat_exp", 2000000);
	set("long", @LONG
�����Ǵ�˵�ж��˹ȵĴ�ħͷ��ԭʼ��ħ��������ħ����İ�����
ʹ���Ѿ��ϰ��������������ֻ�ж���ʮ������ӡ��ԴӰ���ǰ��
���֮ս��ܺ󣬱�һֱ���ڶ��˹���Ǳ��������ֱ����ʮ��ǰʮ
��������֮����ԭʼ��ħչ����ս����������������ҹ��ԭʼ
��ħ�Թѻ��ڽ�ʮ�����ȫ���շ��������˽���Ķ��˹ȣ�������
��ħ������ʮ����ˡ�
LONG );

	set("str", 40);
	set("cor", 40);
	set("int", 40);
	set("spi", 40);
	set("cps", 15);
	set("con", 40);
	set("per", 30);
	set("max_kee", 5000);
	set("max_force", 5000);
	set("force", 5000);
	set("force_factor", 20);

	set_skill("dodge", 60);
	set_skill("ghost-steps", 80);
	set_skill("force", 100);
	set_skill("badforce", 100);
	set_skill("move", 60);
	set_skill("unarmed", 100);
	set_skill("badstrike",100);
	map_skill("unarmed", "badstrike");
	map_skill("force", "badforce");
	map_skill("dodge", "ghost-steps");
	map_skill("move", "ghost-steps");

	set("inquiry", ([
	"��ħ����":	"��ѧ��ħ�����ҵ��Ȳ��Կ�������û��������ʣ�",
	]));

	set("chat_chance_combat", 50);
	set("chat_msg_combat", ({
	}) );

	setup();
}
