inherit ROOM;
void create() {
	set( "short", "$HIC$��$NOR$$HIG$��$NOR$$HIY$��$NOR$$HIR$ʹ$NOR$��$HIM$������$NOR$" );
	set( "build", 13011 );
	set( "owner", "fsfs" );
	set( "exits", ([
		"south"     : "/open/clan/red_fire/room/room109",
	]) );
	set( "long", @LONG

������$HIC$��$NOR$$HIG$��$NOR$$HIY$��$NOR$$HIR$ʹ$NOR$��$HIM$������$NOR$��һ�����ҩζ����Ʈ������
ǰ���ˣ�������һ������ҩ�裬ɢ��������ҫ��$HIY$��â$NOR$��
�����ҩ����˽���һ����֪������������Ǿ�������
����ҩ�������Ĵ���������˳��ǣ������һЩ��������
����ǰȥ��ʱ��ͻȻ���˴�ȵ�����$HIM$�η�С����������
��͵ҩ$NOR$�����йɾ����������˳�ȥ��


LONG);
	setup();
	replace_program(ROOM);
}
