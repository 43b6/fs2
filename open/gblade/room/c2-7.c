inherit ROOM;

void create ()
{
  set ("short", "�ص�");
  set ("long", @LONG

���ܾ���һƬ��ڣ���ʹ�����л�ѣ���Ȼ����̫������ܵĻ�������ֻ
�ÿ���ǽ������ǰ����ͻȻǰ������һ���޺𣬰�������һ��������֪��
��ʲô����Ұ�޾�Ȼ�ܷ�����˵ľ��졣

LONG);

  set("light_up",0);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"c2-6.c",
  "east" : __DIR__"c2-8.c",
]));

  setup();
}
