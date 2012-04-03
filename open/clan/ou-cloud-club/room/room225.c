inherit ROOM;
void create() {
	set( "short", "��ū��-�󽭶�ȥ" );
	set( "object", ([
		"amount1"  : 16,
		"file6"    : "/open/mon/obj/ghost-legging",
		"file3"    : "/open/fire-hole/obj/r-pill",
		"amount5"  : 1,
		"file7"    : "/open/mon/obj/ghost-cloak",
		"file2"    : "/open/ping/obj/ring-2",
		"amount7"  : 1,
		"amount9"  : 1,
		"amount3"  : 11,
		"amount2"  : 1,
		"file9"    : "/open/mon/obj/ghost-helmet",
		"amount4"  : 1,
		"file4"    : "/open/gblade/obj/sa-head",
		"file1"    : "/open/fire-hole/obj/w-pill",
		"file8"    : "/open/mogi/castle/obj/fire-king-head",
		"file5"    : "/open/mon/obj/ghost-claw",
		"amount6"  : 1,
		"amount8"  : 1,
	]) );
	set( "build", 10172 );
	set( "light_up", 1 );
	set( "owner", "flower" );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room217",
	]) );
	set( "long", @LONG

�󽭶�ȥ�����Ծ���ǧ��������
�������ߣ��˵��ǣ��������ɳ�ڡ�
��ʯ���գ������İ�������ǧ��ѩ��
��ɽ�续��һʱ���ٺ��ܡ�
ң�빫誵��꣬С�ǳ����ˣ�����Ӣ����
�����ڽ�̸Ц�䣬���ֻҷ�����
�ʹ����Σ�����ӦЦ�ң�����������
�˼����Σ�һ�������¡�

LONG);
	setup();
	replace_program(ROOM);
}
