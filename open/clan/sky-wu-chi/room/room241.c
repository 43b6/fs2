inherit ROOM;
void create() {
	set( "short", "��˪��" );
	set( "object", ([
		"amount2"  : 1,
		"file2"    : "/open/mogi/castle/obj/fire-king-head",
		"file1"    : "/open/mogi/castle/obj/fire-king-head",
		"amount1"  : 1,
	]) );
	set( "owner", "roboo" );
	set( "build", 10635 );
	set( "light_up", 1 );
	set( "exits", ([
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
		"east"      : "/open/clan/sky-wu-chi/room/room359.c",
		"north"     : "/open/clan/sky-wu-chi/room/room358",
		"west"      : "/open/clan/sky-wu-chi/room/room360.c",
	]) );
	set( "long", @LONG
�����߽��ⷿ���ʱ��ͻȻ��һ��ǿ��������޷������۾�
������Ӧ������ǿ��֮�󣬲ŷ���ԭ����ǿ�����Դ��Դ����
�ⷿ��ǽ���ϵ�ˮ��������ϸһ���ⷿ�伸��������ʮ�ֲ�ͬ
��ɫ��ˮ�������ɵģ��ѵ���ǽ�ϵ�ˮ�����Ǵ�˵�м�������
��ѧ�������ķ����ھ���ʮɫˮ��������ⷿ������˱ض�
��λ�������˰�~~~.

LONG);
	setup();
	replace_program(ROOM);
}
