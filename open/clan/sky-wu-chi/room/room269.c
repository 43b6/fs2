inherit ROOM;
void create() {
	set( "short", "-��涵ļҡ�����-" );
	set( "object", ([
		"file8"    : "/open/gsword/obj/yuskirt",
		"amount1"  : 1,
		"file9"    : "/open/sky/obj/lucky_grasslink",
		"file1"    : "/open/scholar/obj/icefan",
		"file3"    : "/open/dancer/obj/yuawaist",
		"amount9"  : 1,
		"file10"   : "/open/main/obj/shiblade",
		"amount2"  : 1,
		"amount7"  : 1,
		"amount6"  : 1,
		"amount5"  : 1,
		"file4"    : "/open/killer/weapon/k_cloth3",
		"amount4"  : 1,
		"file6"    : "/open/wu/npc/obj/armband",
		"file2"    : "/open/killer/obj/k_ring",
		"file7"    : "/open/ping/obj/gold_hand",
		"amount8"  : 1,
		"amount10" : 1,
		"amount3"  : 1,
		"file5"    : "/open/ping/obj/chilin_legging",
	]) );
	set( "build", 10004 );
	set( "exits", ([
		"chome"     : "/open/clan/sky-wu-chi/room/hall",
	]) );
	set( "owner", "zzxx" );
	set( "long", @LONG
�������ƽ�������ĵط���Ҳ���������Ӵ����ѵĵط�����
�Գ������кܶ������⣬����Ϊ����Ȳ�������������ܵĻ���
�����˲��㣬�Լ�һЩС��ʣ�����������ú��������˵Ĳ��
һ��������ȴ�ֳ����������׽��ޱȵĸо�����������Ȼ������
����һ��ȱ��膪�����ܵð���ȼ������أ�������ܿ�����
������˵�ׯ�ϡ�
LONG);
	setup();
	replace_program(ROOM);
}
