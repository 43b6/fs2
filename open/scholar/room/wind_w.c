inherit ROOM;

void create ()
{
  set ("short", "���÷�");
  set ("long", @LONG
��֪���ǲ������ŵĹ�ϵ���ܾ���վ��̫���Ƶģ�ҡҡ��׹�ĸ�
�����ǵذ���ҡ���𣿻����Լ�ͷ�裿��������������£������̫
�õ�ԭ��ɡ�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"wind",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/scholar_wind.c" : 1,
]));

  setup();
}
