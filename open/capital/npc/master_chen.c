// class_level: ��һЩ����(��).... :>      by adam
#include <ansi.h>
#include "/open/open.h"
#define max "max"
#define min "min"
inherit NPC;
inherit F_MASTER;
string do_help();
mapping class_level = ([
        "����Ժ����"      : ([ max : 25 , min : 0 ]),
        "ƽ����ʦү"      : ([ max : 50 , min : 25 ]),
        "ƽ������"        : ([ max : 100 , min : 50 ]),
        "��ͬ����"        : ([ max : 150 , min : 100 ]),
        "��������"        : ([ max : 200 , min : 150 ]),
        "��������"        : ([ max : 300 , min : 200 ]),
        "ͩ������"        : ([ max : 400 , min : 300 ]),
        "������"          : ([ max : 500 , min : 400 ]),
        "����֪��"        : ([ max : 600 , min : 500 ]),
        "����֪��"        : ([ max : 700 , min : 600 ]),
        "����֪��"        : ([ max : 800 , min : 700 ]),
        "�Ͼ�֪��"        : ([ max : 900 , min : 800 ]),
        "�����ᶽ"        : ([ max : 1000 , min : 900 ]),
        "�ƹ��ܶ�"        : ([ max : 2000 , min : 1000 ]),
        "�����ܶ�"        : ([ max : 3000 , min : 2000 ]),
        "�����ܶ�"        : ([ max : 4000 , min : 3000 ]),
        "������Ա����"  : ([ max : 5000 , min : 4000 ]),
        "������"        : ([ max : 6000 , min : 5000 ]),
        "��������Ա����"  : ([ max : 7000 , min : 6000 ]),
        "��������"        : ([ max : 8000 , min : 7000 ]),
        "��������Ա����"  : ([ max : 9000 , min : 8000 ]),
        "��������"        : ([ max : 10000 , min : 9000 ]),
        "��������Ա����"  : ([ max : 11000 , min : 10000 ]),
        "��������"        : ([ max : 12000 , min : 11000 ]),
        "�̲�����Ա����"  : ([ max : 13000 , min : 12000 ]),
        "�̲�����"        : ([ max : 14000 , min : 13000 ]),
        "�մ���ͼ���ѧʿ": ([ max : 15000 , min : 14000 ]),
        "��ة��"          : ([ max : 25000 , min : 15000 ]),
        "��ة��"          : ([ max : 35000 , min : 25000 ]),
        "�մ�һ��ǧ�ﲮ"  : ([ max : 40000 , min : 35000 ]),
        "�մͶ����򻧺�"  : ([ max : 45000 , min : 40000 ]),
        "�մ�һ�ȶ�Զ��"  : ([ max : 50000 , min : 45000 ]),
        "�մ�һ�ȶ�����"  : ([ max : 55000 , min : 50000 ]),
        "�մͶ��Ȼ�����"  : ([ max : 60000 , min : 55000 ]),
        "�մ�һ��¹����"  : ([ max : 65000 , min : 60000 ]),
        "�մ�һ��ƽ����"  : ([ max : 70000 , min : 65000 ]),
        "�մ��ص�ƽ����"  : ([ max : 80000 , min : 70000 ]),
        ]);
