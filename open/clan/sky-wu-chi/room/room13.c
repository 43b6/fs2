inherit ROOM;
void create() {
	set( "short", "A" );
	set( "light_up", 1 );
	set( "exits", ([
		"anaid"     : "/open/clan/sky-wu-chi/room/room257",
		"amei"      : "/open/clan/sky-wu-chi/room/room251",
		"adede"     : "/open/clan/sky-wu-chi/room/room119",
		"aow"       : "/open/clan/sky-wu-chi/room/room18",
		"atropos"   : "/open/clan/sky-wu-chi/room/room138",
		"out"       : "/open/clan/sky-wu-chi/room/room17.c",
	]) );
	set( "long", @LONG
��һ���߲ʵĹ�â���ֺ�..�������һ������Ŀռ�[0;1;33mA[0m��
���ڵ������е�����...��������������Լ�������.....
�Ϳ��Եõ�����޼����������ý�...����..���������
�����ѧ...��Ϊ�ڽ��ı�����...����..һ�������մﵽ
��ɲ�ĵز�.....
LONG);
	setup();
	replace_program(ROOM);
}
