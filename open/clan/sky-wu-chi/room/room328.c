inherit ROOM;
void create() {
	set( "short", "miffy ��¥2-8" );
	set( "object", ([
		"file5"    : "/open/ping/obj/poison_pill",
		"amount4"  : 5,
		"file1"    : "/open/mogi/castle/obj/sspill",
		"amount5"  : 11,
		"amount3"  : 16,
		"amount1"  : 16,
		"file2"    : "/open/fire-hole/obj/w-pill",
		"file3"    : "/open/fire-hole/obj/r-pill",
		"file4"    : "/open/mogi/castle/obj/ninepill",
		"amount2"  : 15,
	]) );
	set( "light_up", 1 );
	set( "owner", "miffy" );
	set( "build", 10716 );
	set( "exits", ([
		"northwest" : "/open/clan/sky-wu-chi/room/room321",
	]) );
	set( "long", @LONG
�����Ƕ��Ϸ������񵤷�,�������ĵ�ҩ������miffy ���������Ѱ�æ�ռ�����
��Ϊ�����񵤵�����ȡ��,���Ը��Եô��񵤵����ܿɹ�,���ɴ˳�ȥ����
Ҳ���ܹ������������Ĺ���,��������,��˴˴�¥��������ҩҲ���൱֮�߸ߵ�
���������ĵز�...
LONG);
	setup();
	replace_program(ROOM);
}
