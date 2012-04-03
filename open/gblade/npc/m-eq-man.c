#include <ansi.h>
#include "/open/open.h"
inherit NPC;
string answer_head()
 {
 int head;
 head=this_player()->query("snow-head",1);
return sprintf("��һ��ɱ��%d��ѩ�Ե��ӡ�",head);
 }
int head=this_player()->query("snow-head",1);
void create()
{
        set_name("Ī����",({"older man","man"}));
        set("long","����ר�Ŷһ�ѩ����ͷ��Ī���ܹܡ�\n");
        set("gender","����");
        set("title","Ī���ܹ�");
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
        "head":(: answer_head :)
        ]));
        set("list",([
        "ѩ����": ([
                "local":"/open/gsword/obj/ff_pill",
                "head":2,
                "amount":500,
                "id":"force pill",
                ]),
        "��֥�ɵ�": ([
                "local":"/open/gsword/obj/f_pill",
                "head":2,
                "amount":500,
                "id":"super pill",
                ]),
        "����¶":([
                "local":"/daemon/class/doctor/medicine/curesick",
                "head":2,
                "amount": 500,
                "id":"ice heart pill",
                ]),
        "�ٻ�����¶":([
                "local":"/open/ping/obj/poison_pill",
                "head":2,
                "amount": 500,
                "id":"flower pill",
                ]),
        "����������": ([
                "local":"/daemon/class/fighter/star",
                "head":30,
                "amount":30,
                "id":"destoryer",
                ]),
        "���ָ��": ([
                "local":"/open/snow/obj/figring",
                "head":35,
                "amount":35,
                "id":"figring",
                ]),
        "�챦ʯ��ָ":([
                "local":"/open/gsword/obj/ring-1",
                "head":20,
                "amount": 20,
                "id":"ruby_ring",
                ]),
        "��ѩ���":([
                "local":"/open/ping/obj/ring-2",
                "head":20,
                "amount": 20,
                "id":"ice_ring",
                ]),
        "а������": ([
                "local":"/open/ping/obj/fan-1",
                "head":20,
                "amount":20,
                "id":"evil_fan",
                ]),
        "Ʈ����": ([
                "local":"/open/ping/obj/cloud_fan",
                "head":35,
                "amount":35,
                "id":"cloud fan",
                ]),
        "���Ͻ�":([
                "local":"/daemon/class/blademan/obj/gold-blade",
                "head":50,
                "amount": 50,
                "id":"gold blade",
                ]),
        "�ͽ�":([
                "local":"/obj/money/gold",
                "head":1,
                "amount": 5000,
                "id":"gold",
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
        tell_object(this_player(),"Ŀǰ���ܻ����Ľ�Ʒ: \n\n");
        tell_object(this_player(),"  �� ��Ʒ ���� ������ͷ�� ��\n\n");
        for(i=0;i<sizeof(name);i++)
tell_object(this_player(),sprintf("%10s%10d\n",name[i],query("list/"+name[i]+"/head")));
        return 1;
}

int do_want(string weapon)
{
        object ob;
        if(this_player()->query("snow-head")<5)
            {
        command("say ��Ҫ�ʹ;Ͷ�ɱһ�����ѽ��\n");
                return 1;
        }
        if(!query("list/"+weapon))
        {
                command("say ����Ҫʲô�ʹͣ�\n");
                return 1;
        }
        if(query("list/"+weapon+"/amount")<=0)
        {
                command("say ������������ȱ����\n");
                return 1;
        }
if(this_player()->query("snow-head") < query("list/"+weapon+"/head"))
{
    command("say ������ͷ�����������ɣ�\n");
      return 1;
  }
if(weapon=="ѩ����"||weapon=="��֥�ɵ�"||weapon=="����¶")
{
        ob=new(query("list/"+weapon+"/local"));
        ob->add_amount(15);
        add("list/"+weapon+"/amount",-1);
this_player()->add("snow-head",-query("list/"+weapon+"/head"));
        ob->move(this_player());
        ob->set("no_drop",1);
        ob->set("no_give",1);
message_vision("$N�ø�$n��Ҫ��"+ob->name()+"��\n",this_object(),this_player());
                return 1;
}
        ob=new(query("list/"+weapon+"/local"));
        ob->add_amount(1);
        add("list/"+weapon+"/amount",-1);
this_player()->add("snow-head",-query("list/"+weapon+"/head"));
        ob->move(this_player());
        ob->set("no_drop",1);
        ob->set("no_give",1);
message_vision("$N�ø�$n��Ҫ��"+ob->name()+"��\n",this_object(),this_player());
                return 1;
}
