inherit ROOM;

void create ()
{
  set ("short", "���û�");
  set ("long", @LONG
��֪�ǲ������ŵĹ�ϵ���ܾ��������������̵ĸо����ѵ��ǽ�
�ŵ�ԭ�򣬺����Ǵ��鼮��ɢ�����ģ�������鱾��������ѽ������
ֻ���ɺϡ�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "south" : __DIR__"fire.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/scholar_fire.c" : 1,
]));

  setup();
}
