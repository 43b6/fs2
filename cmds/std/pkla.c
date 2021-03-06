// pkla.c by konn
#include <ansi.h>
#include <pkla.h>
inherit F_CLEAN_UP;

int help(object);

int main(object me, string arg) {
        string bet, pk;
        object pker_master, pker_fighter, officer, where;
        int number,a,b;
        a=random(9)+1;

        seteuid( getuid() );
        if( !interactive(me) ) return 1;
        if( !catch(load_object(PK_START_ROOM)) ) {
            if( !(officer = find_living("pkla officer")) &&
                !(officer = find_object("pkla officer"))    )
                return notify_fail("蔡总管休假去了。\n");
        } else return notify_fail("擂台被拆了啦! 快找巫师来。\n");
        if( !arg ) return help(me);
        arg = lower_case(arg);
        where = environment(me);

// 列印出目前接受挑战的玩家
        if( arg == "list" ) {
            officer->doing_list(me);
            return 1;
        }

// 查询玩家的胜败次数
        else if( arg == "winner" ) {
            officer->doing_winner(me);
            return 1;
        }
/*
// pkla.c 多加一个looker的参数, 巫师也可以用, 并加写help
        else if( arg == "looker" ) {
            officer->doing_looker(me);
            return 1;
        }
*/
// 巫师不可有以下的参数
/*
        else if( wizardp(me) )
           return notify_fail("巫师不能够参加擂台赛。\n");
*/

// 鬼魂不能参家pk大赛
        else if( me->is_ghost() ) 
           return notify_fail("鬼魂想作什么?\n");

// 查替身用参数
	else if( arg == "query" ) {
            tell_object(me, sprintf("你目前所拥有的替身共有%d个。\n",
                            me->query("standby")));
            return 1;
        }

// 押赌注
        else if(sscanf(arg,"bet %s %d", pk, number) == 2) {
           officer->doing_bet(me, pk, number);
           return 1;
        }

// 经验值太低不行参加
        else if( me->query("combat_exp") < 20000 )
           return notify_fail("你的经验值不够, 不能参加。\n");

// 潜能太低不能参加
        else if( (me->query("potential") - me->query("learned_points")) < 200 )
           return notify_fail("你的潜能不够, 不能参加pk 大赛。\n");
        else if( where->query("no_transmit",1))
         {//特定不能传送的区域不能参加pkla,免得利用bug.出去!!!!
           return notify_fail("你的声音被神奇的力量档住了,蔡总管听不到。\n");
         }

// 对其他玩家下挑战书
        else if( arg == "me" ) {
           me->set_temp("pkr",a);
           officer->doing_me(me);
           return 1;
        }

// 接受玩家的挑战
        else if( arg == "accept" ) {
           me->set_temp("pkr",a);
           officer->doing_accept(me);
           return 1;
        }

// 放弃叫阵
        else if( arg == "end" ) {
           officer->doing_end(me);
           return 1;
        }
        else return help(me);
}

int help(object me) {
        write(@HELP

指令格式: pkla <me>|<accept>|<end>|<list>|<winner>|<bet>|<query>

pkla me       是用来叫阵, 以寻求玩家来与你pk。若想
              放弃可下pkla end。
pkla accept   用来接受对方的挑战。
pkla end      可用此命令来取消对其他玩家所下的挑战
              , 若挑战被接受, 则此命令无效!
pkla list     列出现在接受挑战的玩家。
pkla winner   可以查询目前每个人的擂台胜败次数。
pkla query    可用来查询你现在所拥有的替身数量。
pkla bet      可以对正在pk的玩家作输赢的赌注, 其中
              种类只有money。
encourage     可以跟蔡总管换替身。

    格式: pkla bet <玩家> <数量> 

    注意: 若赢得一百场的擂台赛, 则可向蔡总管换取奖
	  励, 打encourage 就可换奖, 奖励是「替身”
	  一个

HELP);
        return 1;
}