void create()
{
        set_name("��֪��",({"master chen","chen"}));
        set("long",
        "���Ǳ����̲��������߹�,���ƴ�����,����ȫ��˾�����Ա���ȡ�\n"+
        "�йص��ٵ�һЩָ���Լ��ƶȵȵȵ�˵����(help officer).\n");
        set("gender","����");
        set("class","officer");
        set("title","����������");
        set("officer_class","����������");
        set("officer_power",150);
        set("max_officer_power",150);
        set("office_exp",10000);
        set("nickname",HIY"ִ����ɽ"NOR);
        set("officer_att","good");
        set("combat_exp",1000000);
        set("attitude","heroism");
        set("age",55);
        set("str", 30);
        set("con", 30);
        set("cps", 30);
        set("max_force",1500);
        set("force",1500);
        set("max_kee",3500);
        set("kee",3500);
        set_temp("apply/armor",150);
        set_skill("literate",80);
        set_skill("force",60);
        set_skill("dodge",40);
        set_skill("parry",60);
        set_skill("unarmed",40);
        set_skill("dagger",60);
        set_skill("be-officer",90);
        set_skill("security",100);
        map_skill("be-officer","security");
        set_skill("dragon-dagger",100);
        map_skill("dagger","dragon-dagger");
        set_skill("chen-steps",60);
        map_skill("dodge","chen-steps");
        map_skill("move","chen-steps");
        set_skill("oneforce",60);
        set_skill("chen-steps",60);
        map_skill("force","oneforce");
        set("force_factor",10);
        set("inquiry", ([
                "��æ" : (: do_help :),
        ]) );
        setup();
        create_family("��֪��",1," ");
        carry_object("/open/capital/obj/chen_dagger")->wield();
}

  void attempt_apprentice(object ob)
{
        command("l "+ob->query("id"));
        command("recruit "+ob->query("id"));
        ob->set("officer_class","����������");
        ob->set("officer_power",10);
        ob->set("max_officer_power",10);
        ob->set("title","����������");
        ob->set("relation/master chen/value",30);
        ob->set("relation/master chen/name","��֪��");
        command("say �ܺ� ! ���˹پ�Ҫ֪����ε��٣����ȿ���(help officer)�ɡ�");
}
int accept_object(object me,object ob)
{
        string letter_id;
        letter_id=ob->query("id");
        if(letter_id=="chen_letter")
        {
                destruct(ob);
                command("say ��!�ҵ��ţ���......��л����");
                command("bow"+me->query("id"));
                me->add("taigan_exp",10);
                me->delete_temp("working");
                switch(random(3)){
                        case 1:
                        me->set("taigan_work",5);
                        break;
                        case 2:
                        me->set("taigan_work",6);
                        break;
                        case 3:
                        me->set("taigan_work",7);
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
        if(work!=4 || me->query_temp("working"))
                return "������ûʲô����Ҫ���æ��ȥ���������費��Ҫ�ɡ�\n";
        else
        {
        switch(random(3))
        {
                case 1:
                new("/open/capital/room/sroom/obj/test_letter")->move(me);
                me->set_temp("working",1);
                message_vision("����$Nһ���š�\n",me);
                return "���������ã��������з���Ҫ�����������ϴ��ˣ��������һ�˰ɡ�\n";
                break;
                case 2:
                new("/open/capital/room/sroom/obj/soldier_letter")->move(me);
                me->set_temp("working",1);
                message_vision("����$Nһ���š�\n",me);
                return "���������ã��������з���Ҫ�������������Ʊ�ʷ���������һ�˰ɡ�\n";
                break;
                case 3:
                new("/open/capital/room/sroom/obj/lee_letter")->move(me);
                me->set_temp("working",1);
                message_vision("����$Nһ���š�\n",me);
                return "���������ã��������з���Ҫ����ս���ҵ�����ˣ��������һ�˰ɡ�\n";
                break;
        }
        }
}
int check_class_level()
{
        string *class = keys(class_level);
        object me = this_player();
        mapping limit;
        int i;
        for( i = 0 ; i < sizeof(class) ; i ++ )
        {
          limit = class_level[class[i]];
          if( me->query("title") != class[i] && me->query("officer_class") == class[i] )
             me->set("title",class[i]);
          if( me->query("officer_class") == class[i] ) continue;
          if( me->query("max_officer_power") >= limit["min"] && me->query("max_officer_power") < limit["max"] )
          {
             command("say ��ʥּ!!!!");
             command("say ������Ի:  �� "+me->name(1)+" ���ϱ�������,\n"+
                     "            ������Ϊ "+class[i]+",�մ�!!!");
             command("say ��ϲ����!!! ��ϲ����!!!");
             me->set("officer_class",class[i]);
             me->set("title",class[i]);
             return 1;
           }
        }
        // �Լ���ͽ�ܲ��˳ƺ�����
        command("say �� ! ������� ! �ܺ� !");
        return 1;
}
void init()
{
   add_action("do_return","return");
// if( this_player()->query("family/master_id") == "master chen" )
   if( this_player()->query("class")=="officer" && userp(this_player()) )
     call_out("check_class_level",1);
}
int do_return()
{
        if( this_player()->query("class") != "officer" ) return 0;
//      if( this_player()->query("family/master_id")!="master chen") return 0;
        if( this_player()->query("age") < 21 ) {
                command("say С���� ! �㻹���ᣬ��ô�������ˣ�����ʥ�ϻ᲻��׼Ŷ !");
                return 1;
                }
        if( this_player()->query_skill("be-officer") < 50 ) {
                command("say С���� ! �ŵ�����ôһ�¹پ������� ? ������û���Ϸ�������� !");
                command("say ���в��� ! �Ϸ�׼ !");
                return 1;
        }
        if( this_player()->query_temp("return") == 0 )
        {
                command("say ����Ĳ��뵱������ ? ");
                tell_object( this_player() , "������һ�� (return) ȷ�ϡ�\n");
                this_player()->set_temp("return",1);
                return 1;
        }
        command("say ��ô .. �ٻ�� !");
        this_player()->delete("class");
        tell_object( this_player() , "�ӽ��������Ѿ����һ������\n");
        this_player()->delete_skill("be-officer");
        this_player()->delete_skill("security");
        this_player()->delete("max_officer_power");
        this_player()->delete("officer_power");
        this_player()->delete("family");
        this_player()->delete("relation");
        this_player()->delete_skill("chen-steps");
        this_player()->delete_skill("oneforce");
        this_player()->set("title","��ͨ����");
        return 1;
}
