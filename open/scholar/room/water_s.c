inherit ROOM;

void create ()
{
  set ("short", "����ˮ");
  set ("long", @LONG
��֪�ǲ������ŵĹ�ϵ���ܾ����Լ�������ˮ�У��ѵ��Լ���
��ˮ�У�����ֻ���Լ��Ķ��ǣ�����Щ�������������뷨��������
���鱾�������
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"water.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/scholar_water.c" : 1,
]));

  setup();
}
