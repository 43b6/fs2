inherit ROOM;
void create() {
	set( "short", "��ʯȺ" );
	set( "exits", ([
		"up"        : "/open/clan/hell/room/room142",
	]) );
	set( "long", @LONG
��ˮ���ڽű߲��ϵ���������,ǿ��ĳ���������ʱҪ������뺣��,���µ�
��ʯ�¶��Ĵ����ں�ˮ֮��,ÿ�����ǳ��˳�֮�в��ϵر��ظ�����û������,��
Զ������һ��Ƚϸߴ����ʯ,�ƺ������ʵ�����,Ϊ�˲����𶥵�Σ��,���ǸϿ�
��ȥ��.

LONG);
	setup();
	replace_program(ROOM);
}
