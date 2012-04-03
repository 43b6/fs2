inherit ROOM;
void create() {
	set( "short", "[1;36m�ڹ���[0m" );
	set( "object", ([
		"file2"    : "/open/common/obj/liz_meat",
		"file8"    : "/open/magic-manor/obj/lin-cloud-fan",
		"file7"    : "/open/magic-manor/obj/evil-kill-claw",
		"file5"    : "/obj/gift/xiandan",
		"amount4"  : 1,
		"file1"    : "/open/mogi/castle/obj/sspill",
		"amount7"  : 1,
		"amount8"  : 1,
		"amount5"  : 1,
		"file9"    : "/open/killer/headkill/obj/world_dag",
		"amount2"  : 1,
		"amount10" : 1,
		"file10"   : "/obj/gift/shenliwan",
		"file4"    : "/open/mogi/dragon/obj/key",
		"file3"    : "/open/fire-hole/obj/p-pill",
		"amount6"  : 2,
		"amount9"  : 1,
		"amount1"  : 3,
		"amount3"  : 9,
		"file6"    : "/open/mogi/dragon/obj/power",
	]) );
	set( "owner", "del" );
	set( "item_desc", ([
		"blade" : @ITEM
�����߳ߣ�ȫ�ڵĵ�������һ����״ӡ�ǣ�ɢ��һ�ɰ�����
ITEM,
	]) );
	set( "light_up", 1 );
	set( "build", 10033 );
	set( "exits", ([
		"eastdown"  : "/open/clan/ou-cloud-club/room/room220",
		"south"     : "/open/clan/ou-cloud-club/room/room191.c",
	]) );
	set( "long", @LONG
���ƿ����ڵ�ľ�ţ�һ���嵭��̴��ӭ���������ǰ��
һ�����򵥵����ӣ���ȴ��һ�����ε�ɱ�������е㴭��
���������������ܣ�ԭ��ɱ�������Ժ����ǽ�ϵ�һ�����
�ĵ�(Blade) �����ֱ��������µ�ʯ�ݣ�������ͨ�����
��
��[1;31m[1;37m��������[1;31m�����������[0mС�Ͷ���(Badman)
��[1;37m�񱩿���[1;36m���������[0m��˹��(Gozila)
LONG);
	setup();
	replace_program(ROOM);
}
