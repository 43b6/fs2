inherit ROOM;
void create() {
	set( "short", "�����õ�" );
	set( "object", ([
		"amount2"  : 1,
		"file1"    : "/open/mon/obj/ghost-helmet",
		"file2"    : "/open/mon/obj/ghost-legging",
		"amount1"  : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 12000 );
	set( "owner", "ywarter" );
	set( "exits", ([
		"up"        : "/open/clan/sky-wu-chi/room/room151",
	]) );
	set( "long", @LONG
�����ǡ���ƿ�ӡ��ĵص�������������û���������ر�ֻ����һ�Ŵ�
���ˡ����߹�ȥ����һ�£��ŵ��ˡ�ԭ�����������꺮���������ڿ������
���м�û�뵽��Ȼ�������ǡ������塯�ϵ����ң��㿪ʼ�е���λ���˵���
���ˡ�����������ȴֻ��һ����ͷ���Ǿ��ǸϽ����ܣ����ⱻ��λ��������
�֣�������ɱ����ڡ�������֪��̫�ࡣ������ȷ�����а취�ܹ��ܳ����
�ط����Ҳ����Ļ�����������
LONG);
	setup();
	replace_program(ROOM);
}
