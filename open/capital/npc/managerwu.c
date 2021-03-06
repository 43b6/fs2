//皇城禁卫军

#include </open/capital/capital.h>

inherit NPC;
string do_help();
void create()
{
        set_name("吴永平",({"manager wu","manager","wu"}) );
        set("title","粮草总兵");
        set("officer_power",20);
        set("max_officer_power",20);
        set("gender","男性");
        set("age",33);
        set("class","officer");
        set("officer_class","粮草总兵");
        set("str",30);
        set("long","禁卫军的粮草总兵，负责全军的粮食供给，责任重大。\n");
        set("inquiry", ([
        "thief" : "哈..关我啥事, 只要天不塌下来就好了。",
        "帮忙" : (: do_help :),
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
        return notify_fail(query("name")+"说：放肆!!\n");
}
int accept_object(object me,object ob)
{
        string letter_id;
        letter_id=ob->query("id");
        if(letter_id=="wu_letter")
        {
                destruct(ob);
                command("say 咦!我的信，嗯......多谢你啦");
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
                command("say 嗯???这信不是给我的，你搞错啰!!!");
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
                return "我现在没什么事需要你帮忙，去看看别人需不需要吧。\n";
        else
        {
        switch(random(3))
        {
                case 1:
                new("/open/capital/room/sroom/obj/yen_letter")->move(me);
                me->set_temp("working",1);
                message_vision("给了$N一封信。\n",me);
                return "你来的正好，我这里有封信要交给东厂的严公公，你帮我跑一趟吧。\n";
                break;
                case 2:
                new("/open/capital/room/sroom/obj/chang_letter")->move(me);
                me->set_temp("working",1);
                message_vision("给了$N一封信。\n",me);
                return "你来的正好，我这里有封信要交给东厂的张公公，你帮我跑一趟吧。\n";
                break;
                case 3:
                new("/open/capital/room/sroom/obj/chan_letter")->move(me);
                me->set_temp("working",1);
                message_vision("给了$N一封信。\n",me);
                return "你来的正好，我这里有封信要交给东厂的陈公公，你帮我跑一趟吧。\n";
                break;
        }
        }
}
