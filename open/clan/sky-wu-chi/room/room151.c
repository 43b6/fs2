inherit ROOM;
void create() {
	set( "short", "������" );
	set( "owner", "miffy" );
	set( "light_up", 1 );
	set( "build", 12120 );
	set( "exits", ([
		"up"        : "/open/clan/sky-wu-chi/room/room142",
		"down"      : "/open/clan/sky-wu-chi/room/room143.c",
		"west"      : "/open/clan/sky-wu-chi/room/room78.c",
		"south"     : "/open/clan/sky-wu-chi/room/room152.c",
		"enter"     : "/open/clan/sky-wu-chi/room/room137",
		"north"     : "/open/clan/sky-wu-chi/room/room144.c",
	]) );
	set( "long", @LONG
���߽��˰�������ͷ��������һ����׽��ֵ�����д�š�����ɽ�ӡ���
�������е���������ط������ˡ���ƿ�ӡ�������۾���һֱ������������
�������к��������԰����Ծӡ����㿴�������ֵ�ͬʱ���ŵ��ˣ���Ϊһ��
�ǽ��ű�˪һ������ȼ���Ż��档�����������ƺ���Ҫ����һ�ֲ�֪������
���书�����Ļ���������Ȼ�����ء����㿴���˵������ص�ͬʱ��ֻ������
���һ���������������ؾ�����û�뵽����Ȼ�������ؾ�ͬʱ�˳�Ҳͬʱ��
�ϡ�Ҳ����Ҳ��¶���׹⡣
LONG);
	setup();
	replace_program(ROOM);
}
