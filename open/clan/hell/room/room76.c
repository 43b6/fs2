inherit ROOM;
void create() {
	set( "short", "$BLU$�ص����$NOR$" );
	set( "light_up", 1 );
	set( "build", 1102 );
	set( "exits", ([
		"out"       : "/open/clan/hell/room/room29.c",
		"down"      : "/open/clan/hell/room/room87",
		"east"      : "/open/clan/hell/room/room77",
		"north"     : "/open/clan/hell/room/room75.c",
		"west"      : "/open/clan/hell/room/room78.c",
	]) );
	set( "long", @LONG
�ݵ�һ�������㲻С�Ĵ����������淿��Ļ��غ�
��֪�����з��������������������������ޱȣ�
�ƺ����ڹؽ����˵ĵط�������������󣬱㿪ʼ����
������һ�����LѰ����֪�Ƿ���˭������ط���������
�����Ƿ����ʲô���ɸ��˵����ܡ�

LONG);
	setup();
	replace_program(ROOM);
}
