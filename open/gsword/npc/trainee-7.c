inherit NPC;

void create()
{
	set_name("����ܽ",({"ro fu","fu"}));
set("long","����֮Ů,�귽ʮ��,ǧ������.Ϊ����ң֮��ͽ.\n");
	set("gender","Ů��");
	set("combat_exp",3613);
        set("attitude","heroism");
	set("age",17);
	set("class","swordsman");
	set("force",150);
	set("max_force",150);
	set("family/master_name","����ң");
	set("chat_chance",10);
       set_skill("shasword",10);
       set_skill("sha-steps",3);
       map_skill("sword","shasword");
       map_skill("dodge","sha-steps");
	set("chat_msg",({
  "����ܽ������ݵ�:�����Ҳ���,ʹ��ʦ�ֱ�ʦ������˽�������һ���£�
  ��ʵ��ֻ�����ʦ�����׽�Բأ�����ǰ������С·���Ҿͳ��ȥ�ˣ���֪ 
  ��ʦ�����������\n",
  "����ܽ������ : ������˵Ŷ...���������ҵ�������--֣ʿ������̸��ʲô���ɽ�
   ����ʽ���� ,������������..���ᵽ���ؾ���֮�� ,�治֪����������ʲô..\n", 
  "����ܽ������:���������һЩ����������һ�Ѷ���Ĳк�֮�⣬Ҳ������
  ʲô���֮��������С·��ͷ�и�ɽ���о��ֵֹģ�����������ô�ڣ���Ҳ��
  �ҽ�ȥ��\n"
	 }));
	set("force_factor",3);
	set("str",30);
        set("cor", 30);
	set("per",35);
	set("int", 30);
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	set_skill("sword",35);
	set_skill("dodge",35);
	set_skill("parry",35);
	setup();
	carry_object("/obj/longsword.c")->wield();
	carry_object("/open/gsword/obj/robe_1")->wear();
	add_money("silver",5);
	create_family("�ɽ���",5,"����");
}

         
      
