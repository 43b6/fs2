inherit NPC;

void create()
{
	set_name("³��",({"ru lian","ru","lian"}));
	set("long",@LONG
ֻ֪�����ɽ��ĳ�Ա֮һ ,���ɽ������кܳ���һ��ʱ��������ż����˵Щ
�ɽ��Ĺ��¸������ ,������ͽ�Ƕ���������.
LONG);
	set("gender","����");
	set("combat_exp",10000);
        set("attitude","heroism");
	set("age",23);
	set("title","�ɽ��ɳ���");
	set("class","swordsman");
	set("force",500);
	set("max_force",500);
	set("force_factor",5);
	set("str",30);
        set("cor", 30);
	set("per", 25);
	set("int", 30);
	set("chat_chance",6);
	set("chat_msg",({
        "���ߵ�: �ɽ��ɴ�������һ������ ,��ʦү--��ң��--�ڴ��ɺ�Լ����\n
 ��ĳ��ս���� ,�����������ص����� ,������֮λ�����ڶ��������˺�\n ,
 �ʹ����˽��� ,�����ĺ���\n",
        "³����: ��ʦү����ǰ�ر�Ը����ǲ��ɽӽ����� ,ԭ����Ҳû������˵\n
 ��� ,������ֻ��������֪���ɡ�\n",
          }));	
	set("cps",20);
	set("con", 30);
	set("spi", 15);
	set("kar", 30);
	set_skill("sword",60);
	set("inquiry",([
        "����": "������˵�� ,��������...��\n",
        "����": "����ǧ���ȥ����Ŷ ,������������ ,˵�����ɽ��ɻ�ʹ˻���
        �����ϡ�\n",
	]));
	set_skill("dodge",50);
	set_skill("parry",50);
	set_skill("move",40);
	set_skill("literate",40);
	set_skill("force",40);
	setup();
	carry_object("/obj/longsword.c")->wield();
	carry_object("/open/gsword/obj/robe_1")->wear();
	create_family("�ɽ���",3,"����");
}

         
      
