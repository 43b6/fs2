inherit ROOM;
void create() {
	set( "short", "$HIC$��$NOR$$HIG$��$NOR$$HIY$��$NOR$$HIR$ʹ$NOR$��$HIM$��ϰ������$NOR$" );
	set( "build", 12240 );
	set( "owner", "fsfs" );
	set( "exits", ([
		"west"      : "/open/clan/red_fire/room/room109",
	]) );
	set( "long", @LONG

������$HIC$��$NOR$$HIG$��$NOR$$HIY$��$NOR$$HIR$ʹ$NOR$��$HIM$��ϰ������$NOR$���������и���λ������
��ɢ���������$HIC$����$NOR$��������������ȴҲ�е��й�����
����������Ϯ��������˵�У���������Ϣʱ����$HIC$������
��װ$NOR$�ɰ���������Ϣ����������һ����Ȼ��һ�׷�װɢ
����$HIC$����$NOR$��ԭ��$HIC$��$NOR$$HIG$��$NOR$$HIY$��$NOR$$HIR$ʹ$NOR$�����˵Ⱥ�װ�����ҵ��ˡ�


LONG);
	setup();
	replace_program(ROOM);
}
