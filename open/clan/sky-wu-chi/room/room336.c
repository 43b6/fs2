inherit ROOM;
void create() {
	set( "short", "Ԫ��Ͽ��" );
	set( "build", 12432 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room10",
		"north"     : "/open/clan/sky-wu-chi/room/room10",
		"enter"     : "/open/clan/sky-wu-chi/room/hall",
		"west"      : "/open/clan/sky-wu-chi/room/room10",
		"south"     : "/open/clan/sky-wu-chi/room/room10",
		"out"       : "/open/clan/sky-wu-chi/room/room337",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
�����㿴���˺ڰ׺����̻�������Ԫ��,��������Ԫ�����ܼ��Ҳ���ɢ��
����һ�ռ����ƶ�,���ƶ���ͬʱ�㿴��һЩ��ͬԪ�ص�ĥ��������һЩ
΢С����,���㿴����ռ��������һ�����ص�Բ��������ȡ��Щ΢С�ĵ���
�㲻֪������ʲô����,������Բ�򻹲�ʱ�ĔJ����,�·�����һ������
LONG);
	setup();
	replace_program(ROOM);
}
