inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
��֪�ǲ������ŵĹ�ϵ���ܾ����ие�һ�����ĸо����ѵ��鱾
����ɰ������ֻ���Լ��Ķ��ǣ�����Щ�������������뷨��������
���鱾�������
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"land.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/scholar_land.c" : 1,
]));

  setup();
}
