// Room : /open/clan/sky-wu-chi/room/room45.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
     �������С��ͷ���������ܳ����˳��������������������
 ʥ��̾����ķ��������ķ�����һ�����˾�������ǳ�����죬��
 ���Ȼ��֪�����ѵĴ����������㼫�ȵķ��ɣ�Ȼ���������ȴ��
 ����������Σ����ͻȻ���ܵ���Ϣ���������γ�һ��ѹ��������ѹ
 �������ſڽ������Ǹ��ˣ�Թ����ħС��ͷ��
LONG);
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "cmkroom", 1 );
	set( "short", "�����" );
	set( "owner", "ckkker" );
	set( "exits", ([
		"east"      : "/open/clan/sky-wu-chi/room/room10.c",
	]) );
	set( "object", ([
		"file10"   : "/open/mogi/castle/obj/fire-king-head",
		"amount10" : 1,
	]) );
	set( "light_up", 1 );
	set( "build", 10114 );
	set( "clan_room", "����޼�" );
	setup();

	}
