// Room: /u/d/devils/school3.c

inherit ROOM;

void create ()
{
  set ("short", "���䳡");
  set ("long", @LONG
������������ݽ��ڹ���֮��,һλ���δ��������ű�����׹�
,������֮ǿ,�Բ���ɵ��˶��о���������....���ϻ�������,�ĸ�
��ݵ���(���ܲ�С�ı��򵽵İ�!),��������������ǿ��뿪�Ƚϰ�ȫ
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"school2",
  "east" : __DIR__"school4",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/wu/npc/trainee1" : 1,
]));

  set("outdoors", "/open/wu");
  setup();
}
