inherit NPC;

void create()
{
	set_name("�Է�",({ "woodcutter","cutter" }) );
	set("long", "����һ��ƽ�����Է򣬵���֪����������Щʲô��\n");

	set( "age", 35);

	set("str", 32);
        set("cor", 30);


	set("combat_exp",264);


	set_skill("dodge",10);
	set_skill("hammer",20);

	set("race", "����");

	set( "gender", "����");


        set("attitude", "friendly");

	set("chat_chance",10);
        set("chat_msg", ({
	"�Է�˵��:����⸽��������ħ��ͽ��ĩ��\n",
	"�Է�������:ס�ڱ��ߵ����˾�Ȼ����ħ��ͽ��\n",
	"�Է�˵��:�һ�����Ҳ��ħ��ͽ��\n",
	 }) );
    setup();
}
