inherit ROOM;
void create() {
	set( "short", "$HBGRN$$HIB$阿噜米的大厅$NOR$" );
	set( "owner", "hild" );
	set( "object", ([
		"amount4"  : 1,
		"amount8"  : 1,
		"amount6"  : 1,
		"amount2"  : 1,
		"amount7"  : 1,
		"file3"    : "/open/capital/room/king/obj/dagger1",
		"file7"    : "/open/killer/obj/dagger",
		"amount3"  : 1,
		"file2"    : "/open/killer/headkill/obj/world_dag",
		"file5"    : "/open/killer/headkill/obj/world_dag",
		"amount1"  : 398,
		"amount5"  : 1,
		"file1"    : "/open/killer/obj/black",
		"file4"    : "/open/killer/headkill/obj/world_dag",
		"file6"    : "/open/killer/obj/dagger",
		"file8"    : "/open/killer/headkill/obj/f_dag",
	]) );
	set( "light_up", 1 );
	set( "build", 11366 );
	set( "exits", ([
		"west"      : "/open/clan/sky-wu-chi/room/room167.c",
		"north"     : "/open/clan/sky-wu-chi/room/room110",
	]) );
	set( "long", @LONG
这里便是令整个武林闻风丧胆的〔$CYN$黑牙联杀手$NOR$～$HIR$寂云$NOR$〕
的住所，阿噜米是他的小名，跟他不熟的人可别这么叫他，
担心惹来杀身之祸。他正在跟〔$CYN$黑牙联天才机关手$NOR$～$HIR$诸冈渡$NOR$
〕商讨一些重大秘密，似乎要让整个武林掀起一阵腥风血雨
，但你却听不懂他们的话语，原来他们正用杀手的语言在沟
通。
LONG);
	setup();
	replace_program(ROOM);
}
