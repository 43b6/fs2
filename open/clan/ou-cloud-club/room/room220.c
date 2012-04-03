inherit ROOM;
void create() {
	set( "short", "$BLU$��ؽħ��$NOR$" );
	set( "owner", "del" );
	set( "object", ([
		"file1"    : "/open/fire-hole/obj/b-pill",
		"amount8"  : 100,
		"file5"    : "/open/fire-hole/obj/k-pill",
		"file8"    : "/open/fire-hole/obj/w-pill",
		"file2"    : "/open/fire-hole/obj/p-pill",
		"amount4"  : 450,
		"amount3"  : 140,
		"amount5"  : 55,
		"file3"    : "/open/mogi/castle/obj/sspill",
		"amount2"  : 228,
		"amount7"  : 30,
		"amount6"  : 12,
		"file6"    : "/open/mogi/castle/obj/ninepill",
		"amount9"  : 350,
		"file7"    : "/open/fire-hole/obj/y-pill",
		"file10"   : "/open/dancer/obj/yuawaist",
		"file4"    : "/open/fire-hole/obj/r-pill",
		"file9"    : "/open/fire-hole/obj/g-pill",
		"amount1"  : 67,
		"amount10" : 1,
	]) );
	set( "build", 10950 );
	set( "exits", ([
		"jump"      : "/open/clan/ou-cloud-club/room/room306",
		"westup"    : "/open/clan/ou-cloud-club/room/room201.c",
		"out"       : "/open/clan/ou-cloud-club/room/room230",
	]) );
	set( "long", @LONG
���Ž��ݻ������£�������һ�����һ���ʯ�ң�����
�Ǵӽ�Ϊ�ϲ��ʯ��͸���������ϸ����ŷ�������Χ��ǽ
�ϣ����棬�������컨�嶼�����������顢��ǳ��һ�ĵ���
����������������ε���Ĵ����Ż���ˡ����ֱߵ�ǽ����
��һ�����˸ߵİ��ݴ����������������ɫ��ҩ�衣
��
LONG);
	setup();
	replace_program(ROOM);
}
