inherit ROOM;
void create() {
	set( "short", "����" );
	set( "exits", ([
		"north"     : "/open/clan/sky-wu-chi/room/room291",
	]) );
	set( "long", @LONG
�����߽��������ʱ��ͻȻ���ñ��������ƵĻ���ë���Ȼ
ͻȻ�������������ǧ�ﴫ������˵��....
��ʱ���֪���������еľ�����Ϊ�Դ�����
�Ӵ��޷���֪��...ֻ��Ϊ����Ч��
����һ��󽭺�������һ���µĴ�˵...ѩ��һ��˭������
LONG);
	setup();
	replace_program(ROOM);
}
