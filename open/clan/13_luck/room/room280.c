inherit ROOM;
void create() {
	set( "short", "��������" );
	set( "owner", "adeyzit" );
	set( "object", ([
		"file1"    : "/open/port/obj/wolf_ring",
		"amount2"  : 1,
		"file4"    : "/open/mogi/castle/obj/ninepill",
		"amount1"  : 1,
		"amount4"  : 2,
		"file2"    : "/open/ping/obj/ring-2",
	]) );
	set( "exits", ([
		"south"     : "/open/clan/13_luck/room/room269",
	]) );
	set( "build", 10473 );
	set( "light_up", 1 );
	set( "long", @LONG

    ���ҷ��Ÿ�ʽ�����Ľ�����˵�е����������޼᲻�ݵ����콣����
�ֺý��������У�Ҳ�Ǽ����������һ�ִ����ģ������������ɽ�����
����֣ʿ��֮�֣�ʹ�������������Ǳ�����������콣��С��а����
֮�֣���С��а�����Ʒ�������Ҳѧ���洫��ֻ��С��С����С�ĵ�ȥ
�򣬲�Ȼֻ��ȥ�������ѡ�


LONG);
	setup();
	replace_program(ROOM);
}
