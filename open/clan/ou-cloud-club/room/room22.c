// Room : /open/clan/ou-cloud-club/room/room22.c
 inherit ROOM;

void create()
{
        seteuid(getuid());
	set( "long", @LONG
ͨ����ħ�ǵĵ�·���ǰ���ɽׯ�ڵ���Ҫ��·����
�ߵ�ǽ������$HIC$�����$NOR$������ɵģ���ʱ͸����һ����͸
���⣬��Ѹ����Ի����þ��ڵ�$HIR$������$NOR$��ȼ����˵����
����Ϩ�𣮶��ذ�����ʹ���޼᲻�ݵĽ��ʯ�������
�ɣ�һ����ȥ��â��ǧ��

LONG);
	set( "short", "���Ƶ�" );
	set( "build", 10026 );
	set( "light_up", 1 );
	set( "item_desc", ([
		"��Ӫ" : @ITEM
����ׯ�ڵı�Ӫ��
ITEM,
	]) );
set( "exits", ([         
		"up"        : "/open/clan/ou-cloud-club/room/room24",
		"south"     : "/open/clan/ou-cloud-club/room/room21.c",
	]) );

	}
