inherit ROOM;
void create() {
	set( "short", "����װ����" );
	set( "build", 7160 );
	set( "owner", "perth" );
	set( "light_up", 1 );
	set( "object", ([
		"amount9"  : 27,
		"file5"    : "/open/mogi/dragon/obj/scale",
		"file9"    : "/open/mogi/castle/obj/ninepill",
		"amount6"  : 1,
		"file8"    : "/open/mogi/castle/obj/sspill",
		"amount8"  : 7,
		"amount3"  : 142,
		"amount4"  : 1,
		"amount10" : 1,
		"file3"    : "/open/killer/obj/black",
		"file6"    : "/open/mogi/castle/obj/fire-king-head",
		"file4"    : "/open/killer/obj/dagger",
		"file10"   : "/open/gblade/obj/sa-head",
		"amount5"  : 1,
	]) );
	set( "exits", ([
		"out"       : "/open/clan/ou-cloud-club/room/room137",
	]) );
	set( "long", @LONG
ɱ�ֲ�Ŭ�ռ�����װ�����д������Ǹ����ռ������ı���
����Щδ�������İ�����ذ�ס����ߣ���Щ���������֣��������ɱ���������İ�
�Բ��Ŀ־��ּ����˼��֣��������ŵĽ������Ծ���������
���ǸϿ��뿪��䷿��ɣ���Ȼ��������������Σ����
LONG);
	setup();
	replace_program(ROOM);
}
