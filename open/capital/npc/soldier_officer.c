#include <ansi.h>;
#include "/open/open.h";
inherit F_SOLDIER;

string do_help();
void create()
{
set_name("�Ʊ�ʹ",({"soldier officer","officer"}));
set("attitude","heroism");
        set("combat_exp",440);
        set("class","officer");
        set("officer_class","�Ʊ�ʹ");
        set("officer_power",30);
        set("max_officer_power",30);
          set("age",47);
                set("str", 44);
                set("cor", 24);
                set("cps", 18);
                set("per", 24);
                set("int", 42);
        set("soldier_list",([
        "soldier":"��ʿ(soldier)",
        "fighter":"��ʿ(fighter)",
        "guard":"����(guard)",
        "guard2":"˽�˻���(guard2)",
        ]));
        set("soldier_lv",([
        "soldier":5,
        "fighter":10,
        "guard":15,
        "guard2":25,
        ]));
        set("inquiry", ([
                "��æ" : (: do_help :),


        ]) );
        setup();
}
int accept_object(object me,object ob)
{
        string letter_id;
        letter_id=ob->query("id");
        if(letter_id=="soldier_letter")
        {
                destruct(ob);
                command("say ��!�ҵ��ţ���......��л����");
                command("bow"+me->query("id"));
                me->add("taigan_exp",10);
                me->delete_temp("working");
                switch(random(3)){
                        case 1:
                        me->set("taigan_work",7);
                        break;
                        case 2:
                        me->set("taigan_work",8);
                        break;
                        case 3:
                        me->set("taigan_work",1);
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
        if(work!=6 || me->query_temp("working"))
                return "������ûʲô����Ҫ���æ��ȥ���������費��Ҫ�ɡ�\n";
        else
        {
        switch(random(3))
        {
                case 1:
                new("/open/capital/room/sroom/obj/lee_letter")->move(me);
                me->set_temp("working",1);
                message_vision("�Ʊ�ʹ����$Nһ���š�\n",me);
                return "���������ã��������з���Ҫ����ս���ҵ�����ˣ��������һ�˰ɡ�\n";
                break;
                case 2:
                new("/open/capital/room/sroom/obj/wu_letter")->move(me);
                me->set_temp("working",1);
                message_vision("����$Nһ���š�\n",me);
                return "���������ã��������з���Ҫ���������ܱ�����ˣ��������һ�˰ɡ�\n";
                break;
                case 3:
                new("/open/capital/room/sroom/obj/yen_letter")->move(me);
                me->set_temp("working",1);
                message_vision("����$Nһ���š�\n",me);
                return "���������ã��������з���Ҫ�����������Ϲ������������һ�˰ɡ�\n";
                break;
        }
        }
}

