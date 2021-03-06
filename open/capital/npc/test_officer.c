// test_officer.c
// rewrite by wade in 1/5/1996 for heart_beat 方式

#include <ansi.h>
#include <capital.h>
inherit NPC;
inherit F_MASTER;
#define PREPARE 300
#define START 330
#define END 350
#define REPORT 400
string do_help();
int     time=290;
mapping test_men_data = ([
        "漂漂玟玟":200,
        "苏东坡": 120,
        "张载": 70,
        "王安石": 90,
        "司马光": 100,
        "程郢": 20,
        "程颢": 80,
        "辛弃疾": 100,
		"傅剑寒": 500,
        "陆九渊": 80,
        "朱熹": 110,
        "王评": 30,
        "张九": 25,
        "陈诗和": 60,
        "林赋": 65,
        "张秀丰": 70,
        "范光": 75,
        "邱育聪": 20,
        "吴擎": 80,
        "王轨": 70,
    "小雪球": 100,
        "公孙圣凡": 90,
        "欧阳离否": 80,
        "慕容常": 15,
        "慕容青": 85,
        "神秘人": 90,
        "儒影真人": 100,
        "王凤": 70,
]);

void create()
{
        seteuid(getuid());
        set_name("严大人",({"test officer","officer","master"}));
        set("long","负责帝国考试的主考官,你可以用 join 来加入考试,\n"+
                   "考上的人也可用 report 来加入官职,注意: 一但加入\n"+
                   "官职,即放弃原门派,千万慎重!!\n");
        set("gender","男性");
        set("title","主考官");
        set("age",56);
        set("time",0);
        set("test_men",([]));
        set("set_test_men",([]));
        set("new_officer",([]));
        set("test_men_id",([]));
        set("chat_chance",15);
        set("class","officer");
        set("officer_class","主考官");
        set("max_officer_power",100);
        set("officer_power",100);
        set("max_kee", 10000);
        set("inquiry", ([
                "帮忙" : (: do_help :),
        ]) );
        setup();
        set_heart_beat(1);
}
int accept_object(object me,object ob)
{
        string letter_id;
        letter_id=ob->query("id");
        if(letter_id=="test_letter")
        {
                destruct(ob);
                command("say 咦!我的信，嗯......多谢你啦");
                command("bow"+me->query("id"));
                me->add("taigan_exp",10);
                me->delete_temp("working");
                switch(random(3)){
                        case 1:
                        me->set("taigan_work",6);
                        break;
                        case 2:
                        me->set("taigan_work",7);
                        break;
                        case 3:
                        me->set("taigan_work",8);
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
        if(work!=5 || me->query_temp("working"))
                return "我现在没什么事需要你帮忙，去看看别人需不需要吧。\n";
        else
        {
        switch(random(3))
        {
                case 1:
                new("/open/capital/room/sroom/obj/soldier_letter")->move(me);
                me->set_temp("working",1);
                message_vision("给了$N一封信。\n",me);
                return "你来的正好，我这里有封信要交给军机处的掌兵使，你帮我跑一趟吧。\n";
                break;
                case 2:
                new("/open/capital/room/sroom/obj/lee_letter")->move(me);
                me->set_temp("working",1);
                message_vision("给了$N一封信。\n",me);
                return "你来的正好，我这里有封信要交给战情室的李大人，你帮我跑一趟吧。\n";
                break;
                case 3:
                new("/open/capital/room/sroom/obj/wu_letter")->move(me);
                me->set_temp("working",1);
                message_vision("给了$N一封信。\n",me);
                return "你来的正好，我这里有封信要交给粮草总兵吴大人，你帮我跑一趟吧。\n";
                break;
        }
        }
}
void init()
{
        add_action("join_test","join");
        add_action("join_guild","report");
}

void do_prepare()
{
        CHANNEL_D->do_channel(this_object(), "mud",
        HIY "\n从京城里传来消息：\n秋试即将开始了.....\n" NOR);
}

int query_test()
{
  write ("time is "+time+".\n");
  return time;
}

void do_start()
{
        mapping dict2;
        string  *name3;
        string  test_men_name;
        int     i;
        set("test_men_id",([]));
        CHANNEL_D->do_channel(this_object(), "mud",
        HIG "\n从京城里传来消息：\n秋试正式开始了....!!!\n" NOR);
        command("say 现在请各位要参加考试的考生开始考试(join)。");
        dict2=query("set_test_men");
        for(i=0;i<3;i++)
        {
                name3=keys(test_men_data);
                test_men_name=name3[random(sizeof(test_men_data))];
                dict2[test_men_name]=test_men_data[test_men_name];
                dict2[test_men_name]=random(random(dict2[test_men_name]));
                dict2[test_men_name]+=10+5*i;
                map_delete(test_men_data,test_men_name);
        }
        dict2=query("test_men_id");
        dict2["1"]=1;dict2["2"]=1;dict2["3"]=1;
        set("test_men_id",dict2);
}

void do_end()
{
          CHANNEL_D->do_channel(this_object(), "mud",
            HIC "\n从京里传来消息：\n秋试结束了.....\n" NOR);
          command("say 好了 ! 考试时间到了。\n");
}

void do_report()
{
        mapping dict1,dict2;
        string *name1,*name2;
        string  msg;
        string test_men_name;
        int i,th1,th2,th3;

        dict1=query("test_men");
        dict2=query("set_test_men");
        name1=keys(dict1);
        name2=keys(dict2);
        if (!name2 || sizeof(name2) == 0) return;
        th1=0;th2=0;th3=0;
        for(i=0;i<sizeof(dict2);i++)
        if(dict2[name2[i]]>dict2[name2[th1]])
                th1=i;
        if(th1==0) th2=1;
        for(i=0;i<sizeof(dict2);i++)
        if(dict2[name2[i]]>dict2[name2[th2]]&&i!=th1)
                th2=i;
        if(th1==0||th2==0) th3++;
        if((th1==1||th2==1)&&th3==1) th3++;
        for(i=0;i<sizeof(dict2);i++)
        if(dict2[name2[i]]>dict2[name2[th3]]&&i!=th1&&i!=th2)
                th3=i;
        msg =
            HIR"从京里传来的消息：\n秋试结果：.....\n状元："+
            name2[th1]+"\n榜眼："+name2[th2]+"\n探花："+name2[th3]+"\n";
        msg += "落榜者：\n";
        for(i=0;i<sizeof(dict1);i++)
          if(name2[th1]!=name1[i]&&name2[th2]!=name1[i]&&name2[th3]!=name1[i])
            msg += name1[i]+"\n";
        msg += HIY "考取者请尽速来报到(report)\n" NOR;
        CHANNEL_D->do_channel(this_object(), "mud", msg);
        dict1=([]);
        dict2=query("test_men_id");
        name1=keys(query("set_test_men"));
        dict1[1]=dict2[name1[th1]];
        dict1[2]=dict2[name1[th2]];
        dict1[3]=dict2[name1[th3]];
        set("new_officer",dict1);
        set("test_men",([]));
        set("set_test_men",([]));
        time = 0;
}

int join_test()
{
        mapping dict;
        object  me=this_player();
        set_heart_beat(1);

        if (time < START || time >= END)
                return notify_fail("秋试尚未开始，请你再等等吧。\n");
        if(me->query_skill("literate",1)==0)
                return notify_fail("文盲也来考试 ?\n");
        if(me->query("family/family_name")=="魔刀门")
                return notify_fail("你所属门派不能当官喔。\n");
if(me->query("family/family_name")=="魔刀莫测")
return notify_fail("你所属门派不能当官喔。\n");
if(me->query("class")=="prayer")
 return notify_fail("你所属门派不能当官喔。\n");
        dict=query("test_men");
        if(dict[me->query("name")]!=0)
                return notify_fail("你不是已经报名考试了吗 ?\n");
        if(me->query("officer_class"))
                return notify_fail("你不当过官了吗，再报名考试就是犯了欺君之罪。\n");
        message_vision(
        CYN "$N说道：我要参加考试 !\n" NOR,me);
        if(me->query("class")=="officer")
        {
                command("say 大人 ! 别跟我开玩笑了。");
                return 1;
        }
        command("nod");
        dict=query("test_men");
        dict[me->query("name")]=random(me->query_skill("literate",1));
        dict=query("set_test_men");
        dict[me->query("name")]=random(me->query_skill("literate",1));
        dict=query("test_men_id");
        dict[me->query("name")]=me->query("id");
        return 1;
}

int join_guild()
{
        mapping dict=query("new_officer");
        object  me=this_player();
        int i;

        if(me->query("class")=="officer")
                return notify_fail("你已经是官了。\n");
        for(i=1;i<=3;i++)
        if(me->query("id")==dict[i])
        {
                message_vision("$N考取了功名，当了个小官。\n",me);
                me->set("class","officer");
                me->set("officer_class","小官");
                me->delete("family");
                me->delete_skill("sha-array");
                me->delete("marks/仙剑七侠");
                return 1;
        }
        command("say 对不起 ! 你并没考上，加油吧，下次再来，别气馁 !!");
        return 1;
}

void heart_beat()
{
  if (time == PREPARE) do_prepare();
  else if (time == START) do_start();
  else if (time == END) do_end();
  else if (time == REPORT) do_report();

  time++;

  ::heart_beat();
}
