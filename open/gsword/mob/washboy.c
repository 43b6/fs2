// crazy_dog.c

inherit NPC;

void create()
{
	set_name("�ɽ��� С��ͯ", ({ "washboy", "boy" }) );
	set("race", "����");
	set("age", 13);
	set("long", "����ִɨ�㣬��������ר�ĵĴ�ɨ�����޾���ʯ�ס�\n");
	set("attitude", "peaceful");
	set("str", 17);
	set("cor", 15);
	set("combat_exp",40);
	set("chat_chance", 6);
	set("chat_msg",({
"С��ͯ�૵������ǵ�鹣�ÿ�ζ�������������Ĺ�ʦ��ū�ۣ�һ�½��Ҵ�ɨʯ
��һ����ֽ��Ұ����Ǵ�����Ħ��������һ��Ҫ��ʦ����״��\n",
"С��ͯ�૵��ò�����һЩ�곤��ʦ����˵������������Ĺ�ʦ�嵱���Ҳ����
߳զ��������������׷����ʦүնħ����������������������������ӣ��ҿ��˳���
�ٵİɣ�\n"
	}));
	set_temp("apply/attack", 5);
	set_temp("apply/damage", 2);
	set_temp("apply/armor", 2);

	setup();
       add_money("coin",50);
}
