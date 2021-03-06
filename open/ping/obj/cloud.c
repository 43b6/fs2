// made by ccat
// 二版...加入 group move...     ccat....9_12.96
// 由于 chun 抗议,改成只传送 officer 所带的兵与 follow 的player.
//                                               ccat....9_15,96
// 加强一些逻辑上的判断, 以免出现太多的 error 并改写一下型式
//                                              Arthur (10/9/1998)

#include <ansi.h>

inherit ITEM;
inherit F_GUILDCMDS;

void create()
{
        set_name("唤云扇", ({ "cloud fan","fan" }) );
        set_weight(5000);
        if( clonep() )
                set_default_object(__FILE__);
        else {
                set("unit", "把");
                set("long",@LONG
这是一把用来招换飞云的扇子,专门提供给有钱人使用, 只要你钱庄存
款够,你就可以随意飞翔在本大陆.(费用: 飞翔一次 500 coin,直接从钱庄扣.)

      使用格式: waveto <number>    ex: waveto 1,waveto 2
      现今提供的各传点: 1. 京城市中   2. 蜀中市中   3. 平南市中
                        4. 中央驿站   5. 陵云村     6. 您的游戏进入点
                        7. <NONE>     8. <NONE>     9. <NONE>
                       10. 枫林港

      设定格式: fanset <number>   ex: set 7,set 8 (只限 7,8,9)
      会自动把你所在位置存下来,成为新的传送点.

      查询格式: fanshow           ex: fanshow
      可以查询你的传送点所在.

      群体移动: gmove <on|off>  ex: gmove on,gmove off
      群体传送模式开或关,若群体传送模式 开,则 waveto 将传送你所带的兵
          ........<gmove限官员、刀客跟帮派的高层使用>............
LONG
               );
                set("value", 1000);
        }
}

void init()
{
        if( environment() == this_player() ){
                add_action("do_fanset", "fanset");
                add_action("do_fanshow", "fanshow");
                add_action("do_waveto", "waveto");
                add_action("do_gmove", "gmove");
        }
}

int do_gmove(string arg)
{
        object me = this_player();
        int value=0; //加入帮派的高阶级的人使用rank
        if(me->query("clan"))
          if(me->query("clan/rank") < 4)
            value=1;
        if( me->query("class") == "officer"
          ||me->query("class") == "blademan"||value)
        {
                switch(arg)
                {
                        case "on":
                                me->set_temp("gmove",1);
                                write("群体移动模式 开起(on)!!!\n");
                                return 1;
                        case "off":
                                me->delete_temp("gmove");
                                write("群体移动模式 关闭(off)!!!\n");
                                return 1;
                        default:
                                return notify_fail("群体移动: gmove <on|off>\n");
                }
        }
        return notify_fail("此命令限 官员(officer)和刀客(blademan)帮派高层(rank 3以上)使用.\n");
}

int do_fanset(string arg)
{
        object where, me = this_player();

        if(!me->query_temp("can_fanset")) return 0;
        if( (where = environment(me))->query("no_transmit") )
                return notify_fail("一阵强大的磁场从地底传出,干扰了你的设定,\n似乎这里的大神不愿此地可以传送...\n");

        switch( arg ) {
                case "7" :
                case "8" :
                case "9" :
                        me->set_temp( "fan/" + arg, file_name(where) );
                        me->set_temp( "fan_s/" + arg, where->query("short") );
                        write("你设定这里为你的新传送点.\n");
                        return 1;
                default :
                        return notify_fail("你只能设定 7、8、9 。\n");
        }
}

int do_fanshow(string arg)
{
        object me = this_player();

        write(  "传送点 7 是" + me->query_temp( "fan_s/7" ) +
              "\n传送点 8 是" + me->query_temp( "fan_s/8" ) +
              "\n传送点 9 是" + me->query_temp( "fan_s/9" ) + "\n" );
        return 1;
}

int do_waveto(string arg)
{
        string room="";
        object *count, me = this_player();
        int i;

        if( me->query_temp("unconcious") )
                return 0;
        if( me->is_fighting() )
                return notify_fail("战斗中无法使用唤云扇。\n");
	if( CLAN_D->what_clan_area(me) != "NULL" )
		return notify_fail( "无法在帮派区域内使用。\n" );
        if( me->query_temp("不准走"))
                return notify_fail("突然一阵能量从地底发出,击散了你招来的云朵,\n似乎这里的大神不愿此地可以传送...\n");
        if( me->query_temp("抢劫中") )
                return notify_fail("抢劫中无法使用唤云扇。\n");
        if( environment(me)->query("no_transmit") )
                return notify_fail("突然一阵能量从地底发出,击散了你招来的云朵,\n似乎这里的大神不愿此地可以传送...\n");
        if( me->query("bank/coin") < 500 )
                return notify_fail(" 唤云扇说: 你的存款不足,无法支付费用.\n");
       if( me->query_temp("invis"))
                return notify_fail(" 你在藏匿中，唤云扇找不到你。。。\n");


        switch(arg)
        {
                case "1":
                        room="/open/capital/room/r70";         break;
                case "2":
                        room="/open/gsword/room/su3";          break;
                case "3":
                        room="/open/ping/room/road4";          break;
                case "4":
                        room="/open/trans/room/room4";          break;
                case "5":
                        room="/open/start/room/s5";            break;
                case "10":
                        room="/open/port/room/r3-1";           break;
                case "6":
                        room = me->query("startroom");         break;
                case "7":
                case "8":
                case "9":
                        if( !room = me->query_temp( "fan/"+ arg ) )
                                return notify_fail("抱歉, 没有你所要去的地方的资料。\n");
                        break;
                case "gs":
                        room = "/open/wiz/gs.c";               break;
                default:
                        return notify_fail("抱歉, 没有你所要去的地点。\n");
        }
        message_vision( HIB+"只见天上降下一朵云陇罩着$N\n"+NOR ,me);

        if( me->query_temp("gmove") )
        {
                count = all_inventory( environment(me) );
                i = sizeof( count );

                if( !me->move(room) )
                        return notify_fail("目的地无法到达。\n");

                while(i--)
                {
                        if( count[i]->is_character() &&
                            !userp(count[i]) &&
                            !count[i]->is_fighting() &&
                        ( count[i]->query_temp("id") == me->query("id")
                        || count[i]->query_leader() == me ) )
                        count[i]->move(room);
                }

                message_vision(HIB+"一阵清风过后,$N带领大家从天而降.\n"+NOR,me);
                me->add("bank/coin", -500);
                return 1;
        }

        if( room && !me->move(room) )
                return notify_fail("目的地无法到达。\n");

        message_vision(HIB+"一阵清风过后,$N从天而降.\n"+NOR,me);
        me->add("bank/coin",-500);
        return 1;
}
