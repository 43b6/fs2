inherit ROOM;

void create ()
{
  set ("short", "�뷿");
  set ("long", @LONG
�� !��һ�������ķ��䰡 ,��һ�����ʵĴ�λ�ڷ�������� ,
��һλ���ʳ��ڵ��ٸ� ,�����Ź���ǽ�ϵ�ͭ�� ,��������ͷ��
�������ĳ��� ,�������ǵ�ӳ�ھ��е��������� ,���ǽ�������
���� ,�����Լ� .

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"room29",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/poison/npc/ran.c" : 1,
]));

  setup();
}
