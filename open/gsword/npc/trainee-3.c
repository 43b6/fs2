inherit NPC;

void create()
{
	set_name("��Ӧ��",({"in long","long"}));
	set("long","�ɽ��������ʦ�� ,Ҳ���ų˷�֮���� .\n");
	set("gender","����");
	set("combat_exp",15507);
        set("attitude","heroism");
	set("age",23);
	set("title","�ɽ��ɵ������ʦ��");
	set("class","swordsman");
	set("force",500);
	set("max_force",500);
	set("family/master_name","�ų˷�");
	set("force_factor",5);
	set("str",30);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set_skill("shasword",10);
	set_skill("sha-steps",3);
	map_skill("sword","shasword");
	map_skill("dodge","sha-steps");
	set("chat_chance",6);
	set("chat_msg",({
		"��Ӧ���૵�˵:Сʦ��֮���Է������ֲ��ҵ��£�������һʱ̰����ɵģ�
��ʦ������������Ȼ�ġ�\n",
          }));	
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	set_skill("sword",60);
	set("inquiry",([
	"Сʦ��": "�����Ҵ�������ɽ���棬�������ţ������������ڽ������
	�ĵ���ʦ�ܣ�����Ҳ����ǰ���˼��䣬����һ����С�ģ�����Сʦ�����
	�˽��أ��ǽ��������Ǿ����ܽ���ģ�ֻ�����ϻر�ʦ����ʦ����ŭ֮��
	��������˽��һ���£�����Сʦ�����ڵ�������Ҳ��̫�����\n"
	]));
	set_skill("dodge",50);
	set_skill("parry",50);
	set_skill("move",40);
	set_skill("literate",40);
	set_skill("force",40);
	setup();
	carry_object("/obj/longsword.c")->wield();
	carry_object("/open/gsword/obj/robe_1")->wear();
	carry_object("/open/gsword/obj/ff_pill")->set_amount(1);
	create_family("�ɽ���",5,"����");
}
