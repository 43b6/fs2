
inherit NPC;




void create()
{
	set_name("��ţ",({"son"}));
	set("age",15);
	set_skill("dodge",10);
	set("combat_exp",100);
	
	set("long","�Է�Ķ���,��������������,ʹ�����ķ�Ӧ��һ���˳ٶ�,��������������.\n");
	set("chat_chance",6);
	set("chat_msg",({
		"��ţ�������:����������!.\n",
		}) );
	setup();
}



