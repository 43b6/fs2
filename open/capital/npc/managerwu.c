//�ʳǽ�����

#include </open/capital/capital.h>

inherit NPC;
string do_help();
void create()
{
        set_name("����ƽ",({"manager wu","manager","wu"}) );
        set("title","�����ܱ�");
        set("officer_power",20);
        set("max_officer_power",20);
        set("gender","����");
        set("age",33);
        set("class","officer");
        set("officer_class","�����ܱ�");
        set("str",30);
        set("long","�������������ܱ�������ȫ������ʳ�����������ش�\n");
        set("inquiry", ([
        "thief" : "��..����ɶ��, ֻҪ�첻�������ͺ��ˡ�",
        "��æ" : (: do_help :),
        ]));

        set("combat_exp",30943);
        set_skill("blade",70);
        set_skill("parry",70);
        set_skill("dodge",70);
        set_skill("her-blade",60);
        map_skill("blade","her-blade");
        setup();
        carry_object(CAP_OBJ"Ns_suit")->wear();
        carry_object(CAP_OBJ"Ns_boots")->wear();
        carry_object(CAP_OBJ"Ns_hat")->wear();
        carry_object(CAP_OBJ"Sblade")->wield();
        add_money("silver",20);

}

int accept_fight(object who)
{
        return notify_fail(query("name")+"˵������!!\n");
}
int accept_object(object me,object ob)
{
        string letter_id;
        letter_id=ob->query("id");
        if(letter_id=="wu_letter")
        {
                destruct(ob);
                command("say ��!�ҵ��ţ���......��л����");
                command("bow"+me->query("id"));
                me->add("taigan_exp",10);
                me->delete_temp("working");
                switch(random(3)){
                        case 1:
                        me->set("taigan_work",1);
                        break;
                        case 2:
                        me->set("taigan_work",2);
                        break;
                        case 3:
                        me->set("taigan_work",3);
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
        if(work!=8 || me->query_temp("working"))
                return "������ûʲô����Ҫ���æ��ȥ���������費��Ҫ�ɡ�\n";
        else
        {
        switch(random(3))
        {
                case 1:
                new("/open/capital/room/sroom/obj/yen_letter")->move(me);
                me->set_temp("working",1);
                message_vision("����$Nһ���š�\n",me);
                return "���������ã��������з���Ҫ�����������Ϲ������������һ�˰ɡ�\n";
                break;
                case 2:
                new("/open/capital/room/sroom/obj/chang_letter")->move(me);
                me->set_temp("working",1);
                message_vision("����$Nһ���š�\n",me);
                return "���������ã��������з���Ҫ�����������Ź������������һ�˰ɡ�\n";
                break;
                case 3:
                new("/open/capital/room/sroom/obj/chan_letter")->move(me);
                me->set_temp("working",1);
                message_vision("����$Nһ���š�\n",me);
                return "���������ã��������з���Ҫ���������ĳ¹������������һ�˰ɡ�\n";
                break;
        }
        }
}
