inherit ROOM;
void create() {
	set( "short", "$RED$unplugged in new york$NOR$" );
	set( "owner", "nirvana" );
	set( "object", ([
		"file5"    : "/open/fire-hole/obj/k-pill",
		"amount3"  : 120,
		"amount1"  : 19,
		"file4"    : "/open/doctor/pill/gnd_pill",
		"amount4"  : 135,
		"file7"    : "/open/sky/obj8/spring_wind",
		"file3"    : "/open/doctor/pill/sky_pill",
		"file6"    : "/open/mogi/castle/obj/sspill",
		"amount6"  : 1,
		"file1"    : "/open/fire-hole/obj/r-pill",
		"amount7"  : 1,
		"amount5"  : 4,
	]) );
	set( "build", 10565 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/hell/room/room46.c",
		"east"      : "/open/clan/hell/room/room49",
		"west"      : "/open/clan/hell/room/room63",
	]) );
	set( "long", @LONG
大四时....kalin已经在接触blue跟jazz了...
但没专心去研究..
在东引烦闷的日子里....
kalin最爱在他的行政室放着billie holiday的CD...
他也沉迷在bill evans神乎其技的指法里...
此时对kalin来说...music不在是情感的抒发..
也不再是叛逆的宣泄...
而是一个放松心灵的慰藉...

轻轻松松的音乐......殊舒服服的海风...
LONG);
	setup();
	replace_program(ROOM);
}
