inherit ROOM;
void create() {
	set( "short", "N" );
	set( "exits", ([
		"out"       : "/open/clan/sky-wu-chi/room/room17.c",
		"necker"    : "/open/clan/sky-wu-chi/room/room267",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
��һ���߲ʵĹ�â���ֺ�..�������һ������Ŀռ�[0;1;33mN[0m��
���ڵ������е�����...��������������Լ�������.....
�Ϳ��Եõ�����޼����������ý�...����..���������
�����ѧ...��Ϊ�ڽ��ı�����...����..һ�������մﵽ
��ɲ�ĵز�.....
LONG);
	setup();
	replace_program(ROOM);
}
