// Room : /open/clan/sky-wu-chi/room/room2.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
������С����������Ǯׯ���ųƸ����ʣ������
��Ϣ������Կ���Ǯׯ�������ⶼ��ɨ�øɸɾ�����
��ɷ����ϰ�İ�����࣬�Ե�ÿ���˶����������
���������׬����Ǯ�����������ֻҪ���¼���С
С��ָ��(cdonate),���������СС�İ����ܹ�����
��������ķ�չม�

LONG);
	set( "exits", ([ /* sizeof() == 1 */
		"east"      : "/open/clan/sky-wu-chi/room/room5.c",
]) );
	set( "no_transmit", 1 );
	set( "no_clean_up", 0 );
	set( "light_up", 1 );
	set( "short", "$HIC$������Ǯׯ$NOR$" );
	set( "cmkroom", 1 );
	set( "item_desc", ([ /* sizeof() == 2 */
  "��ǮͰ" : "",
  "bank" : "",
]) );
	setup();

	}
