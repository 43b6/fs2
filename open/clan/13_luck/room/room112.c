inherit ROOM;
void create() {
	set( "short", "EMC�Է�������" );
	set( "owner", "wyld" );
	set( "object", ([
		"file3"    : "/open/gsword/obj/yuskirt",
		"amount6"  : 1,
		"file2"    : "/open/ping/obj/gold_hand",
		"amount3"  : 1,
		"file7"    : "/open/doctor/obj/needle9",
		"amount2"  : 1,
		"amount4"  : 1,
		"amount7"  : 1,
		"amount5"  : 1,
		"amount1"  : 1,
		"file1"    : "/open/killer/outsea/dstone",
		"file5"    : "/open/gsword/obj/ring-1",
		"file4"    : "/open/sky/obj/lucky_grasslink",
		"file6"    : "/open/mogi/village/obj/mogi_ring",
	]) );
	set( "build", 10191 );
	set( "exits", ([
		"west"      : "/open/clan/13_luck/room/room104",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
��������Ӫ�������ϴ����΢��¯,������Щ���ϼӰ�
�Եı��ɸ�����..����ÿ����Ŀ��ȶ���������
ÿ�����粻�ǳ�ȥ�Է�,��������߳��ű㵱..
ţ����,���Ǻ��ʹ�..��Ȼ��ʱҲ����Щ���Ϸ�����...CCC
������Ȼ��ȸ��С..����������Ǿ�ȫ��..
LONG);
	setup();
	replace_program(ROOM);
}
