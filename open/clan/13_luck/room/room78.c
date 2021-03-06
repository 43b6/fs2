inherit ROOM;
void create() {
	set( "short", "梦心谷" );
	set( "owner", "poll" );
	set( "object", ([
		"amount4"  : 1,
		"file8"    : "/open/killer/obj/dagger",
		"file2"    : "/open/killer/headkill/obj/world_dag",
		"amount6"  : 1,
		"amount7"  : 1,
		"amount2"  : 1,
		"file7"    : "/open/killer/headkill/obj/w_dag",
		"file4"    : "/open/ping/obj/fu_weapon",
		"file1"    : "/open/killer/headkill/obj/world_dag",
		"amount3"  : 1,
		"amount10" : 84815,
		"file5"    : "/open/killer/headkill/obj/f_dag",
		"file10"   : "/open/killer/obj/bellstar",
		"amount8"  : 1,
		"file3"    : "/open/killer/headkill/obj/i_dag",
		"amount5"  : 1,
		"file9"    : "/open/killer/headkill/obj/f_dag",
		"amount9"  : 1,
		"amount1"  : 1,
		"file6"    : "/open/killer/headkill/obj/w_dag",
	]) );
	set( "exits", ([
		"east"      : "/open/clan/13_luck/room/room105.c",
		"south"     : "/open/clan/13_luck/room/room251",
		"north"     : "/open/clan/13_luck/room/room250.c",
	]) );
	set( "build", 10102 );
	set( "light_up", 1 );
	set( "long", @LONG

    梦心谷是十三吉祥里的一处人间仙境，谷里长满了各式各样的奇
花异草及飞禽走兽，空气中更随处可闻到一股淡淡的芳香气味，令人
沉醉不已不过自从三年前一代变态～有 逆天魔医 之称的小草住进此
处之后一切就都变了!!各式各样的奇花异草变成毒花毒草，飞禽走兽
则被抓去做着惨无人道的实验，空气中的芳香气味更已被浓厚的血腥
味所取代，突然你听到一声凄厉的惨叫声从谷里传出，想必又是那变
态魔医又在做恐怖的实验了，想到这，你不由的提起脚跟快步离开此
处，深怕自己成为下一个实验对象........

LONG);
	setup();
	replace_program(ROOM);
}
