// crazy_dog.c

inherit NPC;

void create()
{
	set_name("������", ({ "wawafish", "fish" }) );
	set("race", "Ұ��");
	set("age", 30);
	set("long", "������ɢ����һ����ɫ��â,�����������֮�͸е���Ȥ��\n");
	set("attitude", "peaceful");
	
	set("str", 33);
	set("cor", 30);

	set("limbs", ({ "ͷ��", "����", "��β" }) );
	set("verbs", ({ "bite" }) );

	set("combat_exp",410);

	set("chat_chance", 6);
	set("chat_msg", ({
	"���......���......\n"}) );
	
		
	set_temp("apply/attack", 15);
	set_temp("apply/damage", 6);
	set_temp("apply/armor", 2);

	setup();
}
