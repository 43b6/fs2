// officer1.c by konn
// pkla 从三分钟改成一分钟

#include <ansi.h>
inherit NPC;

object pker_master, pker_fighter;

void create()
{
        set("title", "比武擂台主持人");
        set_name("蔡总管", ({"pkla officer", "officer"}));
        set("long", "\n他是比武擂台的主持人。\n");

        set("race", "人类");
        set("gender", "男性");
        set("attitude", "friendly");

        set_skill("unarmed", 100);
        set_skill("dodge", 100);
        set_skill("move", 100);
        set_skill("parry", 100);
        set("no_kill", 1);

        pker_master=0;
        pker_fighter=0;
        setup();
 }

void init()
{
        add_action("doing_encourage_pkla", "encourage-pkla");
		add_action("doing_encourage_pot", "encourage-pot");
}

int doing_encourage_pkla()
{
        object me = this_player();

          if( me->query("pk_convert") >= (me->query("pk_win")/100) ) {
            tell_object(me, HIY"蔡总管说道: 你的获胜次数还不到奖励的标准。\n"NOR
);
            return 1;
        }
                if( !me->query("max_standby"))
                {
                 me->set("max_standby",50);
        }
//     if(me->query("standby_dead_time"))
//     if(me->query("standby_dead_time")+86400 > time())
//       return notify_fail("你的替身才刚死不久, 我不能发替身给你, 你晚点再来吧!!\n");
        if(me->query("standby"))
          return notify_fail("你不是已经有一个了???\n");

        if(me->query("t_standby")<me->query("max_standby"))
        {
        me->add("t_standby",1);
        me->add("pk_convert", 1);
        me->add("standby", 1);
        tell_object(me, HIY"蔡总管说道: 恭喜你获得替身一个, 在紧要关头他会"+
                        "代替你到地府走一趟的。\n"NOR);
                log_file("pkstdby", sprintf("%s 用pkla换到一个替身 on %s\n"
        ,me->query("id"), ctime(time()) ));
        }
        else{
        tell_object(me, HIY"蔡总管说道: 你曾经拥有的替身总数已达上限，无法再增加。\n"NOR);}

        return 1;
}
int doing_encourage_pot()
{
        object me = this_player();

          if( (int)me->query("potential") - (int)me->query("learned_points") <100000 ) {
            tell_object(me, HIY"蔡总管说道: 你的潜能值不够换替身。\n"NOR
);
            return 1;
        }
                if( !me->query("max_standby"))
                {
                 me->set("max_standby",50);
        }
//     if(me->query("standby_dead_time"))
//     if(me->query("standby_dead_time")+86400 > time())
//     return notify_fail("你的替身才刚死不久, 我不能发替身给你, 你晚点再来吧!!\n");
        if(me->query("standby"))
          return notify_fail("你不是已经有一个了???\n");

        if(me->query("t_standby")<me->query("max_standby"))
        {
        me->add("t_standby",1);
        me->add("potential",-100000);
        me->add("standby", 1);
        tell_object(me, HIY"蔡总管说道: 恭喜你获得替身一个, 在紧要关头他会"+
                        "代替你到地府走一趟的。\n"NOR);
                log_file("potstdby", sprintf("%s 用pot换到一个替身 on %s\n"
        ,me->query("id"), ctime(time()) ));
        }
        else{
        tell_object(me, HIY"蔡总管说道: 你曾经拥有的替身总数已达上限，无法再增加。\n"NOR);}

        return 1;
}

int set_master(object me)
{
        pker_master = me;
        return 1;
}

int set_fighter(object me)
{
        pker_fighter = me;
        return 1;
}

int delete_master()
{
        pker_master = 0;
        return 1;
}

int delete_fighter()
{
        pker_fighter = 0;
        return 1;
}

