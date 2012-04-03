inherit ROOM;
void create() {
	set( "short", "ɶ�䷿��" );
	set( "object", ([
		"file6"    : "/open/ping/questsfan/obj/dagger1",
		"file4"    : "/open/dancer/obj/yuawaist",
		"amount5"  : 1,
		"file1"    : "/open/ping/obj/poison_pill",
		"amount1"  : 9,
		"file9"    : "/open/ping/obj/ring-2",
		"file5"    : "/daemon/class/blademan/obj/shield",
		"file2"    : "/open/killer/obj/black",
		"amount7"  : 1,
		"amount9"  : 1,
		"file10"   : "/open/mogi/castle/obj/lochagem",
		"amount3"  : 1,
		"file3"    : "/open/prayer/obj/boris-boots",
		"file7"    : "/open/mon/obj/ghost-cloak",
		"amount10" : 1,
		"amount6"  : 1,
		"amount2"  : 14,
		"amount4"  : 1,
		"amount8"  : 1,
		"file8"    : "/open/port/obj/wolf_ring",
	]) );
	set( "owner", "diana" );
	set( "build", 10016 );
	set( "light_up", 1 );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room215.c",
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
		"west"      : "/open/clan/sky-wu-chi/room/room153",
	]) );
	set( "long", @LONG
              ����    ����    ����    ����    ����
                �񨍡�����񨍡�����񨍡�����񨍡�����񨍡�����
                �����������������������������������������
                �񨐡�����񨐡�����񨐡�����񨐡�����񨐡�����
                  ����    ����    ����    ����    ����
              ����   ��  ����  �� Ц��   �� ϣ��   �� ����   �� ����
LONG);
	setup();
	replace_program(ROOM);
}
