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
����ʱ....kalin�Ѿ��ڽӴ�blue��jazz��...
��ûר��ȥ�о�..
�ڶ������Ƶ�������....
kalin������������ҷ���billie holiday��CD...
��Ҳ������bill evans����似��ָ����...
��ʱ��kalin��˵...music��������е��㷢..
Ҳ�������������й...
����һ�����������ο��...

�������ɵ�����......��������ĺ���...
LONG);
	setup();
	replace_program(ROOM);
}
