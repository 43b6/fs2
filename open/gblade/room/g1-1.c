inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG

��������߸ߵ�����һ�������ƽ��ң���ͷд�š����š������������
������ҫ�£������ҫ�۵Ľ�⣬���ɫ�Ĵ��ſ��ţ����������Ż�����
ʨͷ״������������ģ��Ե����ɷǷ��������Ը�����һ�����������
����ʯʨ�ӣ�ʨ����վ�������������������ơ�

LONG);

  set("objects", ([ /* sizeof() == 2 */
"/open/gblade/npc/guard2" : 2,
]));
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 4 */
	"south" : "/open/port/room/r4-1",
  "enter" : __DIR__"g1-2.c",
]));

  setup();
}
 int valid_leave(object me, string dir)
 {
	if(dir=="enter"&&present("gold-blade guard",environment(me)))
  {
  if(me->query("class")=="poisoner")
	return notify_fail("����ʿŭ�� : ħ��ͽ�����ȥһ��\n");
  if(me->query("class")=="killer")
    return notify_fail("����ʿ˵�� : ��ʲô , ���ȥɱ�˷Ż��� ?\n");
  if(me->query("family/family_name")=="����")
  return 1;
if(me->query_temp("allow-enter")==1)
return 1;
if(me->query("quests/bochen_trouble")!=1)
    return notify_fail("����ʿ��ס���ȥ· ,˵�� :����Ϊ������ʲô�ط� ? ������ȥ���� ?\n");
   }
  return 1;
  }
