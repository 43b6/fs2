inherit ROOM;
void create() {
	set( "short", "$HIB$�� $HIY$ʥ�߻ý� $HIB$��$NOR$" );
	set( "exits", ([
		"out"       : "/open/clan/sky-wu-chi/room/room17.c",
		"limit"     : "/open/clan/sky-wu-chi/room/room304",
		"lazycancer" : "/open/clan/sky-wu-chi/room/room111.c",
		"lord"      : "/open/clan/sky-wu-chi/room/room239",
		"east"      : "/open/clan/sky-wu-chi/room/room33",
		"lts"       : "/open/clan/sky-wu-chi/room/room72.c",
		"lonsan"    : "/open/clan/sky-wu-chi/room/room140",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
��һ���߲ʵĹ�â���ֺ�..�������һ������Ŀռ�[0;1;34mL[0m��
���ڵ������е�����...��������������Լ�������.....
�Ϳ��Եõ�����޼����������ý�...����..���������
�����ѧ...��Ϊ�ڽ��ı�����...����..һ�������մﵽ
��ɲ�ĵز�.....
LONG);
	setup();
	replace_program(ROOM);
}
