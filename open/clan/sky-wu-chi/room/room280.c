inherit ROOM;
void create() {
	set( "short", "��Դ������" );
	set( "owner", "biwem" );
	set( "object", ([
		"file1"    : "/open/mogi/castle/obj/ninepill",
		"file3"    : "/open/fire-hole/obj/w-pill",
		"amount1"  : 96,
		"file6"    : "/open/fire-hole/obj/g-pill",
		"amount6"  : 185,
		"amount10" : 40,
		"amount3"  : 10,
		"file2"    : "/open/fire-hole/obj/b-pill",
		"amount2"  : 12,
		"amount7"  : 2,
		"file5"    : "/open/fire-hole/obj/r-pill",
		"amount8"  : 1,
		"file8"    : "/obj/gift/shenliwan",
		"amount9"  : 1,
		"file9"    : "/open/snow/obj/cold_pill",
		"amount5"  : 41,
		"file10"   : "/open/mogi/castle/obj/sspill",
		"file7"    : "/open/fire-hole/obj/k-pill",
		"amount4"  : 90,
		"file4"    : "/open/fire-hole/obj/p-pill",
	]) );
	set( "build", 10030 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room341",
		"west"      : "/open/clan/sky-wu-chi/room/room175.c",
	]) );
	set( "long", @LONG
���ǻ�����һ�Ũ���Դ������,�������������ܻ��ը���Դ

�ڱ��˨�����ȫ�ǲ�ֵǮ������,;�ڻ�����һ�Ũ�����ȴ���ܻ��ը���Դ

һЩֱ�������ը���Դ;��ʱ�㲻�ɵû��ɻ�����һ�Ũ��۾���������

��Ȼ�ռ�����ô�������
LONG);
	setup();
	replace_program(ROOM);
}
