inherit ROOM;
void create() {
	set( "short", "F" );
	set( "exits", ([
		"out"       : "/open/clan/sky-wu-chi/room/room17",
		"flyway"    : "/open/clan/sky-wu-chi/room/room162",
		"free"      : "/open/clan/sky-wu-chi/room/room270",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
��һ���߲ʵĹ�â���ֺ�..�������һ������Ŀռ�[0;1;30mF[0m��
���ڵ������е�����...��������������Լ�������.....
�Ϳ��Եõ�����޼����������ý�...����..���������
�����ѧ...��Ϊ�ڽ��ı�����...����..һ�������մﵽ
��ɲ�ĵز�.....
LONG);
	setup();
	replace_program(ROOM);
}
