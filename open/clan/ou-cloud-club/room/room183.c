inherit ROOM;
void create() {
	set( "short", " ��$HIG$��$NOR$   $HIY$��$NOR$   $WHT$��$NOR$" );
	set( "object", ([
		"amount2"  : 1,
		"file2"    : "/open/mogi/dragon/obj/scale",
		"file1"    : "/open/mogi/dragon/obj/scale",
		"amount1"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10074 );
	set( "owner", "linda" );
	set( "exits", ([
		"east"      : "/open/clan/ou-cloud-club/room/room184",
	]) );
	set( "long", @LONG

  ΢�������һ�ԴԸ���������Ҳ����������衣������һ̽��
һ����ӵ�����ӳ�������������ķ���һ����ǳ�ľ������������
�������ӽ����ݣ����˸е��淢�����ʣ�������������˫��մ��
��Ѫ���������ĵף���Ȼ������һƬ�ɾ�����Դ��

LONG);
	setup();
	replace_program(ROOM);
}
