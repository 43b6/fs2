#include <ansi.h>
inherit NPC;


string do_give();
string do_give2();
void do_book(object who);

void create()
{
	set_name("����",({"chii"}) );
        set("long","һλ�ഺ�껪����Ů���������أ�ƽʵ�д��ż���������\n");
        set("gender","Ů��");
        set("class","taoist");
        set("combat_exp",5000);
        set("attitude","friendly");
        set("age",16);
	 set("title","����ɵ���������");
        set("str", 25);
        set("cor", 30);
        set("cps", 30);
        set("per", 30);
        set("spi", 30);
        set("int", 26);
        set("force", 200);
        set_skill("literate",100);
        set("max_force", 200);
        set("max_mana",200);
        set("max_atman",150);
        
        set("force_factor", 6);

	set("inquiry",([
	"�׾�" : (:do_give:),
	"��ׯ" : (:do_give2:),
	]));
        setup();
	add_money("silver",3);
}

string do_give()
{
  object who=this_player();
  if(who->query("class")=="taoist") {
     call_out("do_book",4,who);
     return "�׾�����?....��Ȼ������ȥ��һ��..\n";	
 }
 return "��....�Բ����㲻������ĵ��Ӳ��ܸ��㡣";  
}

string do_give2()
{
  object who=this_player();
  if(who->query("class")=="taoist") {
     new("/open/tendo/obj/book2")->move(who);
     return "����������һ�����¾���\n";	
 }
 return "��....�Բ����㲻������ĵ��Ӳ��ܸ��㡣";  
}


void do_book(object who)
{
  message_vision ("����һ�ᣬ��������$Nһ��������ᡣ\n\n",who);
  message_vision ("����Ц��˵��: ��������ˣ�������������Ҫ..:)  \n",who); 
  new("/open/tendo/obj/book")->move(who);
  return;
}