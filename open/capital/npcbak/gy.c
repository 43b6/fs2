#include <ansi.h>
#include "/open/open.h"
inherit NPC;
string answer_head()
{
 int head;
head=this_player()->query("head",1);
         return sprintf("�㹲��%d��ս��������\n",head);
}
int head;
void create()
{
        object ob;
         set_name("��  ��",({"officer lee","officer","lee"}));
        set("long","����ר�Ÿ������й���սʿ���뽱���� \n");
        set("gebder","����");
         set("nickname",HIC"��ϯս���"NOR);
        set("combat_exp",100);
          set("inquiry",([
             "ս��":(: answer_head :)
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
                  "head":3,
                  "amount":500,
                  "id":"super pill",
                        ]),
           "ѪӰ����": ([
                    "local":"/open/main/obj/unarmed-b",
                    "head":100,
                    "amount":1,
                    "id":"blood figring",
                           ]),
          "�����ּ�": ([
                  "local":"/open/main/obj/bird_legging",
                  "head":20,
                  "amount":10,
                  "id":"fire bird leggings",
                         ]),
          "������": ([
                  "local":"/open/main/obj/armband",
                  "amount":8,
                    "head":30,
                  "id":"red chilin armband",
                         ]),
            "�������": ([
                    "local":"/open/main/obj/g_glove",
                    "amount":5,
                    "head":40,
                   "id":"gold gloves",
                          ]),
            "��������": ([
                    "local":"/open/main/obj/m_cloak",
                    "amount":3,
                    "head":50,
                   "id":"dark moon cloak",
                          ]),
            "ʥ��ս��": ([
                    "local":"/open/main/obj/plate",
                    "amount":1,
                    "head":100,
                   "id":"holy ghost plate",
                          ]),
            "�������µ�": ([
                    "local":"/open/main/obj/dragon-moon",
                    "amount":1,
                    "head":100,
                   "id":"green dragon blade",
                          ]),
            "������": ([
                    "local":"/open/main/obj/present-f",
                    "amount":1,
                    "head":100,
                   "id":"ancient fan",
                          ]),
]));
        setup();
}
void init()
{
        add_action("do_list","list");
        add_action("do_convert","convert");
}
int do_list(object me)
{
        string *name;
        int i;

        me=this_player();
        name = keys(query("list"));
        tell_object(this_player(),"Ŀǰ���ܻ����Ľ��� \n");
    tell_object(this_player()," �� ��Ʒ �� �� ����ս������ ��\n");
        for(i=0;i<sizeof(name);i++)
tell_object(this_player(),sprintf("%10s%10d\n",name[i],query("list/"+name[i]+"/head")));
        return 1;
}
int do_convert(string weapon)
{
        object ob;
        if(this_player()->query("head")<=10)
{
          command("say û����Ҫɶ��������ȥ˯��!\n");
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
    sprintf("�㹲��%d�㻤��ս��������\n", head);
    command("say ����ս���㹻�������ɣ�\n");
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
