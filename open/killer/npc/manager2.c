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
	set("str",40);
        set("cor", 24);
	set("cps", 18);
	set("per", 24);
	set("int", 42);
	set("force",400);
        set("max_kee",1200);
	set_skill("parry",50);
        set("max_force",800);
	set("force_factor",20);
        set_skill("force",50);
        set_skill("unarmed",60);
	set_skill("throwing",60);
	set_skill("rain-throwing",80);
	set_skill("dodge",50);
        set_skill("parry",40);
	set_skill("shade-steps",60);
	map_skill("throwing","rain-throwing");
	map_skill("dodge","shade-steps");
        map_skill("parry","rain-throwing");
	set_skill("blackforce",30);
	map_skill("force","blackforce");
        set("list",([
        "�ɵ�": ([
                "local":"/open/killer/obj/knife",
                  "amount":9000,
                "id":"knife",
                ]),
        "����": ([
                "local":"/open/killer/obj/needle",
                "amount":9000,
                "id":"needle",
                ]),
        "����׶":([
                "local":"/open/killer/obj/lustar",
                "amount": 5000,
                "id":"star",
                ]),
        "ǧ�ź�":([
                "local":"/open/killer/obj/hate_knife",
                "amount": 2000,
                "id":"hate",
                ]),
        ]));
	setup();
	ob=carry_object("/open/snow/obj/hate_knife");
	ob->add_amount(50);
	ob->wield();
}

void init()
{
	add_action("do_list","list");
	add_action("do_report","report");
}
int do_list(object me)
{
	string *name;
	int i;
        me=this_player();
        name=keys(query("list"));
	tell_object(this_player(),"Ŀǰ�����������������\n");
	for(i=0;i<sizeof(name);i++)
        tell_object(this_player(),sprintf("%10s%10d\n",name[i],query("list/"+name[i]+"/amount")));
	return 1;
}
int do_report(string weapon)
{
	object ob;
        ob=this_player();
	if(this_player()->query("class")!="killer")
	{
		command("say ��Ǹ ! ������������ڱ���֯��\n");
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
		command("say ������������ȱ����\n");
		return 1;
	}
        if(query("list/"+weapon+"/id")=="star")
        {
          if (ob->query("combat_exp")<=60000)
          {
            command("say ��ľ���ֵ������������������׶��\n");
            return 0;
          }
        }
        if( query("list/"+weapon+"/id")=="hate")
        {
          if (ob->query("combat_exp")<=300000)
          {
            command("say ����ǧ�ź�,����ֵ������������!\n");
                return 0;
          }
        } 
	ob=new(query("list/"+weapon+"/local"));
        ob->add_amount(199);
        add("list/"+weapon+"/amount",-200);
	ob->move(this_player());
	ob->set("no_drop",1);
	ob->set("no_give",1);
	message_vision( "$N�ø�$nһЩ"+ob->name()+"\n",this_object(),this_player());
	return 1;
}
