// guard.c

#include <ansi.h>

inherit NPC;

string ask_me(object who);
int counter = 1;
void create()
{
	set_name("�ʵ�����", ({ "sworder", "man" }) );
	set("gender", "����" );
	set("age", 41);
	set("str", 25);
	set("cor", 25);
	set("cps", 25);
	set("int", 5);
	set("long",
		"һλ�Ӷ������Ľ���,������������ϣ�������޼�����ѧ��.\n"
		"�����̲�������,�������֪����Ǻ�,���������������.\n" );
	set("combat_exp",893);
	set("attitude", "peaceful");
	set("chat_chance", 10);
	set("chat_msg", ({
		"�ʵ�����˵: û�뵽Ҫ���޼������������.\n",
		"�ʵ�����˵: ���µ�һ�����޼�����,��ֻҪѧ����ʮ��֮һ����,�����Զ���������.\n",
	}) );
	set("inquiry", ([
		"help": "лл��...��ֻ��ǷЩǮ����...\n",
		"����": "$$$$...һëǮ����һ���ú�...\n",
	]) );
	set_skill("sword", 25);
	set_skill("parry", 30);
	set_skill("dodge", 35);
	setup();
	add_money("silver",4);
        carry_object("/open/gsword/obj/robe_1")->wear();
        carry_object("/open/gsword/obj/boot-1")->wear();
        carry_object("/open/gsword/obj/sword")->wield();
}
int accept_object(object who, object ob)
{       object book;
        if(counter)
        {  
          if( ob->value() < 500 )
          {    say(" �ʵ�����˵: лл��,���ҳ������ǵ����.\n");
              return 1; }
          else {  say(" �ʵ�����˵: ����̫��л��,�Ȿ��������ǻر�.\n");
               book = new("/open/gsword/obj/sword_book");
               book->move(this_player());
               counter = 0;
               return 1; }
         } else {
               say(" �ʵ�����˵: лл����,�ҵ�Ǯ������...\n");
               return 1; }      
}                 	

