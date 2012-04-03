inherit ROOM;
void create() {
	set( "short", "$HIC$Nine Inch Nails$NOR$" );
	set( "object", ([
		"file6"    : "/open/killer/obj/bellstar",
		"file5"    : "/open/killer/obj/bellstar",
		"amount10" : 99999,
		"file7"    : "/open/killer/obj/bellstar",
		"file8"    : "/open/killer/obj/bellstar",
		"amount8"  : 99999,
		"file4"    : "/open/killer/obj/bellstar",
		"amount3"  : 99999,
		"amount9"  : 99999,
		"file2"    : "/open/killer/obj/bellstar",
		"amount7"  : 99999,
		"amount4"  : 99999,
		"amount2"  : 99999,
		"file3"    : "/open/killer/obj/bellstar",
		"file10"   : "/open/killer/obj/bellstar",
		"amount6"  : 99999,
		"amount5"  : 99999,
		"amount1"  : 99999,
		"file1"    : "/open/killer/obj/bellstar",
		"file9"    : "/open/killer/obj/bellstar",
	]) );
	set( "owner", "devil" );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room255",
		"up"        : "/open/clan/ou-cloud-club/room/room177.c",
	]) );
	set( "build", 15614 );
	set( "long", @LONG
  
  The Fragile ���Ƽȶ����ָ�֣�ȫ��������ֽṹ����������
������֯����Э���ĳ��ӿռ䣬������Ԥ����ת�뽻�����ֵ�����
��Ȼ����������һ���磬��������������������Ӻϳ���������
���أ��پ��ɶ�����˼�����ˣ�ʹ��Ʒ��ȡ��һ��ȫȻ��ͬ������
���ơ�

LONG);
	setup();
	replace_program(ROOM);
}
