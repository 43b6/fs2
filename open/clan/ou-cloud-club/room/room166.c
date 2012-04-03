inherit ROOM;
void create() {
	set( "short", "����ļ�" );
	set( "owner", "scs" );
	set( "object", ([
		"file1"    : "/open/fire-hole/obj/g-pill",
		"amount2"  : 20,
		"amount1"  : 38,
		"file7"    : "/open/ping/obj/ring-2",
		"file8"    : "/open/love/obj/cloth1",
		"amount6"  : 1,
		"amount9"  : 1,
		"amount3"  : 19,
		"amount7"  : 1,
		"file6"    : "/open/mon/obj/ghost-legging",
		"file5"    : "/open/mon/obj/ghost-cloak",
		"file9"    : "/open/mon/obj/ghost-helmet",
		"file2"    : "/open/mogi/castle/obj/sspill",
		"amount10" : 1,
		"amount8"  : 1,
		"amount5"  : 1,
		"file10"   : "/open/gsword/obj/yuboots",
		"file3"    : "/open/fire-hole/obj/r-pill",
		"file4"    : "/open/fire-hole/obj/w-pill",
		"amount4"  : 20,
	]) );
	set( "light_up", 1 );
	set( "build", 10013 );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room226",
		"west"      : "/open/clan/ou-cloud-club/room/room164",
	]) );
	set( "long", @LONG
���ǰ���ɽׯ��,�ųƵ���֮����������������������
����ս�������ı���,���迴�Ƽ���ʵ�ڲ�����,���в���
��ʽ����oasis������С�ˡ�����������ڿ�˼����ʽ,ϣ����
һ�ٴ�ܷ������ħͷ,ǽ����̵ĵ���,����ʾ����ʵ������
��.��˵���Ѿ���������ǧҶ�������ռ�����,���Ų��ú���
���Ϊ����ɽׯ�ڲ��ɻ�ȱ�ĸ���֮һ.
LONG);
	setup();
	replace_program(ROOM);
}
