inherit ROOM;
void create() {
	set( "short", "��Ժ" );
	set( "exits", ([
		"up"        : "/open/clan/hell/room/room128",
		"down"      : "/open/clan/hell/room/room129.c",
	]) );
	set( "long", @LONG
�����Ǳ��й����ʻ����˵ķ�Ժ����һ���Ǳ��˼�ٻ���
��Ϊ̫������ˣ��Ż�������������𲻳����йٵ�����
���⣬���ǻᱻ���й��߻ؼ�˯���! �úûش�(answer)�ɡ� 

  ר�ŶԸ����������й١�$HIB$��Ѫ����$NOR$�����й�(Judge ice)
$HIY$���й��ʵ�:��$HIW$ʮ�ż���ʮ�ߵ��ڶ���?$HIY$��$NOR$
LONG);
	setup();
	replace_program(ROOM);
}
