inherit ROOM;
void create() {
	set( "short", "$HIG$�ξ糡$HIR$Dream Theater$NOR$" );
	set( "owner", "devil" );
	set( "object", ([
		"file5"    : "/obj/gift/xisuidan",
		"amount9"  : 99999,
		"file7"    : "/open/killer/obj/bellstar",
		"amount2"  : 95,
		"amount6"  : 99999,
		"file2"    : "/open/fire-hole/obj/r-pill",
		"amount10" : 99999,
		"file4"    : "/open/killer/obj/bellstar",
		"amount8"  : 1,
		"file3"    : "/open/fire-hole/obj/w-pill",
		"amount3"  : 81,
		"amount7"  : 99999,
		"file1"    : "/open/fire-hole/obj/b-pill",
		"file10"   : "/open/killer/obj/bellstar",
		"file6"    : "/open/killer/obj/bellstar",
		"amount4"  : 99999,
		"file9"    : "/open/killer/obj/bellstar",
		"amount1"  : 11,
		"amount5"  : 1,
		"file8"    : "/obj/gift/xisuidan",
	]) );
	set( "build", 10074 );
	set( "exits", ([
		"down"      : "/open/clan/ou-cloud-club/room/room177",
	]) );
	set( "long", @LONG

�����Ǿţ������������ҪҲ��ߴ�������Ӱ������ǰ����������
����92���������ר�� <Images and Words> Ϊ��ʱ��ǰ��������
���µı�����ʽ��ר���и߲�εļ���չ�֣�ʹ����Ա�׷׳�Ϊ��
��עĿ�Ľ��㣬Ҳʹ������ר��˳����µس�Ϊǰ�������ľ����
����֮һ��Ҳ������ǰ���������Եıر�ר���� 

LONG);
	setup();
	replace_program(ROOM);
}
