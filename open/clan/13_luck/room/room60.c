inherit ROOM;
void create() {
	set( "short", "С���η���" );
	set( "owner", "poll" );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room106",
	]) );
	set( "object", ([
		"file1"    : "/open/ping/obj/cloud_fan",
		"file8"    : "/open/killer/outsea/dstone",
		"file4"    : "/open/ping/obj/fu_weapon",
		"amount2"  : 1,
		"amount6"  : 1,
		"file3"    : "/open/mogi/castle/obj/fire-king-head",
		"amount9"  : 1,
		"file5"    : "/daemon/class/bonze/puty_pullium",
		"amount10" : 1,
		"amount4"  : 1,
		"file2"    : "/obj/gift/hobowdan",
		"amount7"  : 1,
		"amount5"  : 1,
		"amount1"  : 1,
		"file7"    : "/open/wind-rain/obj/sun_red_cloth",
		"file6"    : "/open/magic-manor/obj/magic-sign",
		"amount3"  : 1,
		"file10"   : "/open/mogi/dragon/obj/scale",
		"amount8"  : 1,
		"file9"    : "/open/mogi/dragon/obj/key",
	]) );
	set( "build", 10146 );
	set( "light_up", 1 );
	set( "long", @LONG
�������ι�����ǿ���㣡 

�ι��˴��һ������������!!!
һ�м���ն�ռ�ʽ---����ħ���֡�!!!

�����㲻�������������Źᴩ������
( �����˹��أ��Ѿ�������в�����ʱ�����ܶ����� ) 
����������䡱��һ���������, ���Ⱦ��ֵ���˲�仯���V��, �ҷ�����

�����ǰһ�ڣ�����ʲôҲ��֪����.... 

y
LONG);
	setup();
	replace_program(ROOM);
}
