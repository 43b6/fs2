inherit ROOM;

void create ()
{
  set ("short", "���û�");
  set ("long", @LONG
��֪�ǲ������ŵĹ�ϵ���ܾ��ÿڸ�����ģ������ȣ��ѵ���
���ŵ�ԭ���ܾ����Ǵ��鼮��ɢ�����ģ�������鱾��������ѽ��
����ֻ���ɺϡ�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "east" : __DIR__"fire.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/scholar_fire.c" : 1,
]));

  setup();
}
