inherit ROOM;
void create() {
	set( "short", "Сѩ�η���" );
	set( "owner", "sca" );
	set( "object", ([
		"amount3"  : 1,
		"file1"    : "/open/killer/headkill/obj/world_dag",
		"file2"    : "/open/mogi/dragon/obj/scale",
		"file4"    : "/open/port/obj/wolf_ring",
		"file3"    : "/daemon/class/fighter/figring",
		"amount2"  : 1,
		"amount1"  : 1,
		"amount4"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10005 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room87",
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
	]) );
	set( "long", @LONG
���ʵ�ɽ������ֱת���£�һĨ���������µ�����
ǰ����˳��ɽ��������ȥ�����Ե��µ��ϳ�����Ұ����
�ӻ���ӳ�����⣬���绨����һ�㣬���ٸ������£�ֻ
��ˮ���仨Խ�࣬��ˮԽ�峺����ǰֱ�ߣ�ˮʶԽ�죬
�����������������ڵ�������

LONG);
	setup();
	replace_program(ROOM);
}
