inherit ROOM;
void create() {
	set( "short", "S" );
	set( "exits", ([
		"scorpio"   : "/open/clan/sky-wu-chi/room/room346",
		"shih"      : "/open/clan/sky-wu-chi/room/room244",
		"salicili"  : "/open/clan/sky-wu-chi/room/room41.c",
		"supalu"    : "/open/clan/sky-wu-chi/room/room313.c",
		"scorpizo"  : "/open/clan/sky-wu-chi/room/room349",
		"out"       : "/open/clan/sky-wu-chi/room/room17.c",
		"sogo"      : "/open/clan/sky-wu-chi/room/room316",
		"srat"      : "/open/clan/sky-wu-chi/room/room158.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
��һ���߲ʵĹ�â���ֺ�..�������һ������Ŀռ�[0;1;34mS[0m��
���ڵ������е�����...��������������Լ�������.....
�Ϳ��Եõ�����޼����������ý�...����..���������
�����ѧ...��Ϊ�ڽ��ı�����...����..һ�������մﵽ
��ɲ�ĵز�.....
LONG);
	setup();
	replace_program(ROOM);
}
