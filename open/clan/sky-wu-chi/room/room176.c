inherit ROOM;
void create() {
	set( "short", "С־�ķ���" );
	set( "object", ([
		"file1"    : "/open/sky/obj/lucky_grasslink",
		"amount1"  : 1,
	]) );
	set( "owner", "biwem" );
	set( "build", 10026 );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room357",
		"north"     : "/open/clan/sky-wu-chi/room/room210.c",
		"up"        : "/open/clan/sky-wu-chi/room/room175.c",
		"chome"     : "/open/clan/sky-wu-chi/room/hall.c",
	]) );
	set( "light_up", 1 );
	set( "long", @LONG
      �˴����������˽������ڵ��ϳ����˽��ۣ�������
  �����������˺ܾõ����ӣ���ϸһ��ԭ��������޼���
             [0;1;5;33m��[1;5mu[1;5m��[1;5mC[1;5m��[1;5m��[1;5m��[1;5m��[1;5m��[1;5m��[1;5m��[1;5mv[1;5;36m��[1;5mp[1;5m��[1;5m��[1;5m��[1;5mM[1;5m��[1;5m��[1;5m��[1;5m��[1;5m��[1;5m��[0m
  �ڵ�����һ��ʯ������д�ţ�
        ����������...ֻ��һ��·  
                 [0;1;5;31m��[1;5my[1;5m��[1;5m��[1;5m��[1;5mz[0m
        [0;1;5;36m [1;5m [1;5m [1;5m [1;5m [1;5m [1;5m*[1;5m^[1;5m_[1;5m^[1;5m*[1;5m.[1;5m.[1;5m��[1;5mp[1;5m��[1;5m��[1;5m.[1;5m.[0m

LONG);
	setup();
	replace_program(ROOM);
}
