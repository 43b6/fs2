inherit ROOM;

#define WADE_HOME "/u/w/wade/workroom"

void create ()
{
  set ("short", "LPC ���� -- ��Ӧ");
  set ("long", @LONG
��ν�Ķ�Ӧ, �е���������, ��һ����������������̬, ���Ǻܺ���,
���淽ʽ����: mapping *dbs;
ʹ�������������� dbs = player->query_entire_dbase();  ��������
���ϱ���, �� data player �����ĺ�����.
��Ӧ�ĳ�ʼֵ�� ([]), ͨ��Ҫ��ʼ��, ����һ�ַ�ʽ�� allocate() ����
�����ÿ�������Ｘ�������õ�����ʹ��, ��:
  set("exits", ([ "east" : "/u/w/wade/workroom", ]) );
  set("object", ([ "xxxxxx" : 1, "####" : 1, ]) );
������һ����Ӧʱ, ����ֱ����: mapping ob = query("objects");
	ob["/u/w/wade/npc/test"] = 1;
�����ͻ��һ�������, ���ԭ���Ѿ��� "/u/w/wade/npc/test", �Ǿ�
�Ǹı�����ֵ�� 1. ����Ҫɾ���Ļ�, ������ map_delete() ����.
    mapping map;
	map = ([ "gold": 20, "silver":30 ]);
	map = map + ([ "coin":100 ]);		// ��� gold, silver, coin
	map["gold"] = map["gold"] + 100;	// map["gold"] == 120 ��
LONG);

  set("exits", ([
	"back"	:	__DIR__"lpc",
	"adv"	:	__DIR__"LPC_mapping1",
  ]) );

  setup();
}