int pk_ing()
{
        shout(HIC"蔡总管说道: 比赛时间到, 停止押注。\n"NOR);
        shout(HIC"蔡总管说道: 请两位高手到第一武道馆开始比赛。\n"NOR);
        shout(HIC"蔡总管说道: 比赛时间为二十分钟。\n"NOR);
        pker_master->set_temp("pk_fight", 1);
        pker_fighter->set_temp("pk_fight", 1);
        pker_master->set_temp("pk_room", environment(pker_master));
        pker_fighter->set_temp("pk_room", environment(pker_fighter));
pker_master->move("/open/gblade/room/pkroom/pkr"+pker_master->query_temp("pkr")+".c");
pker_fighter->move("/open/gblade/room/pkroom/pkr"+pker_fighter->query_temp("pkr")+".c");
        this_object()->set_temp("pking_time", 1);
        return 1;
}

int doing_list(object me)
{
        set_heart_beat(1);
        if( !pker_master ) {
            tell_object(me, "目前擂台上没有任何人。\n");
            return 1;
        }
        printf("\n擂台老大:\n");
        if( pker_fighter ) {
            tell_object(me, sprintf("    \n%s(%s) VS %s(%s)\n\n",
                            pker_master->name(), pker_master->query("id"),
                            pker_fighter->name(), pker_fighter->query("id")));
        }
        else tell_object(me, sprintf("    \n%s(%s) 接受各位的挑战。\n\n",
                             pker_master->name(), pker_master->query("id")));
        return 1;
}

int doing_me(object me)
{
if(me->query("potential")-(me->query("learned_points")) < 210)
return notify_fail("你的潜能不够！\n");
        if( me == pker_master ) {
            tell_object(me, "你已经下挑战书了。\n");
            return 1;
        }
        if( me == pker_fighter ) {
            tell_object(me, "你已经接受挑战了。\n");
            return 1;
        }
        if( pker_master ) {
            tell_object(me, "已经有人捷足先登了, 你考虑考虑跟他过招吧。\n");
            return 1;
        }
        if( pker_master && pker_fighter ) {
            tell_object(me, "比赛已经开始了, 等下一场吧。\n");
            return 1;
        }
        if( !me->pay_money(30000) ) {
            tell_object(me, "你没有足够的钱付报名费, sorry 啦! ^_^\n");
            return 1;
        }

        tell_object(me, "你付了三两黄金的报名费给蔡总管。\n");
        set_master(me);
        shout(HIC"\n蔡总管喝道: "HIW+me->name()+HIC"愿意接受擂台挑战。"+
              "请各大武林好手前来切磋武艺。\n"NOR);
        tell_object(me, HIC"\n蔡总管喝道: "HIW+me->name()+HIC"愿意接受擂"+
                        "台挑战。请各大武林好手前来切磋武艺。\n"NOR);
        this_object()->set_temp("wait_pk", 1);
        return 1;
}

int doing_accept(object me)
{
if(me->query("potential")-(me->query("learned_points")) < 210)
return notify_fail("你潜能不够！\n");
        if( me == pker_master ) {
            tell_object(me, "你已经下挑战书, 不能再接受别人的挑战。\n");
            return 1;
        }
        if( me == pker_fighter ) {
            tell_object(me, "你已经接受别人的挑战。\n");
            return 1;
        }
        if( pker_master && pker_fighter ) {
            tell_object(me, "擂台已经开打了, 请等待下一场。\n");
            return 1;
        }
        if( !pker_master ) {
            tell_object(me, "目前擂台没有人, 你愿意挑战别人吗?\n");
            return 1;
        }
// 之前 2 倍太小改 4 倍 by swy
if(!wizardp(me) && !wizardp(pker_master))
if(4*me->query("combat_exp") < pker_master->query("combat_exp") ||
me->query("combat_exp") > 4*pker_master->query("combat_exp")) {
               tell_object(me, "你的经验值和对手相差太多。\n");
               return 1;
        }
        if( !me->pay_money(30000) ) {
            tell_object(me, "你没有足够的钱付报名费, sorry 啦! ^_^\n");
            return 1;
        }

        tell_object(me, "你付了三两黄金的报名费给蔡总管。\n");
        set_fighter(me);
        pker_master->set("break_away" ,1);
        pker_fighter->set("break_away" ,1);
        shout(HIC"蔡总管喝道: "HIW+pker_master->name()+HIC"与"HIW+
              me->name()+HIC"将在一分钟后开始比赛。\n"NOR);
        tell_object(me, HIC"蔡总管喝道: "HIW+pker_master->name()+HIC+
                        "与"HIW+me->name()+
                        HIC"将在一分钟后开始比赛。\n"NOR);
        shout(HIC"蔡总管说道: 要押赌注的请尽快, 逾时恕不受理。\n"NOR);
        tell_object(me, HIC"蔡总管说道: 要押赌注的请尽快, 逾时恕不受理。\n"NOR);
        this_object()->set_temp("pking", 1);
        this_object()->delete_temp("wait_pk");
        this_object()->set_temp("pkla_time", 1);
        return 1;
}

