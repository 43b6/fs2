inherit ROOM;
void create() {
	set( "short", "���ķ���" );
	set( "owner", "jenny" );
	set( "object", ([
		"amount1"  : 1,
		"file4"    : "/daemon/class/bonze/puty_pullium",
		"file2"    : "/open/gsword/obj/yu_cloak",
		"file3"    : "/open/gsword/obj/yuskirt",
		"amount4"  : 1,
		"file1"    : "/open/gsword/obj/yugem",
		"amount2"  : 1,
		"amount3"  : 1,
	]) );
	set( "build", 10105 );
	set( "light_up", 1 );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room56",
		"east"      : "/open/clan/red_fire/room/room47",
	]) );
	set( "long", @LONG

������С��ķ��䣬����������һ�ɵ����Ļ��㣬�����Ǵӻ�԰��Ʈ
�����ģ���粻ϲ��̫���ڻ����İ��Σ����������ķ�����ֻ��һЩ
�ճ��ر�����Ʒ�⣬����û�ж���Ķ����ˣ��ѹ��ڰ����棬��Ҷ�
���������һλ���ŵ�С�㡣


LONG);
	setup();
	replace_program(ROOM);
}
