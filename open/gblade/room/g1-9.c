inherit ROOM;

void create ()
{
  set ("short", "���䳡");
  set ("long", @LONG
 
������ʯ�ذ屻̤��һ�����Ľ�ӡ���㾪�ȵ�˵����������������Ĺ�
�����Ա����������ŵĵ����������䣬�㿴���������������İ�������
Ȼ�ǰ׻��������ӣ�������Ǯ��һ�����ɡ�

LONG);

  set("objects", ([ /* sizeof() == 3 */
  "/open/gblade/npc/shouhon" : 1,
  "/obj/money/silver.c" : 1,
  "/open/gblade/npc/trainee" : 2,
]));
  set("light_up", 1);
  set("outdoors", "/open/gblade");
  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"g1-3",
]));

  setup();
}
