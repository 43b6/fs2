inherit ROOM;
void create() {
	set( "short", "α����" );
	set( "object", ([
		"file5"    : "/open/ping/questsfan/obj/diamond_boots",
		"file10"   : "/open/ping/questsfan/obj/diamond_legging",
		"file4"    : "/open/ping/questsfan/obj/diamond_armor",
		"file7"    : "/open/ping/questsfan/obj/diamond_cloak",
		"amount10" : 1,
		"amount2"  : 1,
		"amount4"  : 1,
		"amount1"  : 1,
		"file6"    : "/open/mogi/castle/obj/fire_book",
		"amount7"  : 1,
		"amount9"  : 1,
		"amount6"  : 1,
		"file2"    : "/open/ping/questsfan/obj/diamond_skirt",
		"amount5"  : 1,
		"file8"    : "/open/gblade/obj/dragon_book",
		"amount3"  : 1,
		"file3"    : "/open/ping/questsfan/obj/diamond_hands",
		"file9"    : "/open/ping/questsfan/obj/diamond_hairpin",
		"amount8"  : 1,
		"file1"    : "/open/ping/questsfan/obj/diamond_belt",
	]) );
	set( "build", 10010 );
	set( "owner", "biwem" );
	set( "exits", ([
		"out"       : "/open/clan/sky-wu-chi/room/room175",
	]) );
	set( "long", @LONG
һ��ҩ��...����������...����ҩ��...����������...
����ҩ��...����������...����ҩ��...��...����ô���˰�....
�ѵ��ҵ�ҩ�豻͵����???��ô�찢??����������Ҫ�õĨ�...
��һ�������Ǹ�����...͵͵�ó�ȥ����...����Ȼ�ָ����������Ҹ�...
������������ô������...sigh...��ô�찢??����������Ҫ�õĨ�...
����һ��ҩЧ���ܶ��...�����ҿɾͶԲ����ҵ�������˵...
��������漸�κ���...�浹�...���һ�...�б��¾ͱ����...

LONG);
	setup();
	replace_program(ROOM);
}
