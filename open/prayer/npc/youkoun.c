#include <ansi.h>
#include "/open/open.h"
inherit NPC;
inherit F_MASTER;
object ob1=this_object();
int have_say;

string ask_lover()
{
    object ob=this_player();
    if( ob->query("family/family_name") =="圣火教" && ob->query_temp("youkoun") >= 1 )
    {
    ob->set_temp("youkoun", 2);
    return("[36m他叫燕十一, 是霞山派的弟子, 也就是我的救命恩人!!武功高强, 所以我就....
可是我的[情敌]却阻挠了我跟他的事!![0m\n");
    }
    else
    {
    return("[36m我干嘛要回答你的问题呀!![0m\n");
    }
}

string ask_emery()
{
    object ob=this_player();
    if( ob->query_temp("youkoun") >= 2 )
    {
    ob->set_temp("youkoun", 3);
    return("[36m她叫做[红姑], 是他的心上人, 也是他的师姐!!虽然他被我关在[刑房]多年
可是还是念念不忘她!!真是气人!![0m\n");
    }
    else
    {
    return("[36m我干嘛要回答你的问题呀!![0m\n");
    }
}

string ask_room()
{
    object ob=this_player();
    if( ob->query_temp("youkoun") >= 3 )
    {
    ob->set_temp("youkoun", 4);
    return("[36m虽然我把他给抢了过来, 可是他知道她还没死, 因此心里头就更没有我了!!
所以我就私设了一个刑房, 每天拷打他, 希望他受不了皮肉之苦而求我!!而且在这几年中, 
我也自创了一套[驯兽术]!!算是一个小收获吧!![0m\n");
    }
    else
    {
    return("[36m我干嘛要回答你的问题呀!![0m\n");
    }
}

string ask_skill()
{
    object ob=this_player();
    if( ob->query_temp("youkoun") >= 4 )
    {
    ob->set_temp("youkoun", 5);
    return("[36m驯兽术??喔!!那是我长年在刑房中凌虐男人所悟出来的一种特异武学!!
然后它使将在制服野兽的用途上, 也特别地有效果!![0m\n");
    }
    else
    {
    return("[36m我干嘛要回答你的问题呀!![0m\n");
    }
}

string ask_red()
{
    object ob=this_player();
    if( ob->query_temp("youkoun") >= 3 )
    {
    ob->set_temp("youkoun", 6);
    return("[36m只要能将她解决掉, 一定能让燕哥哥回心转意的!!你愿意(nod)帮这个忙吗??[0m\n");
    }
    else
    {
    return("[36m我干嘛要回答你的问题呀!![0m\n");
    }
}

string ask_book()
{
    object ob=this_player();
    object ob3=new("/open/prayer/obj/trainbook");
    if( ob->query("quests/trainbeast",1) && !present("trainbook",ob) )
    {
    ob3->move(this_player());
    return "你自己好好地揣摩揣摩吧!!\n";
    }
    else
    {
    return "记得驯兽术只对野兽有效用而已喔!!\n";
    }
}   


void create()
{
        set_name("周琇虔", ({"chou shou-chin","chou","shou-chin"}));
        set("long",@LONG

        瑶光门的门主！生性怪异，虽贵为圣火八天门的门主
        , 可是却极度的讨厌男性, 如无教主的令牌, 任何男
        性都不得进入瑶光门, 否则必死无疑!!所修习的内功
        功力非常深厚!!

LONG);
        set("gender","女性");
        set("class","prayer");
        set("family/master_name","林宏升");
        set("combat_exp",1000000);
        set("attitude","heroism");
        set("age",34);
        set("title","瑶光门主");
        set("kee",5900);
        set("max_kee",5900);
        set("force",9000);
        set("max_force",9000);
        set("max_gin",3900);
        set("max_sen",3900);
        set("force_factor",10);
        set_skill("holy-force", 90);
        set_skill("superforce", 80);
        set_skill("cure", 20);
        set_skill("dodge",70);
        set_skill("canon",80);
        set_skill("force",90);
        set_skill("move", 40);
        set_skill("parry",70);
        set_skill("unarmed",60);
        set_skill("literate",40);
        set_skill("shift-steps",60);
        set_skill("universe",80);
        map_skill("force","superforce");
        map_skill("dodge","shift-steps");
        map_skill("move","shift-steps");
        map_skill("parry","universe");
        map_skill("unarmed","universe");
        set("inquiry",([
        "刑房":(: ask_room :),
        "爱人":(: ask_lover :),
        "情敌":(: ask_emery :),
        "红姑":(: ask_red :),
        "密笈":(: ask_book :),
        "驯兽术":(: ask_skill :),
        ]));
        set("functions/bluesea/level",40);
        set("chat_chance_combat", 40);
        set("chat_msg_combat", ({
        (: perform_action("force.blue1") :),
        (: perform_action("force.blue2") :),
        (: exert_function("blue") :),
        }));
        setup();
    add_money("gold",5);
    carry_object("/open/prayer/obj/emery-robe")->wear();
    carry_object("/open/prayer/obj/hat")->wear();
    carry_object("/open/prayer/obj/emery-belt")->wear();
    carry_object("/open/prayer/obj/emery-armband")->wear();
        create_family("瑶光门",5,"门主");
}

void attempt_apprentice(object ob)
{
        if(!ob->query_temp("allow_7"))
        {
        command("say 没有教主的同意,我不敢擅自做主让你进门!");
        return 0;
        }
        command("smile");
        command("say 既然是教主的意思,那你就进入我瑶光门吧!");
        command("say 圣火教的绝学博大精深,可不是那么好学的!");
        command("say 想入我瑶光门就要唾弃男人!!知道吗??");
        command("recruit "+ob->query("id"));
        ob->set("marks/圣火八天门",1);
        this_player()->set("title","圣火教瑶光门俗家弟子");
        }

void init()
{
        object ob;
        ::init();
        if(interactive(ob =this_player()) && !is_fighting() )
        {
        remove_call_out("greeting");
        call_out("greeting",2,ob);
        add_action("do_nod","nod"); 
        }
}

int do_nod()
{
        object ob=this_player();
        if( ob->query_temp("youkoun") < 6  )
        {
        return 0;            
        }
        else
        {
        ob->set_temp("kill_red",1);
        write("[36m那就拜托你去做了!!事成之后, 我会给你好处的!![0m\n");
        return 1;
        }

}

void greeting(object ob)
{
    if(!ob) return ;

        if( ob->query_temp("擅闯刑房",1) && ob->query("class") == "prayer" )
        {
          if((int)ob->query("combat_exp") > 300000)
          {
          command("tender "+getuid(ob));
          write("[36m只有女人才会了解女人的心事!!!![0m\n");
          write("[36m男人那能体会失去[爱人]的心情呢??[0m\n");
          ob->set_temp("youkoun",1);
          return;
          }
          else
          {
          write("[31m大胆小辈, 竟敢擅自进入本门主的刑房!![0m\n");
          ob->set_temp("youkoun",1);
          kill_ob(ob);
          return;
          }
        }

        if (ob->query_temp("kill_red") >= 2 && !ob->query_temp("kill_eleven") )
        {
        write("\n[36m谢谢你帮了我这个忙!!我就教你[驯兽术]做为奖励吧!![0m\n");
        ob->delete_temp("youkoun");
        ob->set_skill("train-beast",5);
        ob->set("quests/trainbeast", 1);
        ob->add("max_force",50);
        return;
        }

        if ( ob->query("kill_eleven") && ob->query("family/master_name") != "周琇虔")
        {
        write("[36m我记得你的样子, 就是你, 你竟然敢伤害我的燕哥哥!![0m\n");
        kill_ob(ob);
        return;
        }

        if (ob->query_skill("coldpoison", 1))
//      if ((present("five poison", ob)) || (present("dark poison", ob)) || (present("faint poison", ob)) || (present("rose poison", ob)) )
        {
        write("[33m教主有令！！凡是学有毒术之人，杀无敕！！[0m\n");
        kill_ob(ob);
        return;
        }
        if( ob->query("class")=="dancer")
        {
        command("say 教主有令，见到舞者-----格杀勿论！！");
        kill_ob(ob);
        return;
        }
    return;
}

void die()
{

    object ob;
    ob= this_object()->query_temp("last_damage_from");
    if( ob && userp(ob) ) 
    {
    ob->delete_temp("kill_red");
    ob->set_temp("kill_youkoun", 1);
    write("[36m你..............[0m\n");
    }
    ::die() ;
}
