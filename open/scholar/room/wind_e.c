inherit ROOM;

void create ()
{
  set ("short", "���÷�");
  set ("long", @LONG
��֪���ǲ������ŵĹ�ϵ�������������������Ĵ��ţ���������
�������ȥ��������������Ǵ��鱾���洫�����ģ��ѵ���ܺ�����
���������Ƕ��������⣿
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"wind",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/scholar_wind.c" : 1,
]));

  setup();
}
