//blackman.c by urd
//87.8.19  Ϊ�˵������⣬�����ֱ����޸���
#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;

string ask_card();
void create()
{
	set_name("������",({"black suit","suit"}));
	set("long","����ɱ�ָ����߹���ĳ��� ,ԭ�������ھ����н����»�Ա .\n
	                  Ŀǰ��Ϊ�������ɵı��ȣ�������ֻ���˵�ɱ����̳�ĺ�ɽ.\n
		      ��Ŀǰ���ڽ�ɱ�ֵ����������λ�ǳ���ߡ�\n
		      ������Ҷ�³ǣ�֮���ƺ��в���ǣ����\n");
	set("gender","����");
	set("class","killer");
	set("nickname","�������");
	set("combat_exp",1000000);
	set("attitude","heroism");
	set("age",43);
	set("title","��������");
	set("str", 44);
	set("cor", 24);
	set("cps", 18);
	set("per", 24);
	set("int", 42);
	set("force",1400);
	set_skill("literate",40);
	set("max_force",1400);
	set("max_kee",2000);
	set_skill("magic",50);
	set_skill("array",50);
	set_skill("move",60);
	set_skill("force",60);
	set_skill("dodge",80);
	set_skill("parry",60);
	set_skill("spell",50);
	set_skill("sword",50);
	set_skill("unarmed",50);
	set_skill("blade",50);
	set_skill("staff",50);
	set_skill("throwing",70);
	set_skill("dagger",55);
	set("force_factor",10);
	set_skill("hammer",50);
set("inquiry",([
"Ҷ�³�" :"��������Ҫ�õ���������ѵĶ��֣�������Ϊ��С�磩��һ����.............\n",
"С��" :"������Ҷ���磬�����ɱ�ֵ�һ��Ů����������Ҷ�³ǻ���(����)\n",
"����":"����һ�����£���Ը���ͷ��Ӧ��һ�����𣿣�\n",
"ɱ������" : (: ask_card :),
]));

	setup();
carry_object("/open/killer/memory/hair.c");
carry_object("/obj/cloth")->wear();
add_money("gold",10);
}

void init()
{
	add_action("do_join","join");
	add_action("do_nod","nod");
    add_action("do_show","show");
}

int accept_object(object wo,object ob)
{
  object me,ob2;  
  me=this_player();

  if(ob->query("id") == "card")  //���е���ɱ������ĵط�     
  {
    if (this_player()->query_temp("memory") != 9)
    {
	command("say ���������������˰����õİɣ�");
      	return 0;
    }
    command("say ��Ȼ�ǹ³�������ɵĺã�С����������ɱ�ֺ�������ˣ���");
    command("say  �����Ҹ���ɱ������ɣ���");
    message_vision(HIR"�����콻��$Nһ��ɱ������\n"NOR,me);	
    ob2=new("/open/killer/memory/killer_card.c");
    ob2->move(me);
    command("say  ����֤��ɱ�����ʸ��ڸ�����ְ����������˼ǵû�������Ҫ( ɱ�����");
    command("say  ֻҪС�ɰ���ְϵͳ���ã���Ϳ�����ְ�ڸ���֯��");
    command("say   ���ھ����Ұ����ħ��ɱ�����ƴ򿪵��ڶ��㣬���������ߵ�50��!!");
    message_vision(HIR"������Ѹ����$N�����Ĵ�\n"NOR,me);	
    tell_object(me,"��е�����һ���������У�����ħ��ɱ���Է��Ӹ�ǿ���������\n");
   message("system",HIW "������������� :\n
		" +this_player()->name()+"���Ѿ����԰�ħ��ɱ��ĸ�ǿ����!!\n\n"NOR,users());
    me->set("title",HIM"�������ؼ�ɱ��"NOR);
    me->set_temp("memory",0);
    me->set("quest/memory",1);
    return 1;
  }
 destruct(ob);
 return 0;
}

int do_join()
{
	if(this_player()->query("class"))
		return notify_fail("���Ѿ��������������ˡ�\n");
	this_player()->set("class","avatar");
	message("system",HIW "������������� :\n
		��ӭ" +this_player()->name()+"���빤��!!\n\n"NOR,users());
	return 1;
}

int do_nod()
{
  if (this_player()->query("class")  != "killer")
        return notify_fail("����....����������û�ʸ�֪����ɱ���Լ������顣");
  if (this_player()->query("quest/rain") != 1)
	return notify_fail("���ӣ��㻹С������ɳ������ʸ���ٰ��Ұɡ�");
  if (this_player()->query("quest/memory") == 1)
return notify_fail("�㲻��֪������");
  this_player()->set_temp("memory",1);
command ("give hair to " + this_player()->query("id"));
return notify_fail("����Ұ���һ������������Ҷ�������");
}

int do_show()
{
  if ( !present("card",this_player()) )
return notify_fail("�㣿��Ҫ��������ѽ��.....�ҿ�û��Ȥ��ѽ.........\n");
  if (this_player()->query_temp("memory") != 8)
return notify_fail("�������͵�������ƣ��������\n");
  this_player()->set_temp("memory",9);
return notify_fail("�³����������������ģ�����������ҿ�������");
}

string ask_card()
{
 	object ob;
	if( present("killer_card",this_player()) ) return "��Ҫ��ô ?";
if( !this_player()->query("quest/memory") ) return "��Ҫ��ô ?";
ob = new("/open/killer/memory/killer_card.c");
ob->move(this_player());
message_vision("$N��$һ��ɱ�����\n",this_object(),this_player());
return "С�Ĳ�Ҫ��Ū����";
}
