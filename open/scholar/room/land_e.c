inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
��֪�ǲ������ŵĹ�ϵ���ܾ�������Ŀ���ʮ��ϡ�����ѵ��ǽ�
�ŵ�ԭ���ܾ����Ǵ��鼮��ɢ�����ģ�������鱾��������ѽ����
��ֻ���ɺϡ�
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"land.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/scholar/npc/scholar_land.c" : 1,
]));

  setup();
}
