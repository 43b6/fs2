inherit ROOM;
void create() {
	set( "short", "$HIY$�㽶�ܿ�$HIR$�ްж�$HIW$WC$NOR$" );
	set( "object", ([
		"amount1"  : 1,
		"amount2"  : 1,
		"file2"    : "/obj/gift/hobowdan",
		"file1"    : "/open/ping/obj/poison_pill",
	]) );
	set( "owner", "blur" );
	set( "build", 11484 );
	set( "exits", ([
		"north"     : "/open/clan/hell/room/room34.c",
		"east"      : "/open/clan/hell/room/room136",
		"west"      : "/open/clan/hell/room/room51.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
�㽶�ܿ���Ȼû��λŮ��Ա��...
�������ڹ�˾����˼�Ů��WC
��ʵ���WC�����Ȿ��־���ݵ����Ӧ��....
��ʵ...�㽶�ܿ�������ƹ�͵���С�....
ֻ��С賵�VCD�����ұ���...��Ȼ���Ҳ��������һ��...
����...���ݴ����������͸¶�ɿ���Ϣ...
����㽶�ܿ��ĵ�֪��������X(����X��)��Bembem����...
���Ų��ú�ͻṫ������....wahaha
LONG);
	setup();
	replace_program(ROOM);
}
