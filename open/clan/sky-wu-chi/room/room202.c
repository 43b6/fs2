inherit ROOM;
void create() {
	set( "short", "������" );
	set( "owner", "puffy" );
	set( "object", ([
		"amount10" : 1,
		"amount6"  : 1,
		"amount2"  : 220,
		"amount4"  : 211,
		"amount8"  : 1,
		"file8"    : "/obj/gift/lingzhi",
		"file6"    : "/open/fire-hole/obj/k-pill",
		"file4"    : "/open/fire-hole/obj/y-pill",
		"file1"    : "/open/fire-hole/obj/g-pill",
		"amount5"  : 198,
		"amount1"  : 516,
		"file5"    : "/open/fire-hole/obj/w-pill",
		"file9"    : "/open/fire-hole/obj/b-pill",
		"amount7"  : 10,
		"file2"    : "/open/fire-hole/obj/r-pill",
		"file10"   : "/obj/gift/shenliwan",
		"amount9"  : 327,
		"amount3"  : 100,
		"file3"    : "/open/fire-hole/obj/p-pill",
		"file7"    : "/open/mogi/castle/obj/sspill",
	]) );
	set( "build", 10087 );
	set( "light_up", 1 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room162",
	]) );
	set( "long", @LONG
������С����������
����FS�����ϡ�е�ҩ
�������������ǲ���Ѫ�ĵ�ҩ
���ǳ����super pill
���ﶼ��...��ʱ���Ȼ����
ż���¼��ĵ�ҩ
������,�ɵ�...��
��...С�������̫��ͨ�����
����...�㲻��С���ò�����
���....ȥ����С����...
LONG);
	setup();
	replace_program(ROOM);
}
