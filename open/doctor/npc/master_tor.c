// master_tor.c made by adam..
// refix by chan
// add quest thing by nike
#include <ansi.h>
inherit NPC;
inherit F_MASTER;

string ask_vet();
string ask_tor();
string ask_savedie();

void create()
  {
        set("class", "doctor");
        set_name("华陀", ({ "master tor", "master", "tor" }) );
        set("title","银针门第三代掌门人");
        set("nickname",HIC "妙手回春"NOR);
        set("gender", "男性");
        set("doctor/sosman", 1);
        set("max_gin",10000);
        set("max_sen",10000);
        set("max_kee",10000);
        set("age", 55);
        set("attitude", "heroism");
        set("long",
"华陀为一代名医,相传曾为关公刮骨疗伤过,可见其医术的高明.\n"+
"身为银针门掌门的他，以发扬医术为己任,对于患者绝对全力以赴..\n");
        set("str",18);
        set("cps",30);
        set("per",10);
        set("int",40);
        set("kar",16);
        set("bellicosity",1500);
        set("combat_exp",3000000);
        set("force",4000);
        set("max_force", 4000);
        set("force_factor", 10);
        set("score",200000);
        set("inquiry",([
             "百年榕树根" :  "嗯...此百年榕树根，乃采自活余百年之榕树，据说凌云村的
北方有颗高龄老树，你不妨去看看！\n",
             "不传之技"     :  (: ask_tor :),
             "难言之隐"     :  (: ask_savedie :),
             "看诊"     :  (: ask_vet :),
        ]));
        set("functions/gold-needle/level",100);
        set("functions/break-kee/level",100);
        set_skill("godcure",100);
        set_skill("spells",20);
        set_skill("magic",20);
        set_skill("cure",120);
        set_skill("force",80);
        set_skill("move",60);
        set_skill("stabber",120);
        set_skill("parry", 50);
        set_skill("dodge",70);
        set_skill("poison",70);
        set_skill("literate", 80);
        set_skill("seven-steps",100);
        set_skill("yu-needle",100);
        set_skill("shinnoforce",80);
        map_skill("force", "shinnoforce");
        map_skill("dodge", "yu-steps");
        map_skill("stabber","yu-needle");
        map_skill("cure","godcure");
        map_skill("move","seven-steps");
        map_skill("parry", "yu-needle");
        set("chat_chance_combat",65);
        set("chat_msg_combat",({
        (: perform_action("yu-needle.gold-needle") :),
        (: perform_action("yu-needle.break-kee") :),
        }));

        create_family("银针门", 3, "掌门人");
        setup();
        carry_object("/open/doctor/obj/cloth.c")->wear();
        carry_object("/open/doctor/obj/needle9.c")->wield();
        add_money("gold",10);
}
void init()
{
    object me=this_player();
    add_action("do_verify","verify");
    set_heart_beat(1);
    add_action("do_say","say");
    add_action("do_answer","answer");
}
int do_answer(string arg)
{
    object me = this_player();
    object ob = this_object();
    int i = (int)me->query_temp("torask");
    
    if(i)
{
    if(!arg) return notify_fail("你要回答些什么咧？\n");
    if((int)me->query_temp("wrong") >= 3)
    {
        message_vision("$n用力的敲了$N的头一下！怒喝：你回去给我用功几年再来！\n",me, ob);
        return 0;
    }
    if(i == 1)
    {
        if(arg != "铁牛运功散")
        {
        command("say 错！我银针门怎么会出了你这条蠢猪！");
        me->add_temp("wrong",1);
        return 1;
        }
    else
        {
        command("say 答对了！接下来问下一题！");
        me->add_temp("torask",1);
        command("say 请问狄莺感冒了，鹦鹉要她喝什么药(answer)？");
        return 1;
        }
    }
    if(i == 2)
    {
        if(arg != "国安感冒糖浆")
        {
        command("say 错！我银针门怎么会出了你这条蠢猪！");
        me->add_temp("wrong",1);
        }
    else
        {
        command("say 答对了！接下来问下一题！");
        me->add_temp("torask",1);
        command("say 请问什么东西喝了甜甜的，效果快，恢复体力也快，真的好(answer)？");
        return 1;
        }
    }
    if(i == 3)
    {
        if(arg != "三支雨伞标友露安")
        {
        command("say 错！我银针门怎么会出了你这条蠢猪！");
        me->add_temp("wrong",1);
        }
    else
        {
        command("spank "+me->query("id"));
        command("say 答对了！很好很好，你已经具有看诊师的资格，可以替人看诊(vet)了！");
        me->set("doctor/vet",1);
        me->delete_temp("torask");
        me->delete_temp("wrong");
        return 1;
        }
    }
  }
}
int do_say(string arg)
{
    object me=this_player();
    object ob=new("/open/doctor/obj/b-mark");

    if( arg == "是" || arg =="愿意")
{
    if(me->query("doctor/book_select")==1)
{
        write("既然你如此坚持...那这面「入阁令”就交给你了...\n"NOR);
        ob->move(me);
        command("addoil "+me->query("id"));
        me->delete("doctor/book_select");
        me->set("doctor/start_quest", 1);
        me->set("doctor/get_mark", 1);
        return 1;
    }
  }
}
string ask_tor()
{
    object me;
    me=this_player();

    if(me->query("doctor/tell_woman")==1)
{
        command("er "+me->query("id"));
        me->delete("doctor/tell_woman");
        me->set("doctor/ask_tor",1);
        return "";
  }
}
string ask_vet()
{
    object me = this_player();

    if(me->query("doctor/vet") == 1)
    {
        return "咦？你不是已经是个领有牌照了的看诊师了吗？";
    }
    if(!me->query_skill("cure") >= 120)
    {
        command("say 你的医术这么低，怎么替人看诊ㄚ？");
        return "再回去去多学几年吧！";
    }
    if((int)me->query_temp("wrong") >= 3)
    {
        command("say 你怎么还在这啊？");
        return "怀不快快给我滚回去！";
    }
        command("say 好！我要问你几个问题，来确定你是否有资格担任看诊师的职位！");
        command("say 第一题！请问阿荣在军中都吃他阿母寄去的什么东西来强身(answer)？");
        me->add_temp("torask",1);
        return "";
}
string ask_savedie()
{
    object me;
    me=this_player();

    if(me->query("doctor/ask_tor")==1)
{
        command("hmm "+me->query("id"));
        command("say 这...唉～好吧！我就把实情告诉你好了...");
        command("say 这不传之技相传是先祖华陀在仙逝之前传授给后代的‘圣手回春术’！");
        command("say 但是...此术早就失传以久了，虽然好像有位本门前辈曾经习得此招...");
        command("say 不过那位前辈据说是在藏经阁修炼之后便音讯全无...");
        command("say 而且距今也已经过了十多年了，我想...找着他的机率可说是微乎其微...");
        command("say 不过事关人命，不知道你是否愿意去找找看呢？");
        me->delete("doctor/ask_tor");
        me->set("doctor/book_select",1);
        return "";
  }
}
int accept_object(object me, object ob)
{
    if(me->query_temp("sos_letter") && ob->query("id")=="oldman letter")
{
        write("你战战兢兢的把信交给了华陀...\n"NOR);
        command("mad");
        command("slap "+me->query("id"));
        command("say 你真是丢够了吾的脸了！");
        command("say 人家被独角虎咬伤了，你都不会医，枉你算是我的得意弟子！");
        command("snort");
        command("say 算了！救人要紧，你现在先给我把独角虎的角找来！");
        command("say ......还看啥看？快去ㄚ！！");
        me->set_temp("find_cornu",1);
        return 1;
}
    if(me->query_temp("get_cornu")==1 && ob->query("id")=="cornu")
{
        write("你把独角虎的角交给了华陀...\n"NOR);
        me->delete_temp("get_cornu");
        me->set_temp("find_root",1);
        destruct(ob);
        command("nod");
        command("say 不错！是真品...那接下来给吾我去找百年榕树根！");
        return 1;
}
    if(me->query_temp("get_root")==1 && ob->query("id")=="root" && !me->query_temp("give_cornu"))
{
        write("你把百年榕树根交给了华陀...\n"NOR);
        destruct(ob);
        command("spank"+me->query("id"));
        command("say 做得好...接下来给你将功抵罪的机会...");
        write("华陀把两样药材给制作成一颗药丸，并交给了你...\n"NOR);
        command("say 把这颗药喂(feed)给那老人家吃就没事了...");
        me->delete_temp("give_cornu");
        me->set_temp("get_pill",1);
        ob=new("/open/doctor/obj/tc-pill");
        ob->move(me);
        return 1;
}
    if(me->query_temp("sec_letter") && ob->query("id")=="oldman letter2")
{
        write("你把老头的第二封信交给了华陀...\n"NOR);
        command("haha "+me->query("id"));
        command("pat "+me->query("id"));
        command("say 你果然是我善良又老实的好弟子...");
        command("say 其实那个老头是我的一位老友，我故意要他试探你的！");
        command("say 没想到你的度量竟是如此宽大，将来肯定是个好医生！");
        command("hoho");
        command("say 怎么样？没吓着你吧？");
        command("say 既然你如此的善良老实，吾想也应该把吾银针门的奥义传授给你了！");
        tell_object(users(),HIW"
华陀笑道："HIY"哇～哈哈哈！！\n
          "HIG""+this_player()->name()+""HIY"吾徒！\n
          吾今天就把咱"HIW"银针门"HIY"的"HIR"七奇密式"HIY"传授予你！！！！\n\n"NOR);
        me->set("doctor/sosman",1);
        me->delete_temp("sec_letter");
        me->set("title",HBBLU+HIW"ψ"HIY"七奇"HIR"秘针"HIW"ψ"HIG"传人"NOR);
        return 1;
  }
}
void attempt_apprentice(object ob)
{
        if(this_player()->query("class")!="doctor")
        {
                command("sigh");
                command("say 你不是医者，我不能收你。\n");
                return;
        }
      if((int)ob->query("str") >19 )
        {
          command("sigh");
          command("say 你的膂力过大，拿起针来颤颤抖抖..\n敝人观之"+ RANK_D->query_respect(ob) + "的资质似乎不宜！\n");
return;
        }

        command("hmm");
        command("pat" + ob->query("id"));
        command("recruit "+ob->query("id"));
        message("system",HIR"
"HIW"银针门"HIC"内传出一阵震耳的长啸声：\n
          "HIR"※"HIW"※ "HIY"枫~落~飒~飒~叹~已~老"HIW" ※"HIR"※ \n
                     ※"HIW"※ "HIY"林~叶~飘~飘~尘~世~了"HIW" ※"HIR"※ \n
       "HIW"唉～吾今实老，但"HIC""+this_player()->name()+""HIW"既投入吾门之下，吾定好好栽培他！\n\n"NOR,users());
}

void heart_beat()
{
 object me,boy;
 int value;
 me=this_object();
  if(me->query_condition("lyssa"))
  {
    me->clear_condition("lyssa");
    message_vision(HIY"只见$N双眼忽然湛放金光,大喝一声,逼出了身上的狂犬病毒!!!\n",me);
  }
 boy=present("medicine boy",me);
 if(boy)
  if(boy->query_condition("lyssa"))
  {
    boy->clear_condition("lyssa");
    message_vision(HIG"只见$N一掌拍在$n的背后,$n开始浑身冒汗,而$n身上的狂犬病毒似乎也跟着汗水排去!!\n",me,boy);
   }
 value=random(10);
 if( is_fighting() )
 if( value < 4){
 if( query("kee") < query("eff_kee") ) {
   message_vision(HIW"\n华陀见情势不妙,赶紧服下人灵丹,脸色顿时好多了\n"NOR,me);
    me->receive_heal("kee",500);
    me->receive_heal("gin",200);
    me->receive_heal("sen",200);
    me->delete_busy();
    me->clear_condition();
    me->do_command("perform stabber.gold-needle");
  }
 } else if( value > 7)
   command("perform yu-needle.gold-needle");
   else if( value = 6)
   command("perform yu-needle.break-kee");
    ::heart_beat();
}

int do_verify(string arg)
{
 object me,ob;
 me=this_player();
 ob=new("/data/autoload/doctor/needle1");
 if( arg!="needle")
{
    write("你要申请什么\n");
    return 1;
   }
if(me->query("family/family_name")!="银针门")
  {
    write("只有银针门徒才会有信物\n");
    return 1;
  }

 if( present("chhu needle",me) )
  {
    write("你已经申请过了\n");
    return 1;
   }
   else
    {
     write("华陀说：这是银针门的信物 ,望你好好保存 ,切勿遗失了\n");
     ob->move(me);
     return 1;
    }
}
void unconcious()
{
        object winner = query_temp("last_damage_from");
        if(!winner){
          :: unconcious();
          return ;
        }
tell_object(users(),HIW"
银针门"HIR"内突然传出凄厉的惨叫声...\n
          "HIR"门主"HIW"华陀"HIY"被"+HIG+winner->query("name")+HIR+"击中要害，一时口喷鲜血，痛苦不已...\n
                  "HIR"霎时一道红光闪过"HIW"枫林港"HIR"的天空...难道竟是天命注定如此...？\n
\n"NOR);
        :: unconcious();
}

void die()                                                                 
{    
        object winner = query_temp("last_damage_from");
        int j;
        if(!winner)
        {
        ::die();
        return ;
        }
        if ( winner->query_temp("bless")==1 )
        {
        j=random(6000);
          if( j==7 || j==77 || j== 777 || j==1111 || j==55 || j==555 || j==1000 || j==4000 || j==3333 || j==5555 )
          {      
          new("/open/sky/obj2/charity_stone")->move(environment(winner));
          message_vision(HIM"\n从华陀的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/charity_stone",sprintf("%s(%s) 让华陀掉下了仁心石于 %s\n",
          winner->name(1),winner->query("id"),ctime(time())));
          }
        }else{
        j=random(12000);
          if( j==5 || j==15 || j== 150 || j==1500 || j==10 || j==100 || j==1000 || j==4000 || j==6666 || j==7777 ) 
          {      
          new("/open/sky/obj2/charity_stone")->move(environment(winner));
          message_vision(HIM"\n从华陀的身上掉下了一件奇怪的东西!!\n"NOR,winner);
          write_file("/log/sky/charity_stone",sprintf("%s(%s) 让华陀掉下了仁心石于 %s\n",
          winner->name(1),winner->query("id"),ctime(time())));
          }
        }
        tell_object(users(),HIW"
银针门"HIR"内传出一声怨恨的叹息声～～～\n
     "HIW"「想我"HIG"华陀"HIW"行医数十年，救人无数，如今竟命丧-"+HIR+winner->query("name")+HIW+"-之手...” \n
             "HIW"一颗"HIY"*流星*"NOR"划过"HIC"银针门"HIW"的上空～～～ \n
                         "HIR"一代神医"HIG"「华陀”"HIW"就此殒落....\n\n"NOR);
        ::die();                                                           
}
