inherit ROOM;
void create() {
	set( "short", "������ȱ��" );
	set( "exits", ([
		"north"     : "/open/clan/hell/room/room134",
		"east"      : "/open/clan/hell/room/room138.c",
		"west"      : "/open/clan/hell/room/room144.c",
	]) );
	set( "long", @LONG
����ɳ̲��������,���ֱ���ķ������ڴ��ƺ��и�ȱ��,����Ҳ��ʼ������
һЩ����,�����������ɳ��,����������ָ�����ϸ�Ĺ۲���һ��,��Ȼ���ֵ�
����һЩ����ԼԼ���㼣,�����˵ص���Ѱ�õ��ϵĵ�·,�㱧��Ѱ�����̵�ϲ
��,������,������Ͷȥ.

LONG);
	setup();
	replace_program(ROOM);
}