int doing_end(object me)
{
        if( me != pker_master && me != pker_fighter ) {
            tell_object(me, "你并没有参加擂台赛。\n");
            return 1;
        }
        if( me == pker_fighter ) {
            tell_object(me, "你已经接受别人的挑战无法彻回。\n");
            return 1;
        }
        if( me == pker_master && pker_fighter ) {
            tell_object(me ,"已经有人接受你的挑战了, 打败他再说吧。\n");
            return 1;
        }

        delete_master();
        shout(HIC"\n蔡总管喝道: "HIW+me->name()+HIC"退出比赛。"+
              "想称霸为王者请速洽于我。\n"NOR);
        tell_object(me, HIC"\n蔡总管喝道: "HIW+me->name()+HIC"退出比赛。"+
                        "想称霸为王者请速洽于我。\n"NOR);
        this_object()->delete_temp("wait_pk");
        return 1;
}

int doing_winner(object me)
{
        object *user;
        string desc = "";
        int i, sam = 0;

        user = users();
        desc += "        第      一      武      道      会      胜      负      表\n\n";
        for(i=0; i<sizeof(user); i++) {
           if( !wizardp(user[i]) ) {
               desc += sprintf("  %10s%12s  胜:%-3d负:%-3d",
                               user[i]->name(), "("+user[i]->query("id")+")",
                               user[i]->query("pk_win"),
                               user[i]->query("pk_lose"));
               if( sam % 2 == 1 ) desc += "\n";
               sam += 1;
           }
        }
        desc += "\n";
        me->start_more(desc);
        return 1;
}

int doing_bet(object me, string pk, int number)
{
        if( me->query_skill("gamble", 1) < 50 ) {
            tell_object(me, "赌术需五十级才可押注, 请再多多加油。\n");
            return 1;
        }
        if( me == pker_master || me == pker_fighter ) {
            tell_object(me, "你在打擂台想押什么注?\n");
            return 1;
        }
        if( !this_object()->query_temp("pkla_time") ) {
            tell_object(me, "押注时间已过, 下次请把握时间。\n");
            return 1;
        }
        if( me->query_temp("bet_pker") ) {
            tell_object(me, "你已经押过赌注了, 请耐心等待比赛结果。\n");
            return 1;
        }
        if( find_player(pk) != pker_master &&
            find_player(pk) != pker_fighter  ) {
            tell_object(me, "这位玩家并没有打擂台赛。\n");
            return 1;
        }

            if( number > 300000 || number < 0 ) {
                tell_object(me, "你押的赌注不合规定, 最多三十金。\n");
                return 1;
            }
            if( !me->pay_money(number) ) {
                tell_object(me, "赌本不够还敢来赌?\n");
                return 1;
            }
            me->set_temp("bet_pker", pk);
            me->set_temp("bet_number", number);
            tell_object(me, "你付给蔡总管"+chinese_number(number)+"分钱。\n");
        return 1;
}

int full_all(object me)
{
        int gin, kee, sen;

        gin = me->query("max_gin");
        kee = me->query("max_kee");
        sen = me->query("max_sen");
        me->set("eff_gin", gin);
        me->set("eff_kee", kee);
        me->set("eff_sen", sen);
        me->set("gin", gin);
        me->set("kee", kee);
        me->set("sen", sen);
        return 1;
}

