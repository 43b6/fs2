inherit ROOM;
void create() {
	set( "short", "双截棍" );
	set( "object", ([
		"amount5"  : 1,
		"file7"    : "/open/ping/obj/chilin_legging",
		"file4"    : "/daemon/class/blademan/obj/shield",
		"amount4"  : 1,
		"file3"    : "/open/dancer/obj/yuawaist",
		"file9"    : "/open/sky/obj/lucky_grasslink",
		"amount6"  : 1,
		"file1"    : "/daemon/class/bonze/puty_pullium",
		"file10"   : "/open/wu/npc/obj/armband",
		"amount3"  : 1,
		"amount9"  : 1,
		"file8"    : "/daemon/class/fighter/ywgem",
		"file6"    : "/open/ping/obj/gold_hand",
		"amount1"  : 1,
		"amount8"  : 1,
		"amount10" : 1,
		"amount2"  : 1,
		"file2"    : "/open/killer/weapon/k_head3",
		"file5"    : "/open/scholar/obj/icefan",
		"amount7"  : 1,
	]) );
	set( "owner", "biwem" );
	set( "build", 10164 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room278.c",
	]) );
	set( "long", @LONG
岩烧店的烟味弥漫 隔壁是国术馆
店里面的妈妈三 茶道有三段
教拳脚武术的老板 练铁沙掌 耍杨家枪 
硬底子功夫最厉害 还会金锺罩铁布杉
他们的儿子我从小就耳濡目染
什么刀枪根棍棒我都耍的有模有样
最喜欢的兵器 双截棍柔中带刚 想要去河南嵩山学少林跟武当
干什么 干什么(客) 呼吸吐纳心自在
干什么 干什么(客) 气沉丹田手心开
干什么 干什么(客) 日行千里系沙袋 飞檐走壁莫奇怪 我去去就来
嘿 一个马步向前一记左钩拳 右钩拳
惹毛我的人有危险 一再重演 一跟我不抽的烟 一放好多年 一直在身边
干什么 干什么(客) 我打开任督二脉
干什么 干什么(客) 东亚病夫的招牌
干什么 干什么(客) 以被我一脚踢开
吭吭哈兮 快使用双节棍        吭吭哈兮 快使用双节棍
吭吭哈兮 快使用双节棍        吭吭哈兮 快使用双节棍
习武之人切记 仁者无敌      如果我有轻功 飞檐走壁
是谁在练太极 风生水起      为人耿直不屈 一生正气
LONG);
	setup();
	replace_program(ROOM);
}
