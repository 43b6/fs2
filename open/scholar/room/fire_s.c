inherit ROOM;

void create ()
{
  set ("short", "���û�");
  set ("long", @LONG
��֪�ǲ������ŵĹ�ϵ���ܾ������ŵ�������ζ�����ѵ��鱾��
�����ˣ�����ֻ���Լ��Ķ��ǣ�����Щ�������������뷨��������
���鱾�������
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"fire.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/scholar_fire.c" : 1,
]));

  setup();
}
