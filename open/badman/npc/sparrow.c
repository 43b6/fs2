// sparrow.c by oda
// use in /open/center by powell
// re-write in /open/badman by powell

inherit NPC;

void create()
{
	set_name("С��ȸ", ({ "sparrow" }) );
	set("long", "һֻ̰�Ե�С��ȸ����Ž���ץ��һ����������Ķ�����\n������ȥ�ģ���ȫ������Σ�յĴ��ڡ�\n");
	set("race","Ұ��");
	set("age", 2);
	set("str", 8);
	set("con", 9);
	set("max_gin", 60);
	set("max_kee", 60);
	set("max_sen", 60);

	set("limbs", ({ "����", "���", "���", "�ҽ�", "צ��" }) );
        set("verbs", ({ "claw", "poke" }) );
	set("chat_chance", 4);
	set("chat_msg", ({
		"С��ȸ���������ϵ������ȫ�����µ����ӡ�\n",
	}) );
		
	set("combat_exp",80);
	setup();
}
void init()
{
       object obj=this_player();
       if (obj->query("race")=="����" && obj->query("name")!="С��") {
       call_out("gone",2);
       }
}
void gone()
{
       object who = this_player();
       message_vision("С��ȸ����$N���˹���, ��չ��ɵ��ݶ��ϡ�\n",who);
	destruct(this_object());
}
