inherit ROOM;
void create() {
	set( "short", "B" );
	set( "exits", ([
		"bor"       : "/open/clan/sky-wu-chi/room/room315",
		"borstquc"  : "/open/clan/sky-wu-chi/room/room18",
		"biwem"     : "/open/clan/sky-wu-chi/room/room175",
		"bookman"   : "/open/clan/sky-wu-chi/room/room275",
		"out"       : "/open/clan/sky-wu-chi/room/room17.c",
		"bbsman"    : "/open/clan/sky-wu-chi/room/room119",
		"bluefox"   : "/open/clan/sky-wu-chi/room/room94.c",
		"bacchus"   : "/open/clan/sky-wu-chi/room/room263",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
��һ���߲ʵĹ�â���ֺ�..�������һ������Ŀռ�[0;1;35mB[0m��
���ڵ������е�����...��������������Լ�������.....
�Ϳ��Եõ�����޼����������ý�...����..���������
�����ѧ...��Ϊ�ڽ��ı�����...����..һ�������մﵽ
��ɲ�ĵز�.....
LONG);
	setup();
	replace_program(ROOM);
}
