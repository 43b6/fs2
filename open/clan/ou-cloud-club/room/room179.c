inherit ROOM;
void create() {
	set( "short", "�Ҹ���ȪԴ" );
	set( "light_up", 1 );
	set( "object", ([
		"amount2"  : 1,
		"file9"    : "/open/mon/obj/ghost-cloak",
		"amount6"  : 1,
		"amount7"  : 1,
		"amount3"  : 1,
		"file8"    : "/daemon/class/fighter/figring",
		"amount9"  : 1,
		"amount4"  : 1,
		"file3"    : "/open/tendo/obj/chaosbelt",
		"file1"    : "/obj/gift/xisuidan",
		"file7"    : "/open/sky/obj/lucky_grasslink",
		"amount5"  : 1,
		"file4"    : "/daemon/class/blademan/obj/shield",
		"file6"    : "/open/mogi/castle/obj/lochagem",
		"file5"    : "/open/mon/obj/ghost-legging",
		"amount1"  : 1,
		"file2"    : "/open/mon/obj/ghost-helmet",
		"amount8"  : 1,
	]) );
	set( "build", 10121 );
	set( "owner", "doa" );
	set( "exits", ([
		"west"      : "/open/clan/ou-cloud-club/room/room176",
	]) );
	set( "long", @LONG
           ���Ƿ������ܹ�...����������ϡ��ҹ��...����һ���ڲݵ���...
     ����ӭ�洵��������...����һ��Ī�������ӿ����ͷ...���ָо����Ǳ���...
���ǹ¶�������ʧ��...��һ�ݸо��ǿ����������...����ôһ�����������ôһ˿������
             ��������ô��Ȥ�Ķ���...����������ô�������ݵ��Ҹ���...
                    �ڴ������Ҷ���������˼���������.....

LONG);
	setup();
	replace_program(ROOM);
}
