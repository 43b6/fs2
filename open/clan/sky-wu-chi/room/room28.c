inherit ROOM;
void create() {
	set( "short", "G" );
	set( "exits", ([
		"gifa"      : "/open/clan/sky-wu-chi/room/room237",
		"out"       : "/open/clan/sky-wu-chi/room/room17",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
��һ���߲ʵĹ�â���ֺ�..�������һ������Ŀռ�[0;1;33mG[0m��
���ڵ������е�����...��������������Լ�������.....
�Ϳ��Եõ�����޼����������ý�...����..���������
�����ѧ...��Ϊ�ڽ��ı�����...����..һ�������մﵽ
��ɲ�ĵز�.....
LONG);
	setup();
	replace_program(ROOM);
}
