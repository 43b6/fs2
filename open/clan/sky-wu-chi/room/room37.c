inherit ROOM;
void create() {
	set( "short", "R" );
	set( "exits", ([
		"roboo"     : "/open/clan/sky-wu-chi/room/room241.c",
		"out"       : "/open/clan/sky-wu-chi/room/room17.c",
		"rue"       : "/open/clan/sky-wu-chi/room/room308.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
��һ���߲ʵĹ�â���ֺ�..�������һ������Ŀռ�[0;1;32mR[0m��
���ڵ������е�����...��������������Լ�������.....
�Ϳ��Եõ�����޼����������ý�...����..���������
�����ѧ...��Ϊ�ڽ��ı�����...����..һ�������մﵽ
��ɲ�ĵز�.....
LONG);
	setup();
	replace_program(ROOM);
}