int pk_winner(object win)
{
        full_all(win);
        tell_object(win, HIY"蔡总管说道: 比赛结束!\n"NOR);
        win->remove_all_killer();
        win->clear_condition();
        win->move(win->query_temp("pk_room"));
        win->delete_temp("pk_room");
        win->delete_temp("over");
        win->delete_temp("hand-all");
        win->delete_temp("eyes-all");
if(pker_master->query("potential")-(pker_master->query("learned_points"))>210
&&pker_fighter->query("potential")-(pker_fighter->query("learned_points"))>210)
{
        win->add("potential", 100);
        win->add("pk_win", 1);
}
        win->delete("break_away");
        win->delete_temp("pk_fight");
        return 1;
}

int pk_loser(object lose)
{
        full_all(lose);
        tell_object(lose, HIY"蔡总管说道: 比赛结束!\n"NOR);
        lose->remove_all_killer();
        lose->clear_condition();
        lose->delete_temp("over");
        lose->delete_temp("hand-all");
        lose->delete_temp("eyes-all");
        lose->delete_busy();
        lose->move("/open/wiz/courthouse");
        lose->delete_temp("pk_room");
        lose->add("potential", -130);
        lose->delete("break_away");
        lose->delete_temp("pk_fight");
        lose->add("pk_lose", 1);
if(lose->query("potential")-(lose->query("learned_points")) < 0)
{
lose->set("potential",0);
lose->set("learned_points",0);
lose->add("pkla使pot至负记录",1);
}
        return 1;
}

int winner(object win, object lose)
{
        object *user;
        int i;

        this_object()->delete_temp("pking");
        this_object()->delete_temp("pkla_time");
        this_object()->delete_temp("pking_time");
        this_object()->delete_temp("wait_pk");
        if( !win && !lose ) {
            if( pker_master && pker_fighter ) {
                shout(HIC"\n蔡总管喝道: 双方超过比赛时间未分出胜负, 有套招"+
                      "嫌疑, 皆罚潜能一百三十点, 比赛结束。\n");
                pk_loser(pker_master);
                tell_object(pker_master,
                     HIR"蔡总管告诉你: 很抱歉, 你打得太久了, 必须受点惩罚。\n"NOR);
                pk_loser(pker_fighter);
                tell_object(pker_fighter,
                     HIR"蔡总管告诉你: 很抱歉, 你打得太久了, 必须受点惩罚。\n"NOR);
            }
            else shout(HIC"\n蔡总管喝道: 双方皆弃权, 因此比赛无胜负, 请下一组人马准备。\n"NOR);
        }
        else if( !lose ) {
            shout(HIC"蔡总管喝道: 比赛胜负已分! "HIW+win->name()+HIC"获得最后的胜利!\n"NOR);
            pk_winner(win);
            tell_object(win, HIR"蔡总管告诉你: pk获胜, 得到一百点潜能。"+
                                "欢迎下次再来!\n"NOR);
        }
        else {
            shout(HIC"蔡总管喝道: 比赛胜负已分! "HIW+lose->name()+HIC"惨"+
                  "遭屠戮..., 胜者"HIW+win->name()+"!\n"NOR);
            pk_winner(win);
            tell_object(win, HIR"蔡总管告诉你: pk 获胜, 得到一百点潜能。"+
                                "欢迎下次再来!\n"NOR);
            pk_loser(lose);
            tell_object(lose, HIR"蔡总管告诉你: pk 败阵, 罚你跪一个月主机板! "+
                                 "扣一百三十点潜能, 希望你继续努力, 下次再来。\n"NOR);
        }
        delete_master();
        delete_fighter();
// 判断有押赌注的玩家输赢
        user = users();
        for(i=0; i<sizeof(user); i++) {
           if( user[i] && user[i]->query_temp("bet_pker") ) {
               if(win) {
                  if(user[i]->query_temp("bet_pker") == win->query("id")) {
                     user[i]->pay_player((int) 2 *
                            user[i]->query_temp("bet_number"));
                     tell_object(user[i],
                          NOR"蔡总管背着大袋子走了过来。\n"+
                          HIR"蔡总管告诉你: 恭喜你赌场大胜! 欢迎下次再来。\n"+
                          NOR"蔡总管从袋子里拿出一样东西往你身上一丢。\n"+
                          NOR"蔡总管背着大袋子往第一武道馆走了过去。\n"NOR);
                  }
                  else tell_object(user[i],
                            HIR"蔡总管告诉你: 很抱歉! 有赌有赔, 请看开点。\n"+
                            NOR"只听到从第一武道馆传来一阵狂笑: "+
                            "赚翻了! 赚翻了! 哇哈哈哈哈～～\n"NOR);
               }
               else tell_object(user[i],
                         HIR"蔡总管告诉你: 很抱歉! 双方皆弃权了, 因此分不出"+
                         "输赢, 赌注也没法还给你啰!\n"+
                         HIY"蔡总管无奈的耸了耸肩。\n"NOR);
               user[i]->delete_temp("bet_pker");
               user[i]->delete_temp("bet_number");
           }
        }
        if( win && !userp(win) ) destruct(win);
        if( lose && !userp(lose) ) destruct(lose);
        return 1;
}

