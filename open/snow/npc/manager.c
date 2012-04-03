#include <ansi.h>

inherit NPC;
  inherit F_MASTER;
void create()
{
	object ob;
	set_name("������",({"weapon manager","manager"}));
	set("long","�������������ˣ����Ƕ���һ�����ˣ�ȴ�Ǻ������ı���ʹ��\n");
	set("gebder","����");
	set("title","����������ʹ");
	set("combat_exp",385872);

          set("attitude","heroism");
	set("age",30);
	set("str",30);
		set("cor", 24);
		set("cps", 18);
		set("per", 24);
		set("int", 42);
	set("force",400);
	set_skill("parry",50);
           set("max_force",800);
	set("force_factor",10);
          set_skill("dodge",40);
            set_skill("force",50);
          set_skill("unarmed",60);
	set_skill("throwing",60);
	set_skill("rain-throwing",80);
	set_skill("dodge",40);
	set_skill("shade-steps",60);
	map_skill("throwing","rain-throwing");
	map_skill("dodge","shade-steps");
	set_skill("blackforce",30);
	map_skill("force","blackforce");
	set("list",([
	"�ɵ�": ([
		"local":"/open/snow/obj/knife",
                  "amount":10000,
		"id":"knife",
		]),
	"����": ([
		"local":"/open/snow/obj/needle",
                "amount":10000,
		"id":"needle",
		]),
	]));
	setup();
	ob=carry_object("/open/snow/obj/hate_knife");
	ob->add_amount(30);
	ob->wield();
}

void init()
{
	add_action("do_list","list");
	add_action("do_report","report");
}
int do_list()
{
	string *name;
	int i;
	name=keys(query("list"));
	tell_object(this_player(),"Ŀǰ�����������������\n");
	for(i=0;i<sizeof(name);i++)
		tell_object(this_player(),sprintf("%10s%10d\n",name[i],query("list/"+name[i]+"/amount")));
	return 1;
}
int do_report(string weapon)
{
	object ob;
	if(this_player()->query("class")!="killer")
	{
		command("say ��Ǹ ! ������������ڱ���֯��");
		return 1;
	}
	if(!query("list/"+weapon))
	{
		command("say ����Ҫʲô���� ?\n");
		return 1;
	}
	if(present(query("list/"+weapon+"/id"),this_player()))
	{
		command("say �������������á�\n");
		return 1;
	}
	if(query("list/"+weapon+"/amount")<=0)
	{
		command("say ������������ȱ����");
		return 1;
	}
	ob=new(query("list/"+weapon+"/local"));
        ob->add_amount(200);
         add("list/"+weapon+"/amount",-200);
	ob->move(this_player());
	ob->set("no_drop",1);
	ob->set("no_give",1);
	message_vision( "$N�ø�$nһЩ"+ob->name()+"\n",this_object(),this_player());
	return 1;
}
