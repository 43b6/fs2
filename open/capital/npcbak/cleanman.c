//made by smirk
#include <ansi.h>

inherit NPC;

void create(){
	set_name("�����",({"clean man","man"}) );
	set("gender","����");
	set("age",42);
	set("long",@LONG
	һλ�����𴲴�ɨ�����������
LONG);
	set("combat_exp",2000);
	set("attitude","friendly");
	set("str",28);
	set("int",18);
	set("per",15);
	set_skill("dodge",20);
	set_skill("parry",10);
	set("chat_chance",30);
	set("chat_msg",({
	"�����˵��:��˯���������!!\n",
	"�����˵��:������Ҫ�úñ�����,����40�껹��һ������,������Ϊ*����*�з�\n",
	"�����˵��:ÿ�춼���岻�������,���鷳!!\n",
	(: this_object(),"around" :),
        }) );
	set_temp("apply/armor",10);
	  set("inquiry", ([
	  "thief" : "����˵�Ǹ�����ڻʳǶ������õĴ���ǰ�?!
                     ��ϧ����Ӱ�Ӷ�û����,һ����λ����,�ܹ������߱�˵!!\n",
	  "����"  : "�Ᵽ���ķ���(method)�������ݺᾩ�ǵ��ر�!!",
	  "method": "����������˯������!!........ʲô!!��֪���ؼ�?!",
	  "�ؼ�"  : "������֪���͸�����۰�!!������ҳԷ��ļһ���",
	  "����"  : "�ٺ�....������....10���ƽ�!!",
	  ]) );	
setup();
	carry_object("/open/capital/obj/broom")->wield();
	carry_object("/obj/cloth")->wear();
	carry_object("/open/capital/obj/workpants")->wear();
	add_money("/obj/money/silver",20);
}

int accept_object(object who,object ob)
{  
  if( ob->value() < 1000000 )
   { say("�����˵��:��̫С���ҵ��ؼ��˰�!!\n");
	return 1;}
  else{
    message_vision("�����˵��:�ٺ�,��Ȼ���Ǹ�������,��....����鵤����!!\n",who);
    new("/open/capital/obj/ggpill")->move(who);
    	return 1;}
}	