string query_player()
{
        if( query("str") )
            return query("str");
        return "";
}

// damage.c 里直接呼叫这个函式
int pk_lose(object me)
{
        if( me == pker_master )
            winner(pker_fighter, pker_master);
        else winner(pker_master, pker_fighter);
        return 1;
}

int break_away(object me, string arg)
{
        int i;

        full_all(me);
        me->add("potential", -200);
        me->delete("break_away");
        me->delete_temp("pk_fight");
        me->clear_condition();
        me->apply_condition("dark_poison", 0);
        me->apply_condition("five_poison", 0);
        me->apply_condition("rose_poison", 0);
        me->apply_condition("snake_poison", 0);
        me->apply_condition("burn", 0);
        me->add("pk_lose", 1);
        me->move(me->query("startroom"));
        tell_object(me, HIR"蔡总管告诉你: pk 络跑, 须罚双倍, 扣两百"+
                          "点潜能, 希望你继续努力, 下次再来!\n"NOR);
        if( strlen(arg) ) {
            for(i=0; i<strlen(arg); i++) {
                tell_object(me, arg[i]);
            }
        }
        add("str", me->query("id")+" "+arg+"\n");
        return 1;
}

void heart_beat()
{
        object *user;
        int i, gin, kee, sen;

        set_heart_beat(1);

// 要有玩家pk 时才做以下这些
        if( query_temp("pking") ) {
            if( !pker_master )
                winner(pker_fighter,0);
            else if( pker_master->query_temp("netdead") )
                winner(pker_fighter, pker_master);
            else if( !pker_fighter )
                winner(pker_master, 0);
            else if( pker_fighter->query_temp("netdead") )
                winner(pker_master, pker_fighter);
            else if( !pker_fighter && !pker_master )
                winner(0, 0);
            else if( pker_master->query_temp("netdead") &&
                     pker_fighter->query_temp("netdead")  )
                winner(0, 0);
            if( environment(pker_master) == environment(pker_fighter) &&
                (!pker_master->is_fighting() || !pker_fighter->is_fighting()) &&
                pker_master->query_temp("pk_fight") &&
                pker_fighter->query_temp("pk_fight")                         ) {
                pker_master->kill_ob(pker_fighter);
                pker_fighter->kill_ob(pker_master);
            }
            if( query_temp("pkla_time") ) {
                if( query_temp("pkla_time") == 24 ) { //改成一分钟
                    delete_temp("pkla_time");
                    pk_ing();
                }
                else {
                   if( query_temp("pkla_time") == 22 ) //一分钟的部份
                       shout(HIC"蔡总管喝道: 距比赛时间还有十秒, 请"+
                                pker_master->name()+"与"+pker_fighter->name()+
                                "两位预备。\n"NOR);
                   add_temp("pkla_time", 1);
                }
            }
        }
        else{
          if(!query_temp("wait_pk")){
            if(pker_master) delete_master();
            if(pker_fighter) delete_fighter();
          }
        }



// pk 超过20 分钟, 则双方等于弃权, 照样惩罚
        if( query_temp("pking_time") ) {
            if( query_temp("pking_time") == 480 )
                winner(0, 0);
            else add_temp("pking_time", 1);
        }
}
