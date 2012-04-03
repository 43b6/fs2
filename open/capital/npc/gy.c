#include <ansi.h>
#include "/open/open.h"
inherit NPC;
string do_help();
string answer_war_score()
{
 int war_score;
war_score=this_player()->query("war_score",1);
         return sprintf("�㹲��%d��ս��������\n",war_score);
}
int war_score;
void create()
{
        object ob;
         set_name("��  ��",({"officer lee","officer","lee"}));
        set("long","����ר�Ÿ������й���սʿ���뽱��,�������list ��convert ��ȡ�� \n");
        set("gebder","����");
         set("nickname",HIC"��ϯս���"NOR);
        set("combat_exp",100);
          set("inquiry",([
             "ս��":(: answer_war_score :),
             "��æ" : (: do_help :),
        ]));
          set("list",([
/*        "ѩ����": ([
                "local":"/open/gsword/obj/ff_pill",
                "war_score":10,
                "amount":500,
                "id":"force pill",
                       ]),
          "��֥�ɵ�": ([
                  "local":"/open/gsword/obj/f_pill",
                  "war_score":15,
                  "amount":500,
                  "id":"super pill",
                        ]),
*/           "ѪӰ����": ([
                    "local":"/open/main/obj/unarmed-b",
                    "war_score":1200,
                    "amount":1,
                    "id":"blood figring",
                           ]),
          "�����ּ�": ([
                  "local":"/open/main/obj/bird_legging",
                  "war_score":500,
                  "amount":10,
                  "id":"fire bird leggings",
                         ]),
/*          "������": ([
                  "local":"/open/main/obj/armband",
                  "amount":8,
                    "war_score":30,
                  "id":"red chilin armband",
                         ]),
*/            "�������": ([
                    "local":"/open/main/obj/g_glove",
                    "amount":5,
                    "war_score":1000,
                   "id":"gold gloves",
                          ]),
            "��������": ([
                    "local":"/open/main/obj/m_cloak",
                    "amount":3,
                    "war_score":1500,
                   "id":"dark moon cloak",
                          ]),
/*            "ʥ��ս��": ([
                    "local":"/open/main/obj/plate",
                    "amount":1,
                    "war_score":100,
                   "id":"holy ghost plate",
                          ]),
*/            "�������µ�": ([
                    "local":"/open/main/obj/dragon-moon",
                    "amount":1,
                    "war_score":1500,
                   "id":"green dragon blade",
                          ]),
            "������": ([
                    "local":"/open/main/obj/present-f",
                    "amount":1,
                    "war_score":1500,
                    "id":"ancient fan",
                          ]),
			"��ӥͷ��": ([
                    "local":"/data/autoload/open-area/shawk",
                    "amount":1,
                    "war_score":5000,
                    "id":"silver-hawk",
                          ]),
			"��������": ([
                    "local":"/data/autoload/open-area/dragona",
                    "amount":1,
                    "war_score":3500,
                    "id":"dragon-armband",
                          ]),
]));
        setup();
}
int accept_object(object me,object ob)
{
        string letter_id;
        letter_id=ob->query("id");
        if(letter_id=="lee_letter")
        {
                destruct(ob);
                command("say ��!�ҵ��ţ���......��л����");
                command("bow"+me->query("id"));
                me->add("taigan_exp",10);
                me->delete_temp("working");
                switch(random(3)){
                        case 1:
                        me->set("taigan_work",8);
                        break;
                        case 2:
                        me->set("taigan_work",1);
                        break;
                        case 3:
                        me->set("taigan_work",2);
                        break;
                        }
        }
        else{
                command("say ��???���Ų��Ǹ��ҵģ����톪!!!");
                command("give"+ob->query("id")+me->query("id"));
            }
}
string do_help()
{
        int work,i,j,k;
        object me,ob,letter;
        me=this_player();
        ob=this_object();
        work=me->query("taigan_work");
        if(work!=7 || me->query_temp("working") ||me->query("class")!="taigan")
                return "������ûʲô����Ҫ���æ��ȥ���������費��Ҫ�ɡ�\n";
        else
        {
        switch(random(3))
        {
                case 1:
                new("/open/capital/room/sroom/obj/wu_letter")->move(me);
                me->set_temp("working",1);
                message_vision("����$Nһ���š�\n",me);
                return "���������ã��������з���Ҫ���������ܱ�����ˣ��������һ�˰ɡ�\n";
                break;
                case 2:
                new("/open/capital/room/sroom/obj/yen_letter")->move(me);
                me->set_temp("working",1);
                message_vision("����$Nһ���š�\n",me);
                return "���������ã��������з���Ҫ�����������Ϲ������������һ�˰ɡ�\n";
                break;
                case 3:
                new("/open/capital/room/sroom/obj/chang_letter")->move(me);
                me->set_temp("working",1);
                message_vision("����$Nһ���š�\n",me);
                return "���������ã��������з���Ҫ�����������Ź������������һ�˰ɡ�\n";
                break;
        }
        }
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
tell_object(this_player(),sprintf("%10s%10d\n",name[i],query("list/"+name[i]+"/war_score")));
        return 1;
}
int do_convert(string weapon)
{
        object ob;
        if(this_player()->query("war_score")<=10)
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
 if (this_player()->query("war_score") < query("list/"+weapon+"/war_score") ) {
    sprintf("�㹲��%d�㻤��ս��������\n", war_score);
    command("say ����ս���㹻�������ɣ�\n");
      return 1;
}
        ob=new(query("list/"+weapon+"/local"));
        ob->add_amount(1);
        add("list/"+weapon+"/amount",-1);
        this_player()->add("war_score",-query("list/"+weapon+"/war_score"));
            ob->move(this_player());
        ob->set("no_drop",1);
        ob->set("no_give",1);
        message_vision( "$N�ø�$n��Ҫ��"+ob->name()+"\n",this_object(),this_player());
		write_file("/log/war/convert",sprintf("%s(%s) ��ս����%s�� %s\n",
		this_player()->name(1),this_player()->query("id"),ob->name(),ctime(time())));
                return 1;
}