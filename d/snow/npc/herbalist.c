// herbalist.c

inherit NPC;

string heal_me(object me);

void create()
{
	set_name("���ƹ�", ({ "herbalist" }) );
	set("title", "ɣ��ҩ��");
	set("gender", "����" );
	set("age", 54);
	set("long",
		"���ƹ����⸽���൱�����Ĵ����ˣ�����ʩ���ҩ��������ҩǮ������\n"
		"����������ҽ��Ҳ��������ʱ��������ɽ���µ����Ǻ���ѧҽ��һ��\n"
		"���˺�С��ֱ��������ҩ�Ա�ҽ�����顣\n" );
	set("combat_exp", 1300);
	set("attitude", "friendly");
	set("inquiry", ([
		"����": (: heal_me :),
		"����": (: heal_me :),
		"��ҩ": (: heal_me :),
	]) );

	set_skill("literate", 70);
	set_skill("dodge", 60);
	set_skill("unarmed", 60);
	setup();
	add_money("coin", 80);
}

string heal_me(object me)
{
	int ratio;

	ratio = (int)me->query("eff_kee") * 100 / (int)me->query("max_kee");
	if( ratio >= 100 )
		return "��λ" + RANK_D->query_respect(me) + "������������ɫ�ܺð������������˵����ӡ�";
	if( ratio >= 95 )
		return "Ŷ....�ҿ���....ֻ��ЩƤ��С�ˣ��������ҩ��ȥ����û���ˡ�";
	
}

