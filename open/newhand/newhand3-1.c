#include <room.h>
#include <ansi.h>
inherit ROOM;
void create ()
{
  set ("short", HIY"狂想空间帮派入门房间"NOR);
  set ("long","狂想空间另外一项系统就是帮派的系统(clans),新玩家可以
  打help clans,看一下帮派的入门!!帮派及门派的主要不同!!!如下：
  1.帮派是由玩家所组成的!!!门派是由巫师(wizard)所创建的!!
  2.帮派可以写自己的武器、帮众、房间及可以发起战争!!!
  3.加入帮派的话得到照顾也比较多，练的会比较快!!!
  4.要是你可以的话.以后你自己也可以创自己的帮派!!!
  例如：help clans
    help creat_clan 如何创建一个帮派。
    help clan_rank  帮派的阶级制度。
    help clan_money 钱的重要性。
    help clan_cmds  帮派的指令说明。
    help clan_room  如何建造自己的帮派。
    help clan_rules 帮派规定。
    help clan_war   帮派的战争。
    help clan_boss  帮主入门教学。
    help clan_tax   帮派税率制度。
    help clan_dev   帮派发展制度。
    help clan_stat  帮派状态说明。

               \n");
  set("exits", ([
  "east" : __DIR__"newhand",
  "west" : __DIR__"newhand3-2",
               ]));
  set("light_up", 1);
  setup();
}

