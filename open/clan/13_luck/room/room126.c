inherit ROOM;
void create() {
	set( "short", "����" );
	set( "object", ([
		"file2"    : "/open/magic-manor/obj/evil-kill-claw",
		"file4"    : "/open/fire-hole/obj/p-pill",
		"amount1"  : 1,
		"amount3"  : 1,
		"file1"    : "/open/killer/memory/static",
		"amount2"  : 1,
		"file3"    : "/open/gblade/obj/sa-head",
		"amount4"  : 1,
	]) );
	set( "build", 4345 );
	set( "owner", "suzukiami" );
	set( "light_up", 1 );
	set( "exits", ([
		"out"       : "/open/clan/13_luck/room/room56",
	]) );
	set( "long", @LONG
������
����֪��Ҫдɶ
���������Ȱ�
������ɶʱ�����������д
�������ܺ���
��Ϊ�������Ĵ��ⲻ�Ǻܺ�
���������￴�����д���ķ�������
���Ҫ�����õ������������ط���
����
�Ժ󿴵�С����������
Ƥ����
�ᱻ��
лл
LONG);
	setup();
	replace_program(ROOM);
}
