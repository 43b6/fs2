inherit ROOM;
void create() {
	set( "short", "Ԫ�ؿռ�" );
	set( "build", 12273 );
	set( "light_up", 1 );
	set( "exits", ([
		"northwest" : "/open/clan/sky-wu-chi/room/hall",
		"southwest" : "/open/clan/sky-wu-chi/room/hall",
		"west"      : "/open/clan/sky-wu-chi/room/hall",
		"up"        : "/open/clan/sky-wu-chi/room/hall",
		"down"      : "/open/clan/sky-wu-chi/room/hall",
		"south"     : "/open/clan/sky-wu-chi/room/hall",
		"north"     : "/open/clan/sky-wu-chi/room/hall",
		"east"      : "/open/clan/sky-wu-chi/room/hall",
		"southeast" : "/open/clan/sky-wu-chi/room/hall",
		"northeast" : "/open/clan/sky-wu-chi/room/room336",
	]) );
	set( "long", @LONG
�����㿴���˺ڰ׺����̻�������Ԫ��,��������Ԫ�����ܼ��Ҳ���ɢ��
����һ�ռ����ƶ�,���ƶ���ͬʱ�㿴��һЩ��ͬԪ�ص�ĥ��������һЩ
΢С����,���㿴����ռ��������һ�����ص�Բ��������ȡ��Щ΢С�ĵ���
�㲻֪������ʲô����,������Բ�򻹲�ʱ�ĔJ����,�·�����һ������
LONG);
	setup();
	replace_program(ROOM);
}
