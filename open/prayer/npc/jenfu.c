#include <ansi.h>

#include "/open/open.h"
inherit NPC;

string answer_head()
 {
 int head;
 head=this_player()->query("head",1);
   return sprintf("��һ��ɱ��%d����Ѫ��Ա!!\n",head);
  }

int head;

void create()
{
	object ob;
	set_name("��  ч",({"older man","older","man"}));
	set("long","����ר�Ŷһ���Ѫ������ͷ���μ���ū. \n");
	set("gebder","����");
	set("title","�μ���ū");
	set("combat_exp",100);
        set("attitude","friendly");
	set("age",60);
	set("str",40);
        set("cor", 24);
	set("cps", 18);
	set("per", 24);
	set("int", 42);
	set("force",40);
        set("inquiry",([
        "��Ѫ":(: answer_head :)
        ]));
        set("list",([
        "���ָ��": ([
                "local":"/open/snow/obj/figring",
	    "head": 50,
                "amount":10,
                "id":"figring",
                ]),
        "�챦ʯ��ָ": ([
                "local":"/open/gsword/obj/ring-1",
	    "head": 30,
                "amount":10,
                "id":"ruby_ring",
                ]),
	"ѩ����": ([
                "local":"/open/gsword/obj/ff_pill",
                "head": 10,
                "amount":100,
                "id":"pill",
                ]),
	"����������": ([
                "local":"/daemon/class/fighter/star",
                "head": 50,	     
	    "amount":10,
                "id":"destoryer",
                ]),
        	"��ѩ���":([
                "local":"/open/ping/obj/ring-2",
                "head": 35,
	    "amount": 20,
                "id":"ice_ring",
                ]), 
        	"а������": ([
                "local":"/open/ping/obj/fan-1",
	    "head": 35,
                "amount":20,
                "id":"evil_fan",
                ]),
]));

	setup();
}

void init()
{
	add_action("do_list","list");
	add_action("do_want","want");
}
int do_list(object me)
{
	string *name;
	int i;

        me=this_player();
        name = keys(query("list"));
	tell_object(this_player(),"Ŀǰ���ܻ����Ľ�Ʒ: \n");
	for(i=0;i<sizeof(name);i++)
        tell_object(this_player(),sprintf("%10s%10d\n",name[i],query("list/"+name[i]+"/amount")));
	return 1;
}

int do_want(string weapon)
{
	object ob;
	if(this_player()->query("head")<=10)
            {
	command("say ��Ҫ�ʹ;Ͷ�ɱһ�����ѽ!!\n");
		return 1;
	}
	if(!query("list/"+weapon))
	{
		command("say ����Ҫʲô�ʹ�?\n");
		return 1;
	}
	if(query("list/"+weapon+"/amount")<=0)
	{
		command("say ������������ȱ����\n");
		return 1;
	}
 if (this_player()->query("head") < query("list/"+weapon+"/head") ) {
    sprintf("��һ��ɱ��%d����Ѫ��Ա!!\n", head);
    command("say ������Ѫɱ������������!\n");
      return 1;  
  }
	ob=new(query("list/"+weapon+"/local"));
        ob->add_amount(1);
        add("list/"+weapon+"/amount",-1);
	this_player()->add("head",-query("list/"+weapon+"/head"));
            ob->move(this_player());
	ob->set("no_drop",1);
	ob->set("no_give",1);
	message_vision( "$N�ø�$n��Ҫ��"+ob->name()+"\n",this_object(),this_player());
		return 1;  
}
