#include <ansi.h>
inherit NPC;
void create()
{
	object ob;
        set_name("Ƥ��",({"pi ko","pi","ko"}));
        set("long","
        ���Ƿ��Ҿ��а�����Ҫ��ɫ֮һ,���Ҿ���������������
        ��������,��һ�������������������겻մ,��Ȼ�˻���
        ���������������Ǿ��������ִ��������ġ�

        ");
    set("gender","����");
        set("title","������");
        set("combat_exp",200000);

         set("attitude","heroism");
        set("age",35);
        set("str",30);
        set("cor", 30);
	set("cps", 18);
        set("per", 20);
        set("int", 20);
        set("force",1000);
        set("max_kee",2500);
        set("kee",2500);
	set_skill("parry",50);
        set("max_force",1000);
        set("force_factor",5);
        set_skill("force",50);
        set_skill("unarmed",40);
        set_skill("lance",50);
        set_skill("power-lance",50);
	set_skill("dodge",50);
        set_skill("parry",40);
        set_skill("eagle-steps",30);
        map_skill("lance","power-lance");
        map_skill("dodge","eagle-steps");
        map_skill("parry","power-lance");
        set_skill("spforce",30);
        map_skill("force","spforce");
        set("list",([
        "ľǹ": ([
                "local":"/open/soldier/obj/wood",
                  "amount":20,
                "id":"wood",
                ]),
        "��ǹ": ([
                "local":"/open/soldier/obj/long",
                "amount":10,
                "id":"long",
                ]),
        "���":([
                "local":"/open/soldier/obj/snake",
                "amount": 5,
                "id":"snake",
                ]),
       "��ì":([
                "local":"/open/soldier/obj/beast",
                "amount": 3,
                "id":"beast",
             ]), 
        ]));
	setup();
        ob=carry_object("/open/soldier/obj/soak");
        ob->wield();
}

void init()
{
	add_action("do_list","list");
        add_action("do_receive","receive");
}
int do_list(object me)
{
	string *name;
	int i;
        me=this_player();
        name=keys(query("list"));
        tell_object(this_player(),"�����������������������:\n");
	for(i=0;i<sizeof(name);i++)
        tell_object(this_player(),sprintf("%10s%10d\n",name[i],query("list/"+name[i]+"/amount")));
	return 1;
}
int do_receive(string weapon)
{
	object ob;
        ob=this_player();
        if(this_player()->query("class")!="soldier")
	{
                command("say ��˭�� !! ����ôû�����㡣\n");
		return 1;
	}
	if(!query("list/"+weapon))
	{
		command("say ����Ҫʲô���� ?\n");
		return 1;
	}
	if(present(query("list/"+weapon+"/id"),this_player()))
	{
                command("say �����û��������á�\n");
		return 1;
	}
	if(query("list/"+weapon+"/amount")<=0)
	{
                command("say ��û�������ڸϨڡ�\n");
		return 1;
	}

      if(query("list/"+weapon+"/id")=="long",this_player())
      {
         if (ob->query("combat_exp")<=500 ) 
         {
               command("say ���ĥ�������������ó�ǹ��\n");
               return 0;
         }
      }
      if(query("list/"+weapon+"/id")=="snake",this_player())
      {
         if (ob->query("combat_exp")<=5000 ) 
         {
               command("say ���ĥ����������������ꫡ�\n");
               return 0;
         }
      }
      if(query("list/"+weapon+"/id")=="beast",this_player())
      {
         if (ob->query("combat_exp")<=35000 ) 
         {
               command("say ���ĥ����������������ì��\n");
               return 0;
         }
      }
       
	ob=new(query("list/"+weapon+"/local"));
        ob->add_amount(2);
        add("list/"+weapon+"/amount",-1);
	ob->move(this_player());
	ob->set("no_drop",1);
	ob->set("no_give",1);
        message_vision( "$N�ø�$nһ��"+ob->name()+"\n",this_object(),this_player());
	return 1;
} 
