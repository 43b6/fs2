inherit ROOM;

void create ()
{
  set ("short", "���÷�");
  set ("long", @LONG
��֪���ǲ������ŵĹ�ϵ���ܾ����й����������ϴ�������ֵ�
�ǣ����ܶ����ܱڲ�Ӧ���з�ᴵ��������������鱾���⣬û����
�����ˣ������Լ�̫�����ˡ�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"wind.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/scholar_wind.c" : 1,
]));

  setup();
}
