inherit ROOM;
void create() {
	set( "short", "�ۿ�" );
	set( "exits", ([
		"north"     : "/open/clan/13_luck/room/room35.c",
		"out"       : "/open/clan/13_luck/room/room150",
	]) );
	set( "long", @LONG

    �����ǿ��Դȥʮ�������Ψһˮ·���ۿڱ�ͣ�˼���С����
���򴬼�����һ�Ҵ�������׼��Ҫ����ʱ���㿴�˿������ϵĲ��ˣ�
�����ƺ�������һ���Ĺ��ɣ����������ѵ���Ƭ���б��¹��󷨣���
��һ�룬����������Щ�̶����ɾͿ����ҵ������ˡ�

LONG);
	setup();
	replace_program(ROOM);
}
