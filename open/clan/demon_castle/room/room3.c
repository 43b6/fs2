// Room : /open/clan/demon_castle/room/room3.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "short", "ħ�B�λú�" );
	set( "light_up", 1 );
	set( "no_clean_up", 0 );
	set( "exits", ([ /* sizeof() == 1 */
  "south" : "/open/clan/demon_castle/room/hall",
]) );
	set( "no_transmit", 1 );
	set( "long", @LONG

    �λú�λ�ڶ�ħ�Ǳ���������ɽ����Ϣ���£����ӯ�ۣ��������
����С������Ʈ�У�������������ʱ��������ɽ�������У�ˮ�е���
���������Σ��Ǻ����������ǵ��߶�����������������������̸������
�¼��������������ĵط���

LONG);
	set( "cmkroom", 1 );
	setup();

	}
