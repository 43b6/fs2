inherit ROOM;

void create ()
{
  set ("short", "����ˮ");
  set ("long", @LONG
��֪�ǲ������ŵĹ�ϵ���ܾ����������������ĸо����ѵ��ǽ�
�ŵ�ԭ�򣬺����Ǵ��鼮��ɢ�����ģ�������鱾��������ѽ������
ֻ���ɺϡ�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"water.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/scholar_water.c" : 1,
]));

  setup();
}
