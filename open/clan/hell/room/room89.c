inherit ROOM;
void create() {
	set( "short", "$HIC$聚灵武器封印区$HIY$(claw)$NOR$" );
	set( "object", ([
		"file5"    : "/open/magic-manor/obj/evil-kill-claw",
		"file10"   : "/open/magic-manor/obj/evil-kill-claw",
		"amount3"  : 1,
		"file6"    : "/open/mon/obj/ghost-claw",
		"amount2"  : 1,
		"amount6"  : 1,
		"amount7"  : 1,
		"amount4"  : 1,
		"amount10" : 1,
		"file9"    : "/open/mon/obj/ghost-claw",
		"file3"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount8"  : 1,
		"file7"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount9"  : 1,
		"file1"    : "/open/magic-manor/obj/hwa-je-icer",
		"file2"    : "/open/magic-manor/obj/evil-kill-claw",
		"file4"    : "/open/magic-manor/obj/evil-kill-claw",
		"amount5"  : 1,
		"amount1"  : 1,
		"file8"    : "/open/magic-manor/obj/hwa-je-icer",
	]) );
	set( "light_up", 1 );
	set( "build", 11592 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room28",
	]) );
	set( "long", @LONG

(^^ ....转承YYY)
先来讨论一下蓝龙好了...
ㄜ...反正就是不错的pill..可以增加en force等级...
各位大哥哥大姐姐如果蹲完厕所的话...如果服用一颗蓝龙精元..
你会有飘飘然的感觉...效果不错.. hoho

吞云吐雾心得PART2 
(百乐门)<--好玩的滤嘴...可以边哈草边玩搓搓乐..
(MORE)<--被禁止发售的美国菸...原因是至癌物过多..
(七星)<--学生群最爱...不错的日本菸..还可玩对奖游戏(A ~ E)
(Peace)<--香喷喷的日本菸...品质不错...但有点难吸..

                        (^^ ...下文请阅PPP)

LONG);
	setup();
	replace_program(ROOM);
}
