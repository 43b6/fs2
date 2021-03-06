// winroom.c bye konn
#include <ansi.h>
inherit ROOM;

void create() {
        set("short","蔡总管的家");
        setup();
}

void init() {
        int i;
        object enemy,me,*user;

        me = this_object();
        if(!me->query_temp("fight")) {
           write("你来这里作什么?\n");
           return ;
        }
        enemy = find_player(me->query_temp("enemy"));
        tell_object(me,HIY"蔡总管说道: 比赛结束!\n"NOR);
        tell_object(enemy,HIY"蔡总管说道: 比赛结束!\n"NOR);
        me->remove_all_killer();
        enemy->remove_all_killer();
        shout(HIC"蔡总管喝道: 比赛胜负已分! "HIW+me->name()+HIC"惨"+
              "遭屠戮..., 胜者"HIW+enemy->name()+"!\n"NOR);
        me->add("potential", -100);
        enemy->add("potential", 100);
        me->pay_money(100000);
// 清除五个变数!
       if(me->query_temp("pker"))
          me->delete_temp("pker");
       else me->delete_temp("pker_master");
       if(enemy->query_temp("pker"))
          enemy->delete_temp("pker");
       else enemy->delete_temp("pker_master");
       me->delete_temp("fight");
       enemy->delete_temp("fight");
       me->delete_temp("pk_room");
       enemy->delete_temp("pk_room");
       me->delete_temp("enemy");
       enemy->delete_temp("enemy");
       me->delete_temp("go_away");
       enemy->delete_temp("go_away");
       me->set("eff_kee", 100);
       me->set("kee", 100);
// 再把因pkla 所中的毒解掉!
       me->apply_condition("dark_poison", 0);
       me->apply_condition("five_poison", 0);
       me->apply_condition("rose_poison", 0);
       me->apply_condition("snake_poison", 0);
       me->apply_condition("burn", 0);
       enemy->apply_condition("dark_poison", 0);
       enemy->apply_condition("five_poison", 0);
       enemy->apply_condition("rose_poison", 0);
       enemy->apply_condition("snake_poison", 0);
       enemy->apply_condition("burn", 0);
// 把player 送走!
       me->move(me->query("startroom"));
       enemy->move(enemy->query("startroom"));
       tell_object(enemy,HIR"蔡总管告诉你: pk 获胜, 得到一些潜能! "+
                         "欢迎下次再来!\n"NOR);
       tell_object(me,HIR"蔡总管告诉你: pk 败阵, 罚你跪一个月算盘! "+
                      "抽你现金10 金, 并扣5% 的潜能, 希望你好好练,"+
                         " 下次再来!\n"NOR);
// 判断有押赌注的玩家输赢
        user = users();
        for(i=0; i<sizeof(user); i++) {
           if(user[i]->query_temp("pkla_pker")) {
              if(user[i]->query_temp("pkla_pker") == me->query("id"))
                 tell_object(user[i],
                             HIR"蔡总管告诉你: 很抱歉! 有赌有赔, 请看开点!\n"NOR
);
              else {
                 if(user[i]->query_temp("pkla_kind") == "money")
                    user[i]->pay_player(1.5*user[i]->query_temp("pkla_number"));
                 else
                    user[i]->add(user[i]->query_temp("pkla_kind"),
                                 1.5*user[i]->query_temp("pkla_number"));
                 tell_object(user[i],
                             HIR"蔡总管告诉你: 恭喜你赌场大胜! 欢迎下次再来!\n"NOR);
                 tell_object(user[i],
                             HIR"蔡总管告诉你: 奉大神命令, 需把所赢部份缴交一半□X来!\n");
              }
              user[i]->delete_temp("pkla_pker");
              user[i]->delete_temp("pkla_kind");
              user[i]->delete_temp("pkla_number");
           }
        }
}
