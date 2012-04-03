inherit ROOM;
void create() {
	set( "short", "С�����߷�" );
	set( "object", ([
		"file6"    : "/open/fire-hole/obj/b-pill",
		"file7"    : "/open/fire-hole/obj/w-pill",
		"amount1"  : 294,
		"file8"    : "/open/fire-hole/obj/p-pill",
		"amount3"  : 165,
		"amount4"  : 186,
		"file5"    : "/open/mogi/castle/obj/sspill",
		"file10"   : "/open/mogi/dragon/obj/scale",
		"amount8"  : 103,
		"file1"    : "/open/fire-hole/obj/g-pill",
		"file3"    : "/open/fire-hole/obj/r-pill",
		"file2"    : "/open/fire-hole/obj/k-pill",
		"amount7"  : 106,
		"file9"    : "/open/fire-hole/obj/y-pill",
		"amount9"  : 69,
		"amount2"  : 10,
		"amount10" : 1,
		"file4"    : "/open/mogi/castle/obj/ninepill",
		"amount5"  : 64,
		"amount6"  : 79,
	]) );
	set( "build", 10307 );
	set( "owner", "cong" );
	set( "exits", ([
		"down"      : "/open/clan/sky-wu-chi/room/room99",
	]) );
	set( "outdoors", "/open/clan/sky-wu-chi" );
	set( "light_up", 1 );
	set( "long", @LONG
����һС��ר�õĵ��߼� , ������Ÿ�ʽ�����ĵ��� , Ϊ
���������Ϊ��ȫ֮�� , �㿴��������ֵĵ��� , ��ν������
���� ,���������� , ���� ,��Ҳ��Ϊ�Լ�ѡ�������ĵ��� , ��
�������� .����Կ���(list)�ι�һ������ķ��� ?

LONG);
	setup();
	replace_program(ROOM);
}
