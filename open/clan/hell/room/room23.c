inherit ROOM;
void create() {
	set( "short", "$RED$����������$NOR$��$HIY$�ղص���$NOR$��$HIC$ǧ��֮ˮ$NOR$��" );
	set( "object", ([
		"amount1"  : 8,
		"file1"    : "/open/mogi/castle/obj/blood-water",
	]) );
	set( "light_up", 1 );
	set( "build", 10286 );
	set( "exits", ([
		"south"     : "/open/clan/hell/room/room30.c",
		"west"      : "/open/clan/hell/room/room27.c",
		"SH"        : "/open/clan/hell/room/room92",
		"up"        : "/open/clan/hell/room/room132",
		"east"      : "/open/clan/hell/room/room22.c",
		"down"      : "/open/clan/hell/room/hall.c",
		"north"     : "/open/clan/hell/room/room28.c",
		"FH"        : "/open/clan/hell/room/room91.c",
	]) );
	set( "long", @LONG
�����ǵظ����������ղض����ĵط�,���Ĺ��ӹ����Ǵ��Ĵ��L�������Ķ���
�����ղ�������,�����ղ�Ʒʵ��̫����,�������ղص�����ֻһ��,��������
�������ȥ,�����ղ��������ĵط�,��ȻҲ���и�������ҩ,ֻҪ���ܵ���
�����Ͽɵ��˶���������ȡ��,

LONG);
	setup();
	replace_program(ROOM);
}
